#pragma once
#include <string>

class Salle{

    private :
        int salle_;
        std::string nom_;

    public :
        Salle(int salle, std::string nom);
    
        int getSalle() const;
        std::string getNom() const;
};