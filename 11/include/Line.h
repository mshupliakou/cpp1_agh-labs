#include <iostream>
#ifndef LINE_H
#define LINE_H

/// @brief describes a line
class Line{
    double a;
    double b;
    double x0 = -b / a;
    public:

    Line(double a, double b):a(a), b(b){}

    /// @brief overload for line
    /// @param os 
    /// @param l 
    /// @return overloaded << line 
    friend std::ostream& operator<<(std::ostream& os, const Line& l) {
        os << "y = " << l.a << " * x + " << l.b << "      x0 = " << l.x0 << std::endl;
        return os;
    }

    /// @brief getter for a
    /// @return a
    double getA() const;

    /// @brief getter for b
    /// @return b
    double getB() const;
};

#endif