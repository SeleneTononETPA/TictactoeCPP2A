#ifndef PUISSANCE4_CPP
#define PUISSANCE4_CPP

#include "Grille.h"
#include "Puissance4.h"

#include <iostream>


    Puissance4::Puissance4() : _symboleCourant('X'),_numeroTour(0), _grilleDeJeu(7,6) {}

    void Puissance4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance4::ajouteSymbole(int x, int y){
        int compteur=5;
        while(_grilleDeJeu.getContent(x,compteur)!=' ' && compteur>=0){
            compteur--;
        }
        if(compteur>=0){
            _grilleDeJeu.setContent(x,compteur,_symboleCourant);
        }
        else{
            std::cout << "Colonne remplie ! Veuillez en saisir une autre." << std::endl;
            std::cin >> x;
            this->ajouteSymbole(x,y);
        }   
    }

    bool Puissance4::testeVictoireVerticale(){
        for(int colonne = 0 ; colonne <=6 ; colonne++){
            for(int ligne = 0 ; ligne <=2 ; ligne++){
                if(_grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne,ligne+1)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne,ligne+2)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne,ligne+3)
                && _grilleDeJeu.getContent(colonne,ligne)!=' ')
                {return true;}
            }
        }
        return false;
    }

    //o
    //oo
    //ooo
    //ooo
    //xoo
    //xxo

    bool Puissance4::testeVictoireHorizontale(){
        for(int colonne = 0 ; colonne <=3 ; colonne++){
            for(int ligne = 0 ; ligne <=5 ; ligne++){
                if(_grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+1,ligne)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+2,ligne)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+3,ligne)
                && _grilleDeJeu.getContent(colonne,ligne)!=' ')
                {return true;}
            }
        }
        return false;
    }

    bool Puissance4::testeVictoireDiagonale(){
        for(int colonne = 0 ; colonne <=3 ; colonne++){
            for(int ligne = 0 ; ligne <=2 ; ligne++){
                if(_grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+1,ligne+1)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+2,ligne+2)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+3,ligne+3)
                && _grilleDeJeu.getContent(colonne,ligne)!=' ')
                {return true;}
            }
        }
        for(int colonne = 0 ; colonne <=3 ; colonne++){
            for(int ligne = 5 ; ligne >=3 ; ligne--){
                if(_grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+1,ligne-1)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+2,ligne-2)
                && _grilleDeJeu.getContent(colonne,ligne)==_grilleDeJeu.getContent(colonne+3,ligne-3)
                && _grilleDeJeu.getContent(colonne,ligne)!=' ')
                {return true;}
            }
        }
        return false;
    }

    bool Puissance4::testeJeuNul(){
        return _numeroTour==43;
        }

    void Puissance4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;
   }

#endif