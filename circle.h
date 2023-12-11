
#ifndef CIRCLE_H
#define CIRCLE_H

#include "libraries.h"
#include "shape.h"

class Circle : public Shape {
public:
	Circle(Point2d point, std::string_view inColour, double inRadius);
	virtual ~Circle();

	virtual std::string draw() const;

/*######################################*/
	double radius{};
};

std::ostream& operator<<(std::ostream& out, const Circle* const c);

#endif // CIRCLE_H