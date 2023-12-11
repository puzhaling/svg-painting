
#ifndef SVG_PIC_H
#define SVG_PIC_H

#include "libraries.h"
#include "rectangle.h"
#include "circle.h"

class svgPicture {
public:
	svgPicture();
	~svgPicture();

	void clearContainer();
	void addFigure(Shape* shape);

	friend std::ostream& operator<<(std::ostream& out, const svgPicture* const pic);

private:
	std::vector<Shape*>container{};
};

#endif