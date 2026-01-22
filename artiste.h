#pragma once
#include <string>
#include "date.h"

class Artiste{

    private :
        std::string prenom_;
        std::string nom_;
        std::string specialite_;
        Date naissance_;
        Date deces_;

    public : 
        Artiste(const std::string& nom, const std::string& prenom,const std::string& specialite, const Date& naissance, const Date& deces);
        //Artiste();
        std::string getPrenom() const;
        std::string getNom() const;
        std::string getSpecialite() const;

        Date getNaissance() const;
        Date getDeces() const;
        int getAge() const;

        void affichage_artiste() const;
    

};