#pragma once

#include <string>

class Date {

    private :
        //Attributs
        int year_;
        int month_;
        int day_;
        
        bool isDateValid(int year, int month, int day);

    public :
        //Constructeurs et destructeur
        Date(int year, int month, int day);
        Date(int year);

        //~Date();

        //Variables 
        int getYear() const;     
        int getMonth() const;
        int getDay() const;

        int getDayInMonth(int month) const;
        int DayOfYear() const;

        void updateDate(int year, int month, int day);
        std::string afficher_date_str() const;
        std::string afficher_year_str() const;
        void afficher_date_void() const;
        
};


