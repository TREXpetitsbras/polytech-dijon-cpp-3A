#include "musee.h"
#include "artiste.h"
#include "oeuvre.h"
#include <iostream>


Musee::Musee(std::string musee):
    musee_(musee){}


std::string Musee::getNom(){
    return musee_;
}


std::vector<Oeuvre> Musee::getOeuvres(){
    return oeuvres;
}

std::vector<Artiste> Musee::getArtistes(){
    return artistes;
}

void Musee::addOeuvre(Artiste artiste, Oeuvre oeuvre){
    oeuvres.push_back(oeuvre);
}


void Musee::addArtiste(Artiste artiste){
    artistes.push_back(artiste);
}


void Musee::afficher_musee(){
    for (const auto& artiste : artistes){
        std::cout << "--------- " << (artiste.getPrenom() + " " + artiste.getNom()) << " ---------" << std::endl;
        for (const auto& oeuvre : oeuvres){
            if (oeuvre.getArtiste() == (artiste.getPrenom() + " " + artiste.getNom())){
            std::cout << "--> " << oeuvre.getType() << " : "<< oeuvre.getOeuvre() << " : " << oeuvre.getYear() << std::endl;
            }
        }
    }
}
void Musee::afficher_artistes(){
    std::cout << "\n " << musee_ << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (const auto& artiste : artistes){
        artiste.affichage_artiste();
        std::cout << "--------------------------------------------" << std::endl;
    }
}

void Musee::afficher_oeuvres(){
    std::cout << "\n " << musee_ << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    for (const auto& oeuvre : oeuvres){
        oeuvre.affichage_oeuvre();
        std::cout << "--------------------------------------------" << std::endl;
    }
}


