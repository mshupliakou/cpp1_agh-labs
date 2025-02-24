#include <iostream>
#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include <string.h>

/// @brief describes a pokemon
class Pokemon{
    std::string name;
    std::string type;
    int level;
    public:
    Pokemon(std::string name, std::string type, int level): name(name), type(type), level(level){
        std::cout<<"[Pokemon Constructor] Created ";
        this->display();
    }
    Pokemon(const char* name, const char * type, int level): name(name), type(type), level(level){
        std::cout<<"[Pokemon Constructor] Created ";
        this->display();
    }
    Pokemon():Pokemon("Unknown", "Normal", 1){
    }
    Pokemon(const Pokemon& p);

    ~Pokemon(){
        std::cout<<"[Pokemon Destructor] Destroyed "<<name<<std::endl;
    }

    /// @brief creates an electric pokemon
    /// @param name the name of the pokemon we want to create
    /// @param level the level of the pokemon
    /// @return a pointer on pokemon
    static Pokemon* createElectricPokemon(const std::string& name, int level){
        return new Pokemon(name, "Electric", level);
    }

    /// @brief creates a fire pokemon
    /// @param name the name of the pokemon we want to create
    /// @param level the level of the pokemon
    /// @return a pointer on pokemon
    static Pokemon* createFirePokemon(const std::string& name, int level){
        return new Pokemon(name, "Fire", level);
    }

    /// @brief prints information about pokemon
    void display() const{
        std::cout<<name<<"(Type: "<<type<<", Level: "<<level<<")"<<std::endl;
    }

};

#endif