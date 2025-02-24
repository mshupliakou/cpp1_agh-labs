#include <iostream>
#include <vector>
#include "University.h"

void Student::display() const{
    std::cout<<first_name<<" "<<last_name<<" ("<<year_began_uni<<")"<<std::endl;
}

void Group::addStudent(Student new_student){
    students.push_back(new_student);
}

std::string Group:: getName() const{
    return name;
}

std::vector<Student> Group::getStudents() const{
    return students;
}

void Group:: displayStudents() const{
    for(Student u: students){
            u.display();
    }
}

void University::addGroup(Group new_group){
    groups.push_back(new_group);
}
int  University::totalStudents() const{
    int size =0;
    for(Group u: groups){
        size+=u.getStudents().size();
    }
    return size;
}