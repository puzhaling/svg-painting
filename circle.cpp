
#include "circle.h"

Circle::Circle(double inX, double inY, std::string_view inColour, double inRadius) :
	Shape(inX, inY, inColour), radius{ inRadius }
{}

Circle::~Circle() {}

std::string 
Circle::draw() const {
	return "<circle cx=\"" +
		   std::to_string(x) + "\" cy=\"" + 
		   std::to_string(y) + "\" r=\"" + 
		   std::to_string(radius) + "\"" + " fill=\"" +
		   static_cast<std::string>(colour) + "\"/>\n";
}

std::ostream& operator<<(std::ostream& out, const Circle* const c) {
	return out << "<circle cx=\"" << c->x << "\" cy=\"" << c->y << "\" r=\"" << c->radius << "\"" << " fill=\"" << c->colour << "\"/>" << '\n';
}