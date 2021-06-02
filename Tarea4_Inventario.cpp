//
//  main.cpp
//  SituacionProblema
//
//  Created by Lydia Delgado Uriarte & Hugo Edgar Palomares Estrella on 14/05/21.
//

#include <iostream>
#include "Hechicera.h" 
#include "Vikingo.h"
#include "Arquero.h"

using namespace std;
#include <vector>
/*
const int GOLPE = 10;
const int ROUNDS = 3;
int getRand(int n) {
    return (rand() % n) + 1;
}

void combate(vector <Personaje*> combate) {
    int hits = getRand(ROUNDS);
    
    for (int i = 0; i < hits; i++) {
        combate[0]->shoot();
        combate[1]->shoot();
    }    
} */

int main(){
    
    vector <Personaje*> vecPersonajes;
    Personaje *clasesPersonajes;

    clasesPersonajes = new Hechicera(0,0,"",100);
    vecPersonajes.push_back(clasesPersonajes);
    clasesPersonajes = new Arquero(0,0,"",100);
    vecPersonajes.push_back(clasesPersonajes);
    clasesPersonajes = new Vikingo(0,0,"",100);
    vecPersonajes.push_back(clasesPersonajes);
    //combate(vecPersonajes);

    for (int i=0; i<vecPersonajes.size();i++){
        vecPersonajes[i]->shoot();
    }

    vecPersonajes[0]->AdicionaGema();
    vecPersonajes[0]->AdicionaPotion();
    vecPersonajes[0]->showInventario();

    return 0;
}