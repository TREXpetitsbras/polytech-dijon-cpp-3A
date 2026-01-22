#pragma once
#include "artiste.h"
#include "date.h"
#include <string>

class Oeuvre{

    private :

        Artiste artiste_;
        //std::string artiste_std;
        std::string type_;
        std::string oeuvre_;
        Date date_;


    public :
        Oeuvre(const Artiste& artiste, const std::string& type, const std::string& oeuvre, const Date& date);
        //Oeuvre(const std::string& artiste, const std::string& type, const std::string& oeuvre, const Date& date);

        std::string getOeuvre() const;
        std::string getArtiste() const;
        std::string getType() const;
        std::string getYear() const;
        void affichage_oeuvre() const;

};