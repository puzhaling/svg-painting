
#ifndef SHAPE_H
#define SHAPE_H

#include "libraries.h"
#include "point2d.h"

class Shape {
public:
	Shape(Point2d point, std::string_view inColour);
	virtual ~Shape();

	virtual std::string draw() const = 0;

/*######################################*/
	Point2d point{};
	std::string_view colour{};
};

#endif // SHAPE_H