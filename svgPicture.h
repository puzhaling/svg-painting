
#ifndef SVG_PIC_H
#define SVG_PIC_H

#include "libraries.h"
#include "rectangle.h"
#include "circle.h"


class svgPicture {
private:
	std::vector<Shape*>container{};

public:
	svgPicture();
	~svgPicture();

	void clearContainer();
	void addFigure(Shape* shape);
	const auto& getContainer() const;
};

std::ostream& operator<<(std::ostream& out, const svgPicture* const pic);

#endif