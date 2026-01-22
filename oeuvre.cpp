#include "oeuvre.h"
#include <iostream>
#include <string>


Oeuvre::Oeuvre(const Artiste& artiste, const std::string& type ,const std::string& oeuvre, const Date& date):
    artiste_(artiste), type_(type), oeuvre_(oeuvre), date_(date){}

//Oeuvre::Oeuvre(const std::string& artiste, const std::string& type, const std::string& oeuvre, const Date& date):
//  artiste_std(artiste), type_(type), oeuvre_(oeuvre), date_(date){}

std::string Oeuvre::getOeuvre() const{
    return oeuvre_;
}

std::string Oeuvre::getArtiste() const{
    return artiste_.getPrenom() + " " + artiste_.getNom(); 
}
std::string Oeuvre::getType() const{
    return type_;
}
std::string Oeuvre::getYear() const{
    return (date_.afficher_year_str());
} 

void Oeuvre::affichage_oeuvre() const{
    std::cout << "|     " << type_ << " : " << oeuvre_ << std::endl;
    std::cout << "|     " << artiste_.getPrenom() + " " + artiste_.getNom() << std::endl;
    std::cout << "|     " << date_.afficher_year_str() << std::endl;
}
