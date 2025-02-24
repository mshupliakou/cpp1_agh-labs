#include <iostream>
#ifndef TRAINER_H
#define TRAINER_H
#include "Pokemon.h"
#include <vector>

/// @brief describes a trainer of pokemons
class Trainer{
    std::string name;
    std::vector<Pokemon> team;
    public:
    Trainer(std::string name):name(name){
        std::cout<<"[Trainer Constructor] Trainer "<< name<<" created"<<std::endl;
    }
    Trainer(const char* name):name(name){
        std::cout<<"[Trainer Constructor] Trainer "<< name<<" created"<<std::endl;
    }
    Trainer(const Trainer & t);
    ~Trainer(){
        std::cout<<"[trainer Destructor] Destroyed "<<name<<std::endl;
    }

    /// @brief adds a pokemon to vector of pokemons
    /// @param new_pokemon the pokemon we want to add
    void addPokemon(Pokemon* new_pokemon);

    /// @brief prints information about all pokemons in the team
    void displayTeam() const;
};

#endif