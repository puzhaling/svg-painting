
#include "shape.h"

Shape::Shape(Point2d inPoint, std::string_view inColour) :
	point{ inPoint }, colour{ inColour }
{}

Shape::~Shape() {};