
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "libraries.h"
#include "shape.h"

struct Rectangle : Shape {
	double width{};
	double height{};
	double rotate{};

	Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate);
	virtual ~Rectangle();
	virtual std::string draw() const;
};

std::ostream& operator<<(std::ostream& out, const Rectangle* const r);

#endif // RECTANGLE_H