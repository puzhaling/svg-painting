
#include "rectangle.h"

Rectangle::Rectangle(Point2d point, std::string_view inColour, double inWidth, double inHeight, double inRotate) : 
	Shape(point, inColour), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
{}

Rectangle::~Rectangle() {};

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