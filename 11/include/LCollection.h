#include <iostream>
#ifndef LCOLLECTION_H
#define LCOLLECTION_H
#include <vector>
#include<algorithm>
#include "Line.h"
#include "LTransform.h"

class LCollection{

    std::vector<Line> lines;

    public:
    /// @brief adds a new line to a vector of lines
    /// @param new_line the line we are going to add
    void Add(Line new_line);

    /// @brief prints information about line
    void Print() const;

    /// @brief sorts lines in a vector of lines according to a
    void Sort();
    int static comparator(Line &l1, Line &l2){
        return (l1).getA()<(l2).getA();
    }

    /// @brief uses functor to get up every line
    /// @param transform functor 
    void Transform(const LTransform &transform);
};
  

#endif