#include "Animal.h"
#include <iostream>
#include <string>

void addAnimal(Animal*& animals, int& size, const Animal& newAnimal){
        Animal* new_farm = new Animal [size+1];
        for(int i=0; i<size; i++){
            new_farm[i]=animals[i];
        }
        new_farm[size]= newAnimal;
        size++;
        delete[] animals;
        animals=new_farm;
    }
void removeAnimal(Animal*& animals, int& size, const std::string& name) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (animals[i].getName() == name) {
            count++;
        }
    }
    int new_size = size - count;
    Animal* new_farm = new Animal[new_size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (animals[i].getName() != name) {
            new_farm[j++] = animals[i]; 
        }
    }
    delete[] animals; 
    animals = new_farm; 
    size = new_size; 
}
    bool comp(const Animal& a, const Animal& b) {
        return a.getAge() < b.getAge(); 
}

    void sortAnimals(Animal* animals, int size) {
        std::sort(animals, animals + size, comp);
}

    void Animal::print() const{
        std::cout<<"Name: "<<name<<", Age: "<<age<<", Sound: "<<sound<<"!"<<std::endl;
    }
    int Animal::getAge() const{
        return age;
    }
    const std::string& Animal::getName() const{
        return name;
    }
