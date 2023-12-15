
#ifndef SVG_PIC_H
#define SVG_PIC_H

#include <string_view>
#include <iostream>
#include <vector>

struct Point2d {
	int x{};
	int y{};
};

// struct Point2d {
// 	int x{};
// 	int y{};
// };

class Shape {
public:
	Shape(Point2d point, std::string_view inColour);
	virtual ~Shape() = default;

	virtual std::string draw() const = 0;

	Point2d point{};
	std::string_view colour{};
};

class Circle : public Shape {
public:
	Circle(Point2d point, std::string_view inColour, double inRadius);
	virtual ~Circle() = default;

	friend std::ostream& operator<<(std::ostream& out, const Circle* const c);

	virtual std::string draw() const;

	double radius{};
};

class Rectangle : public Shape {
public:
	Rectangle(Point2d point, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0);
	virtual ~Rectangle() = default;

	friend std::ostream& operator<<(std::ostream& out, const Rectangle* const r);

	virtual std::string draw() const;

	double width{};
	double height{};
	double rotate{};
};

class svgPicture {
public:
	~svgPicture();

	void clearContainer();
	void addShape(Shape* shape);
	void reset();
	
	friend std::ostream& operator<<(std::ostream& out, const svgPicture* const pic);

private:
	std::vector<Shape*>container{};
};

#endif // SVG_PIC_H