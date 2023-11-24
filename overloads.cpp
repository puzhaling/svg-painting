
#include "overloads.h"

std::ostream& operator<<(std::ostream& out, const Rectangle* const r) {
	os << "<rect x=\"" << r->x << "\" y=\"" << r->y << "\" transform=\"rotate(" << r->rotate << " 0 0)" << "\" width=\"" << r->width<< "\" height=\"" << r->height << "\" fill=\"" << r->colour << "\"/>" << '\n';
}