#include <iostream>
#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <vector>

/// @brief class which describes a student
class Student{
    std::string first_name;
    std::string last_name;
    int year_began_uni;
    public:

    Student():first_name("no_name"), last_name("no_last_name"), year_began_uni(0){}
    Student(const char* first_name, const char* last_name, int year_began_uni): first_name(first_name), 
    last_name(last_name), year_began_uni(year_began_uni){}
    Student(std::string first_name, std::string last_name, int year_began_uni): 
    first_name(first_name), last_name(last_name), year_began_uni(year_began_uni){}
    /// @brief displays information about student
    void display() const;
};
/// @brief describes a group of students
class Group{
    std::string name;
    std::vector<Student> students;
    public:
    Group(std::string name):name(name){}
    Group(const char* name):name(name){}

    /// @brief adds a new student to the group
    /// @param new_student the student you want to add
    void addStudent(Student new_student);

    /// @brief getter of group's name
    /// @return group's name
    std::string getName() const;

    /// @brief getter of group's vector of students
    /// @return vector of students
    std::vector<Student> getStudents() const;

    /// @brief displays all students of the group
    void displayStudents() const;
};
/// @brief describes university
class University{
    std::vector<Group> groups;
    public:

    /// @brief adds a new group to the University(vector of groups)
    /// @param new_group the group u want to add
    void addGroup(Group new_group);

    /// @brief counts the number of all students at the university
    /// @return the total number of students
    int totalStudents() const;
};

#endif