#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void numberOfSides() = 0;
};
class trapezoid : public Shape
{
public:
    void numberOfSides() { cout << "Number of sides in trapezoid is\n 4\n"; }
};
class triangle : public Shape
{
public:
    void numberOfSides() { cout << "Number of sides in the triangle is\n 3\n"; }
};
class hexagon : public Shape
{
public:
    void numberOfSides() { cout << "Number of sides in hexagon is\n 6\n"; }
};
int main()
{
    trapezoid tr;
    triangle tri;
    hexagon hex;

    tr.numberOfSides();
    tri.numberOfSides();
    hex.numberOfSides();

    return 0;
}
