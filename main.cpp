#include "Grille.cpp"
#include "Tictactoe.cpp"
#include "Puissance4.cpp"
#include "JeuGrille.h"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    JeuGrille * jeu;

    std::cout << "TTT (0) ou P4 (1) ?" << std::endl;
    int choix;
    std::cin >> choix;
    if(choix==0) { jeu = new Tictactoe();} else {jeu = new Puissance4();}
     
    int numeroCase;



    while(!partiegagnee && !jeu->testeJeuNul()){
        
        jeu->afficheGrille();
        std::cin >> numeroCase;
        if(choix==0) {jeu->ajouteSymbole(numeroCase%3,numeroCase/3);}
        else{jeu->ajouteSymbole(numeroCase,0);}
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }

    
    
    return 0;
}