
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "libraries.h"
#include "shape.h"

class Rectangle : public Shape {
public:
	Rectangle(Point2d point, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0);
	virtual ~Rectangle();

	virtual std::string draw() const;

/*######################################*/
	double width{};
	double height{};
	double rotate{};
};

std::ostream& operator<<(std::ostream& out, const Rectangle* const r);

#endif // RECTANGLE_H