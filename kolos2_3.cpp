#include <cmath>
#include <iostream>
class Segment {
public:
    virtual double area() = 0;
    virtual double circumference() = 0;
};

class Trojkat : public Segment {
private:
    double a, h;
public:
    Trojkat(double a, double h) {
        this->a = a;
        this->h = h;
    }

    double area() {
        return (a*h*0.5);
    }

    double circumference() {
        double c = sqrt(a*a + h*h);
        return (a+h+c);
    }
};

class Kwadrat : public Segment {
private:
    double a;
public:
    Kwadrat(double a) {
        this->a = a;
    }

    double area() {
        return (a*a);
    }

    double circumference() {
        return (4*a);
    }
};

class Prostokat : public Segment {
private:
    double a, b;
public:
    Prostokat(double a, double b) {
        this->a = a;
        this->b = b;
    }

    double area() {
        return (a*b);
    }

    double circumference() {
        return (2*a + 2*b);
    }
};
