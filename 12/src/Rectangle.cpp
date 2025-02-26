#include <iostream>
#include "Rectangle.h"

    double Rectangle::Area(){
        return length*width;
    }
    Rectangle Rectangle:: operator*(double d) const {
        return Rectangle(name, length * d, width * d);
    }
    Rectangle& Rectangle ::operator=(const Rectangle& rec) {
    if (this != &rec) { 
        name = rec.name;
        length = rec.length;
        width = rec.width;
    }
    return *this;
}
