#ifndef RECTANGLE
#define RECTANGLE

#include "libraries.h"
#include "shape.h"

struct Rectangle : Shape {
	double width{};
	double height{};
	double rotate{};

	Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate);
};

#endif // RECTANGLE