#ifndef RECTANGLE
#define RECTANGLE

#include "libraries.h"
#include "shape.h"

struct Rectangle : Shape {
	double width{};
	double height{};
	double rotate{};

	Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0) : 
		Shape(inX, inY, inColour), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
	{};
};

#endif // RECTANGLE