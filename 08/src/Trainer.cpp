#include <iostream>
#include <string>
#include <string.h>
#include "Trainer.h"

    Trainer ::Trainer(const Trainer & t){
        name=t.name;
        team = t.team;
        std::cout<<"[Trainer Copy Constructor] Copied "<<name<<std::endl;
    }
        void Trainer:: addPokemon(Pokemon* new_pokemon){
        // Pokemon* new_team= new Pokemon[size+1];
        // for(int i=0; i<size; i++){
        //     new_team[i]=team[i];
        // }
        // new_team[size] = *new_pokemon;
        // delete [] team;
        // team = new_team;
        team.push_back(*new_pokemon);
        }

    void Trainer :: displayTeam() const{
        for(Pokemon p: team){
            p.display();
        }
    }