#ifndef GRILLE_H
#define GRILLE_H

#include <string>
#include <vector>

class Grille{

    private:

        // on considèrera que les 3 premières cases sur la 1ere ligne : (0,0) (0,1) (0,2)
        // les 3 suivantes sont la 2nde ligne : (1,0) (1,1) (1,2)
        // les 3 suivantes de la 3e ligne : (2,0) (2,1) (2,2)
        std::vector<char> _tableau;
        int _nombreColonnes;
        int _nombreLignes;
        
    public:
        char getContent(int x, int y); 
        // renvoie le contenu de la case de coordonnées x,y

        void setContent(int x, int y, char nouveauContenu); 
        // ajoute un contenu dans une case de coordonnées x,y
        // le contenu est un entier non nul

        void resetContent();
        // remet la grille à 0

        void affiche();
        // affiche la grille conformément au système de coordonnées
        
        Grille();
        // initialise la grille avec les cases toutes à 0
        Grille(int nbColonnes, int nbLignes);
};

#endif