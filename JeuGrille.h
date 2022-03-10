#ifndef JEUGRILLE_H
#define JEUGRILLE_H

#include "Grille.h"
#include <string>

class JeuGrille{

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;

    public:
        JeuGrille(){}
        virtual void afficheGrille(){}
        virtual void ajouteSymbole(int x, int y){}
        virtual bool testeVictoireVerticale(){ return false;}
        virtual bool testeVictoireHorizontale(){return false;}
        virtual bool testeVictoireDiagonale(){return false;}
        virtual bool testeJeuNul(){return false;}
        virtual void changeModeAffichage(int numeroStrat){}

        virtual void finTour(){}

};

#endif