#ifndef ANIMAL_H
#define ANIMAL_H
#pragma once
#include <iostream>
#include <algorithm>
#include <cstring>

/// class Animal which describes different animal and their characteristics
class Animal{
    std::string name;
    int age;
    std::string sound;  
    public:
    Animal(): name("no_name"), age(0), sound("silence") { /// the constructor which contains the deafult values
    }
    Animal(std::string name, int age, std::string sound): name(name), age(age), sound(sound) {
    }
    ~Animal(){
    }
    /// @brief function which displays information about the animal
    void print() const;
    /// @brief getter of the animal's age
    /// @return age
    int getAge() const;
    /// @brief getter of the animal's name
    /// @return name
    const std::string& getName() const;
};
    /// @brief the function adds a new animal to the dynamic array of animals
    /// @param animals an Animal array
    /// @param size the size of the array
    /// @param newAnimal the animal we want to add
    void addAnimal(Animal*& animals, int& size, const Animal& newAnimal);

    /// @brief the function removes an animal from the dynamic array of animals
    /// @param animals an Animal array
    /// @param size the size of the array
    /// @param name the animal we want to remove
    void removeAnimal(Animal*& animals, int& size, const std::string& name);

    /// @brief comparator for animals acording their age
    /// @param a the first animal
    /// @param b the second animal
    /// @return true if the first animal is younger and false if older
    bool comp(const Animal& a, const Animal& b);

    /// @brief the function sorts animals inside a dynamic array of animals
    /// @param animals an Animal array
    /// @param size the size of the array
    void sortAnimals(Animal* animals, int size);
#endif