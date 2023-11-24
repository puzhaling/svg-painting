
#include "rectangle.h"

Rectangle::Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0) : 
	Shape(inX, inY, inColour), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
{};