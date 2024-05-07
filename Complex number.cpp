#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}
    
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    void display() const {
        std::cout << real;
        if (imaginary >= 0)
            std::cout << " + " << imaginary << "i" << std::endl;
        else
            std::cout << " - " << -imaginary << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 4); // 3 + 4i
    Complex c2(1, 2); // 1 + 2i

    Complex sum = c1 + c2; 
    Complex difference = c1 - c2; 

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    difference.display();

    return 0;
}

