#include <iostream>
using namespace std;
class shape
{
public:
    virtual void draw() = 0;
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "drawing a circle" << endl;
    }
};
class square : public shape
{
public:
    void draw()
    {   cout<<"***derived class square***"<<endl;
        cout << "drawing a square" << endl;   
    }
};
class elipse : public shape
{
public:
    void draw()
    {
        cout << "drawing an elipse" << endl;
    }
};
int main()
{
    shape *pshape;
    pshape = new circle;
    pshape->draw();
    pshape = new square;
    pshape->draw();
    pshape = new elipse;
    pshape->draw();
    return 0;
}