#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "Circle.h"

void Circle::print() const{
    std::cout<<"Circle: center("<<point.first<<",  "<<point.second<<"), radius="<<radius<<std::endl;
}
double Circle::area() const{
    return M_PI*radius*radius;
}
double Circle::perimeter() const{
    return M_PI*radius*2;
}
Circle& Circle::translate(double dx, double dy){
        point.first+=dx;
        point.second+=dy;
        return *this;
}
bool Circle::operator==(const Circle& b) const {
    return this->area() == b.area();
}