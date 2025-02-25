#include <iostream>
#include "LCollection.h"
#include <vector>
#include<algorithm>
#include "Line.h"
#include "LTransform.h"

    void LCollection::Add(Line new_line){
        lines.push_back(new_line);
    }
    void LCollection::Print() const{
        for(Line l : lines){
            std::cout<<l;
        }
    }
    void LCollection::Sort(){
        sort(lines.begin(), lines.end(), comparator);
    }  


    void LCollection :: Transform(const LTransform &transform){
        for(Line &u : lines){
            transform(u);
        }
    }