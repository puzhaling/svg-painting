
#include "svgPicture.h"

svgPicture::svgPicture() : 
	container{} 
{};

svgPicture::~svgPicture() {
	clearContainer();
}

void
svgPicture::addFigure(Shape* shape) {
	container.push_back(shape);
}

void
svgPicture::clearContainer() {
	for (Shape* shape_ptr : container) {
		delete(shape_ptr); 
	}
	container.clear();
};

std::ostream& operator<<(std::ostream& out, const svgPicture* const pic) {
	out << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"600\" height=\"350\" viewBox=\"0 0 124 124\" fill=\"none\">";
	for (Shape* shape_ptr : pic->container) 
		out << shape_ptr->draw();
	out << "</svg>\n";
	return out;
}
