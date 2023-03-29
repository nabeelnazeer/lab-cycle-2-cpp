#include <iostream>
#include <math.h>

class rectangle // defining a class to calculate area of reactangle
{
private:
    double length;
    double breadth;

public:
    double area(double x, double y)
    {
        length = x;
        breadth = y;
        return length * breadth;
    }
};
class square // defining a class to calculate area of square
{
private:
    double side;

public:
    double area(double s)
    {
        side = s;
        return side * side;
    }
};
class triangle // defining a class to calculate area of triangle
{
private:
    double side1, side2, side3, sp, a;

public:
    double area(double x, double y, double z)
    {
        side1 = x;
        side2 = y;
        side3 = z;
        sp = side1 + side2 + side3;
        double s = sp / 2;
        a = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        return a;
    }
};
class circle // defining a class to find area of circle
{
private:
    double r;

public:
    double area(double x)
    {
        r = x;
        return 3.14 * r * r;
    }
};
class paralellogram
{
private:
    double base;
    double height;

public:
    double area(double x, double y)
    {
        base = x;
        height = y;
        return base * height;
    }
};
int main() // main function
{
    // taking inputs to calculate area of rectangle
    std::cout << "the program can calculate area of reactange,square,triangle,circle and parallelogram" << std::endl;
    rectangle r;
    double l, b;
    std::cout << "enter length of rectangle : " << std::endl;
    std::cin >> l;
    std::cout << "enter breadth of rectangle : " << std::endl;
    std::cin >> b;
    std::cout << "the area of reactangle is : " << r.area(l, b) << std::endl;
    // calculating area of square
    square s;
    double side;
    std::cout << "enter side of square : " << std::endl;
    std::cin >> side;
    std::cout << "the area of square is : " << s.area(side) << std::endl;
    // calculating area of triangle
    triangle t;
    double s1, s2, s3;
    std::cout << "enter three sides of triangle : " << std::endl;
    std::cin >> s1 >> s2 >> s3;
    std::cout << "the area of triangle is : " << t.area(s1, s2, s3) << std::endl;
    // calculating area of circle
    circle c;
    double radius;
    std::cout << "enter the radius of circle : " << std::endl;
    std::cin >> radius;
    std::cout << "area of cirle is : " << c.area(radius) << std::endl;
    // calculating area of parallelogram
    paralellogram p;
    double base, height;
    std::cout << "enter base of paralellogram" << std::endl;
    std::cin >> base;
    std::cout << "enter height of parallelogram" << std::endl;
    std::cin >> height;
    std::cout << "the area of parallelogram : " << p.area(base, height) << std::endl;
    return 0;
}
