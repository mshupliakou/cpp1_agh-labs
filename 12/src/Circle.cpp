#define _USE_MATH_DEFINES
#include <iostream>
#include "Circle.h"
#include <cmath>
#include <math.h>


    double Circle::Area(){
        return radius*radius*M_PI;
    }
    Circle Circle::operator +(Circle& other) const{
        return Circle("Circle", radius+other.radius);
    }
    Circle& Circle:: operator =(const Circle& other){
        if(this!=&other){
            name=other.name;
            radius=other.radius;
        }
        return *this;
    }