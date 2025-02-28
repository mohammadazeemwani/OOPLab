#include <iostream>
using namespace std;

class Complex
{
    private: 
        int real;
        int imag;
    public: 
        Complex(int r, int i): real(r),  imag(i) {}
        Complex operator + (Complex c) {
            return Complex(real + c.real, imag + c.imag);
        }
        void show() {
            cout << "Complex point: ( " << real << " , " << imag << " ).";
        }
};

int main() {
    Complex c1(2, 3), c2(2, 4);

    (c1 + c2).show();
}