
#include "circle.h"

Circle::Circle(double inX, double inY, std::string_view inColour, double inRadius) :
	Shape(inX, inY, inColour), radius{ inRadius }
{};

std::ostream& operator<<(std::ostream& out, const Circle& c) {
	return out << "<circle cx=\"" << c.x << "\" cy=\"" << c.y << "\" r=\"" << c.radius << "\"" << " fill=\"" << c.colour << "\"/>" << '\n';
}