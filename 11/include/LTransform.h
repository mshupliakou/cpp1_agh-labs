#include <iostream>
#ifndef LTRANSFORM_H
#define LTRANSFORM_H
#include <vector>
#include<algorithm>

class LTransform{
    double d;
    public:
    LTransform(double d):d(d){}
    
    /// @brief functor of getting up a line
    /// @param line the line whose b value we are going to increase
    void operator()(Line& line) const {
        line = Line(line.getA(), line.getB() + d);
    }
};


#endif