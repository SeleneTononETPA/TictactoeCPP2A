#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Grille.h"
#include <string>

class Tictactoe{

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;

    public:
        Tictactoe();
        void afficheGrille();
        void ajouteSymbole(int x, int y);
        bool testeVictoireVerticale();
        bool testeVictoireHorizontale();
        bool testeVictoireDiagonale();
        bool testeJeuNul();

        void finTour();

};

#endif