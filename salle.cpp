#include "salle.h"
#include <string>

Salle::Salle(int salle, std::string nom):
    salle_(salle), nom_(nom){}

int Salle::getSalle() const{
    return salle_;
}

std::string Salle::getNom() const{
    return nom_;
}