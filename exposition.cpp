#include "exposition.h"
#include <iostream>

Exposition::Exposition(const int& num, const Date& debut, const Date& fin):
    num_(num), debut_(debut), fin_(fin){
    
    } 

Date Exposition::getDebut(){
    return debut_;
}

Date Exposition::getFin(){
    return fin_;
}

void Exposition::addSalle(Salle salle){
    salles.push_back(salle);
}

void Exposition::afficher_expo(){
    std::cout << "Exposition du : " <<debut_.afficher_date_str() << " jusqu'au " << fin_.afficher_date_str() << std::endl;
    for (const auto& salle : salles){
        std::cout << "| " << salle.getSalle() << ".     " << salle.getNom() << std::endl;
    }
}