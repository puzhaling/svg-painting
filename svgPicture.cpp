
#include "svgPicture.h"

// SHAPE 

Shape::Shape(Point2d inPoint, std::string_view inColour) :
	point{ inPoint }, colour{ inColour }
{}


// CIRCLE

Circle::Circle(Point2d point, std::string_view inColour, double inRadius) :
	Shape(point, inColour), radius{ inRadius }
{}

std::string
Circle::draw() const {
	return "<circle cx=\"" +
		   std::to_string(point.x) + "\" cy=\"" + 
		   std::to_string(point.y) + "\" r=\"" + 
		   std::to_string(radius) + "\"" + " fill=\"" +
		   static_cast<std::string>(colour) + "\"/>\n";
}

std::ostream& operator<<(std::ostream& out, const Circle* const c) {
	return out << "<circle cx=\"" << c->point.x << "\" cy=\"" << c->point.y << "\" r=\"" << c->radius << "\"" << " fill=\"" << c->colour << "\"/>" << '\n';
}


// RECTANGLE

Rectangle::Rectangle(Point2d point, std::string_view inColour, double inWidth, double inHeight, double inRotate) : 
	Shape(point, inColour), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
{}

std::string
Rectangle::draw() const {
	return "<rect x=\"" + 
			std::to_string(point.x) + "\" y=\"" + 
			std::to_string(point.y) + "\" transform=\"rotate(" + 
			std::to_string(rotate) + " 0 0)" + "\" width=\"" + 
			std::to_string(width) + "\" height=\"" + 
			std::to_string(height) + "\" fill=\"" + 
			static_cast<std::string>(colour) + "\"/>\n";
}

std::ostream& operator<<(std::ostream& out, const Rectangle* const r) {
	return out << "<rect x=\"" << r->point.x << "\" y=\"" << r->point.y << "\" transform=\"rotate(" << r->rotate << " 0 0)" << "\" width=\"" << r->width<< "\" height=\"" << r->height << "\" fill=\"" << r->colour << "\"/>" << '\n';
}


// SVG_PICTURE

svgPicture::~svgPicture() {
	clearContainer();
}

void
svgPicture::clearContainer() {
	for (Shape* shape_ptr : container) {
		delete(shape_ptr); 
	}
	container.clear();
};

void
svgPicture::addShape(Shape* shape) {
	container.push_back(shape);
}

void // Resetting a class back to default state
svgPicture::reset() {
	//*this = {};
	*this = svgPicture();
}

std::ostream& operator<<(std::ostream& out, const svgPicture* const pic) {
	out << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"600\" height=\"350\" viewBox=\"0 0 124 124\" fill=\"none\">";
	for (Shape* shape_ptr : pic->container) 
		out << shape_ptr->draw();
	out << "</svg>\n";
	return out;
}
