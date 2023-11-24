
#include "circle.h"

Circle::Circle(double inX, double inY, std::string_view inColour, double inRadius) :
	Shape(inX, inY, inColour), radius{ inRadius }
{};
