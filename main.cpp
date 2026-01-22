#include <string>
#include <iostream>
#include "date.h"
#include "artiste.h"
#include "oeuvre.h"
#include "musee.h"
#include "salle.h"
#include "exposition.h"

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
    
    
/*    Artiste Monet("Monet", "Claude", "Peintre", Date(1840,11,14), Date(1926,12,5));
    Artiste VanGogh("Van Vogh", "Vincent", "Peintre", Date(1853,3,30), Date(1890,7,29));
    Artiste MichelAnge("Ange", "Michel", "Sculpteur", Date(1475,3,6), Date(1564,2,18));
    Artiste VictorHugo("Hugo", "Victor", "Ecrivain", Date(1802,2,26), Date(1885,5,22));

    Oeuvre le_jardin(Monet, "peinture", "Le jardin de l'artiste a Giverny", Date(1900));
    Oeuvre la_promenade(Monet, "peinture", "La promenade ", Date(1875));
    Oeuvre les_nympheas(Monet, "peinture", "Les nympheas", Date(1918));
    Oeuvre la_nuit_etoile(VanGogh, "peinture", "La nuit etoile", Date(1889));
    Oeuvre autoportrait(VanGogh,"peinture", "Autoportrait", Date(1889));
    Oeuvre david(MichelAnge, "sculpture", "David", Date(1504));
    Oeuvre les_contemplations(VictorHugo, "Livre", "Les contemplations", Date(1856));
    Oeuvre la_coccinelle(VictorHugo,"Poeme", "La coccinelle", Date(1830));


    Musee Louvre("Le Louvre");

    Louvre.addArtiste(Monet);
    Louvre.addArtiste(VanGogh);
    Louvre.addArtiste(MichelAnge);
    Louvre.addArtiste(VictorHugo);
    
    Louvre.addOeuvre(Monet, le_jardin);
    Louvre.addOeuvre(Monet, la_promenade);
    Louvre.addOeuvre(Monet, les_nympheas);
    Louvre.addOeuvre(VanGogh, la_nuit_etoile);
    Louvre.addOeuvre(VanGogh, autoportrait);
    Louvre.addOeuvre(MichelAnge, david);
    Louvre.addOeuvre(VictorHugo, les_contemplations);
    Louvre.addOeuvre(VictorHugo, la_coccinelle);
    
    //Louvre.afficher_musee();
    //Louvre.afficher_artistes();
    //Louvre.afficher_oeuvres();
    
    std::cout << "Exposition temporaire" << std::endl;
*/
    
    // Verification des salles et des expositions
    Salle salle1(1, "Salle des peintures");
    Salle salle2(2, "Salle des sculptures");
    Salle salle3(3, "Salle des Livres");

    Exposition expo1(1, Date(2026,10,31), Date(2027,10,31));

    expo1.addSalle(salle1);
    expo1.addSalle(salle2);
    expo1.addSalle(salle3);

    expo1.afficher_expo();    

    return 0;
};
