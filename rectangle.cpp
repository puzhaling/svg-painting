
#include "rectangle.h"

Rectangle::Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0) : 
	Shape(inX, inY, inColour), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
{}

Rectangle::~Rectangle() {}

std::string
Rectangle::draw() const {
	return "<rect x=\"" + 
			std::to_string(x) + "\" y=\"" + 
			std::to_string(y) + "\" transform=\"rotate(" + 
			std::to_string(rotate) + " 0 0)" + "\" width=\"" + 
			std::to_string(width) + "\" height=\"" + 
			std::to_string(height) + "\" fill=\"" + 
			static_cast<std::string>(colour) + "\"/>\n";
}

std::ostream& operator<<(std::ostream& out, const Rectangle* const r) {
	return out << "<rect x=\"" << r->x << "\" y=\"" << r->y << "\" transform=\"rotate(" << r->rotate << " 0 0)" << "\" width=\"" << r->width<< "\" height=\"" << r->height << "\" fill=\"" << r->colour << "\"/>" << '\n';
}