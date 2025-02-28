#include <iostream>
using namespace std;

class Circle {
    private: 
        double radius;
    public: 
        Circle(double r): radius(r) {}

        double calculateArea() {
            return 3.141*radius*radius;
        }

        void setRadius(double r) {
            if (r > 0) radius = r;
            else cout << "Invalid radius" << endl;
        }

        double getRadius() {
            return radius;
        }
};

int main() {
    Circle myCircle(8);

    cout << "Radius of circle:" << myCircle.getRadius() << endl;
    cout << "Area of circle:" << myCircle.calculateArea() << endl;

    return 0;
}