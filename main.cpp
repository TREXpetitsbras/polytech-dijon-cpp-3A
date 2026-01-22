#include <string>
#include <iostream>
#include "date.h"
#include "artiste.h"
#include "oeuvre.h"
#include "musee.h"


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

    /* Verification de la classe Artiste
    Artiste Monet("Monet", "Claude", "Peintre", Date (1840,11,14), Date (1926,12,5));
    Artiste MichelAnge("Ange", "Michel", "Sculpture",Date(1475,3,6), Date(1564,2,18));

    Monet.affichage_artiste();
    */
    
    // Verification de la classe Oeuvre
    /* oeuvre avec artiste
    Artiste Monet("Monet", "Claude", "Peintre", Date (1840,11,14), Date (1926,12,5));
    
    Oeuvre La_promenade(Monet, "Peinture", "La promenade", Date(1875));

    La_promenade.affichage_oeuvre();
    */
    /* oeuvre sans artiste NON FONCTIONNEL

    Artiste Inconnu;

    std::cout << Inconnu.getPrenom() << std::endl;
    */
    
    /* Verification de la classe Musee
    Artiste Monet("Monet", "Claude", "Peintre", Date(1840,11,14), Date(1926,12,5));
    Artiste VanGogh("Van Vogh", "Vincent", "Peintre", Date(1853,3,30), Date(1890,7,29));

    Oeuvre le_jardin(Monet, "peinture", "Le jardin de l'artiste a Giverny", Date(1900));
    Oeuvre la_promenade(Monet, "peinture", "La promenade ", Date(1875));
    Oeuvre les_nympheas(Monet, "peinture", "Les nympheas", Date(1918));
    Oeuvre la_nuit_etoile(VanGogh, "peinture", "La nuit etoile", Date(1889));
    Oeuvre autoportrait(VanGogh,"peinture", "Autoportrait", Date(1889));

    Musee Louvre("Le Louvre");

    Louvre.addArtiste(Monet);
    Louvre.addArtiste(VanGogh);
    
    Louvre.addOeuvre(Monet, le_jardin);
    Louvre.addOeuvre(Monet, la_promenade);
    Louvre.addOeuvre(Monet, les_nympheas);
    Louvre.addOeuvre(VanGogh, la_nuit_etoile);
    Louvre.addOeuvre(VanGogh, autoportrait);
    
    //Louvre.afficher_musee();
    //Louvre.afficher_artistes();
    //Louvre.afficher_oeuvres();
    */
    
    
    return 0;
};
