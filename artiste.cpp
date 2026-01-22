#include "artiste.h"
#include "date.h"
#include <iostream>


Artiste::Artiste(const std::string& nom, const std::string& prenom,const std::string& Specialite, const Date& naissance, const Date& deces):
    nom_(nom), prenom_(prenom), specialite_(Specialite), naissance_(naissance), deces_(deces){}

//Artiste::Artiste():prenom_("Inconnu"),nom_("NULL"),specialite_("NULL"), naissance_(Date (0,0,0)), deces_(Date (0,0,0)){}


std::string Artiste::getPrenom() const{
    return prenom_;
}

std::string Artiste::getNom() const{
    return nom_;
}

Date Artiste::getNaissance() const{
    return naissance_;
}

Date Artiste::getDeces() const{
    return deces_;
}

int Artiste::getAge() const{
    return deces_.getYear() - naissance_.getYear();
}

void Artiste::affichage_artiste() const{
    std::cout << "|     " << nom_ << std::endl;
    std::cout << "|     " << prenom_ << std::endl;
    std::cout << "|     " << specialite_ << std::endl;
    std::cout << "|     " << naissance_.afficher_date_str() << " a " << deces_.afficher_date_str() << " --> " << deces_.getYear() - naissance_.getYear() << "ans" << std::endl;    
}

