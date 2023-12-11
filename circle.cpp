
#include "circle.h"

Circle::Circle(Point2d point, std::string_view inColour, double inRadius) :
	Shape(point, inColour), radius{ inRadius }
{}

Circle::~Circle() {};

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