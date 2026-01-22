#pragma once
#include "date.h"
#include "salle.h"
#include <vector>

class Exposition{

    private :
        int num_;
        Date debut_;
        Date fin_;
        std::vector<Salle> salles;

    public :
        Exposition(const int& num, const Date& debut, const Date& fin);

        Date getDebut();
        Date getFin();
        
        void addSalle(Salle salle);

        void afficher_expo();

};