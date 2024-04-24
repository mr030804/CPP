#include <iostream>

class Circle {
private:
      double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}
    
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() const {
        return radius;
    }
    double area() const {
        return 3.14159 * radius * radius;
    }
    double circumference() const {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle circle(5);
    
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;
    std::cout << "Circumference: " << circle.circumference() << std::endl;

    return 0;
}

