#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"

#include <iostream>


    Tictactoe::Tictactoe() : _symboleCourant('X'),_numeroTour(0) {}

    void Tictactoe::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Tictactoe::testeVictoireVerticale(){
        for(int i=0;i<2;i++){
            if(_grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(1,i)
            && _grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(2,i)
            && _grilleDeJeu.getContent(0,i)!=' ')
            {return true;}
        }
        return false;
    }

    bool Tictactoe::testeVictoireHorizontale(){
        for(int i=0;i<2;i++){
            if(_grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,1)
            && _grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,2)
            && _grilleDeJeu.getContent(i,0)!=' ')
            {return true;}
        }
        return false;   
    }

    bool Tictactoe::testeVictoireDiagonale(){
        if(_grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(1,1)
            && _grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(2,2)
            && _grilleDeJeu.getContent(0,0)!=' ')
            {return true;}
        if(_grilleDeJeu.getContent(2,0)==_grilleDeJeu.getContent(1,1)
            && _grilleDeJeu.getContent(2,0)==_grilleDeJeu.getContent(0,2)
            && _grilleDeJeu.getContent(2,0)!=' ')
            {return true;}
        return false;
    }

    bool Tictactoe::testeJeuNul(){
        return _numeroTour==10;
        }

    void Tictactoe::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;
   }

#endif