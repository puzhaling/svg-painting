
#include "libraries.h"
#include "rectangle.h"
#include "circle.h"
#include "overloads.h"

std::ostream& operator<<(std::ostream& out, const Rectangle* const r) {
	return out << "<rect x=\"" << r->x << "\" y=\"" << r->y << "\" transform=\"rotate(" << r->rotate << " 0 0)" << "\" width=\"" << r->width<< "\" height=\"" << r->height << "\" fill=\"" << r->colour << "\"/>" << '\n';
}

std::ostream& operator<<(std::ostream& out, const Circle* const c) {
	return out << "<circle cx=\"" << c->x << "\" cy=\"" << c->y << "\" r=\"" << c->radius << "\"" << " fill=\"" << c->colour << "\"/>" << '\n';
}