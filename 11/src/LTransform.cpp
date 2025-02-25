#include <iostream>
#include <vector>
#include<algorithm>
#include "LTransform.h"
#include "Line.h"

    void LTransform:: operator()(Line& line) const {
        line = Line(line.getA(), line.getB() + d);
    }