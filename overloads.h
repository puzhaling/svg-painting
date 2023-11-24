#ifndef OVERLOADS
#define OVERLOADS

#include "rectangle.h"
#include "circle.h"

std::ostream& operator<<(std::ostream& out, const Rectangle* const r);
std::ostream& operator<<(std::ostream& out, const Circle* const c);

#endif // OVERLOADS