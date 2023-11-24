
#include "libraries.h"
#include "rectangle.h"
#include "overloads.h"


/*
<svg xmlns="http://www.w3.org/2000/svg" width="600" height="350" viewBox="0 0 124 124" fill="none">
 <rect x="-20" y="30" transform="rotate(-9 0 0)" width="130" height="55" fill="#e28743"/>
 <rect x="-25" y="40" transform="rotate(12 0 0)" width="180" height="70" fill="#063970"/>
 <svg height = "70" width="200">
   <circle cx="60" cy="100" r="50" fill="#21130d"></circle>
   <circle cx="110" cy="100" r="40" fill="#21130d"></circle>
 </svg>
</svg>
*/
int
main() {
	std::ofstream svg{ "pic.svg" };

	if (svg.is_open()) {
		// NESTING LEVEL #1
		svg << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"600\" height=\"350\" viewBox=\"0 0 124 124\" fill=\"none\">" << std::endl;

		// rectangles properties : x, y, colour, width, height, rotate
		Rectangle* rectangle1{ new Rectangle(-20, 30, "#e28743", 130, 55, -9) };
		Rectangle* rectangle2{ new Rectangle(-25, 40, "#063970", 180, 70, 12) };

		svg << rectangle1;
		svg << rectangle2;

		delete(rectangle1);
		delete(rectangle2);

		// NESTING LEVEL #2
		svg << "<svg height=\"70\" width=\"200\"" << ">\n";

			// circles properties : x, y, colour, radius
			Circle* circle1{ new Circle(60, 100, "#21130d", 50) };
			Circle* circle2{ new Circle(110, 100, "#21130d", 40) };

			svg << circle1;
			svg << circle2;

			delete(circle1);
			delete(circle2);

		svg << "</svg>" << std::endl;
		// NESTING LEVEL #2 END.

		svg << "</svg>" << std::endl;
		// NESTING LEVEL #1 END.
	}

	svg.close();
	return 0;
}