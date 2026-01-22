#pragma once
#include "artiste.h"
#include "oeuvre.h"
#include "date.h"

#include <vector>
#include <string>

class Musee{

    private :

        std::string musee_;
        std::vector<Oeuvre> oeuvres;
        std::vector<Artiste> artistes;

    public :
        Musee(std::string musee);

        std::string getNom();
        std::vector<Oeuvre> getOeuvres();
        std::vector<Artiste> getArtistes();

        void addOeuvre(Artiste artiste, Oeuvre oeuvre);
        void addArtiste(Artiste artiste);

        void afficher_musee();
        void afficher_artistes();
        void afficher_oeuvres();

};



