#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;
    r.setDimensions(5.0, 3.0);
    cout << "Area of the rectangle: " << r.getArea() << endl;
    return 0;
}
