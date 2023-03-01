#ifndef PUISSANCE4_H
#define PUISSANCE4_H

#include "Grille.h"
#include "JeuGrille.h"

#include <string>

class Puissance4 : public JeuGrille {

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;

    public:
        Puissance4();
        void afficheGrille();
        void ajouteSymbole(int x, int y);
        bool testeVictoireVerticale();
        bool testeVictoireHorizontale();
        bool testeVictoireDiagonale();
        bool testeJeuNul();

        void finTour();

};

#endif