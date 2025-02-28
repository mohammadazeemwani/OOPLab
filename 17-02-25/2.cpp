#include <iostream>
using namespace std;

class Rectangle {
    private: 
        int l;
        int b;
    public: 
        Rectangle(): l(10), b(10) {
            cout << "Default initializatioin used: l="<<l<<" b="<<b<<endl;
        }
        Rectangle(int length, int breadth): l(length), b(breadth) {
            cout << "Rectangle initialized with dimentions: l="<<length<<" b="<<breadth<<endl;
        }
        

        void setDimentions(int newL, int newB) {
            l=newL;
            b=newB;
            cout << "Successfully updated with new dimentions";
        }

        int getArea() {
            return l*b;
        }

        void showDimentions() {
            cout << "Current Dimentions: l=" << l << " b=" << b << endl; 
        }
};

int main(){
    Rectangle rect1;

    cout << "Area of Rect1: " << rect1.getArea() << endl;
    rect1.showDimentions();
    rect1.setDimentions(12, 12);
    cout << "Area of Rect1: " << rect1.getArea() << endl;

    Rectangle rect2(24, 12);
    cout << "Area of Rect2: " << rect2.getArea() << endl;

}