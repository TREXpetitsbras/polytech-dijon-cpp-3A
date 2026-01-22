#include <string>
#include <iostream>
#include "date.h"
#include "artiste.h"


int main(){

    /* Verification de la classe date
    
    try{
        Date date1(1965, 2, 30); 
    }
    catch (const std::invalid_argument& e){
        std::cout << "Erreur : " << e.what() << std::endl;
    }

    Date date2(2024, 10, 23);

    std::cout << "Date 2 : " << date2.afficher_date_str() << " | jour de l'anne : " << date2.DayOfYear() << std::endl;
    */

    // Verification de la classe Artiste
    Artiste Monet("Monet", "Claude", "Peintre", Date (1840,11,14), Date (1926,12,5));
    Artiste MichelAnge("Ange", "Michel", "Sculpture",Date(1475,3,6), Date(1564,2,18));

    Monet.affichage_artiste();

    return 0;
};
