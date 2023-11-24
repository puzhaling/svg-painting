
#include "rectangle.h"

Rectangle::Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0) : 
	Shape(inX, inY, inColour), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
{};

std::ostream& operator<<(std::ostream& out, const Rectangle* const r) {
	return out << "<rect x=\"" << r->x << "\" y=\"" << r->y << "\" transform=\"rotate(" << r->rotate << " 0 0)" << "\" width=\"" << r->width<< "\" height=\"" << r->height << "\" fill=\"" << r->colour << "\"/>" << '\n';
}