#include "date.h"
#include <iostream>

bool Date::isDateValid(int year, int month, int day){
    if ((day < 1) || (day > 31)) return false;
    if ((month < 1) || (month > 12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}


Date::Date(int year, int month, int day) :
    year_(year), month_(month), day_(day) {
        if (!isDateValid(year,month,day)){
            throw std::invalid_argument("Date invalide : "+ std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year));
        }
}

Date::Date(int year):
    year_(year){
        if (year > 2026){
            throw std::invalid_argument("Date invalide : "+ std::to_string(year) + " n'est pas possible !");
        }
    }

/*
Date::~Date() {
    std::cout << "Destruction de la date : " << day_ << "/" << month_ << "/" << year_ << std::endl;
} 
*/

int Date::getYear() const {
    return year_;
}

int Date::getMonth() const {
    return month_;
}

int Date::getDay() const {
    return day_;
}

void Date::updateDate(int year, int month, int day){
    if (!isDateValid(year,month,day)){
        throw std::invalid_argument("Date invalide : "+ std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year));
    }
    else {
        year_ = year;
        month_ = month;
        day_ = day;
    }
}

int Date::getDayInMonth(int month) const{
    if ((month < 1) || (month > 12)){
        throw std::invalid_argument("Invalid month : " + std::to_string(month));
    }
    if (month ==2){
        return 28;
    }
    if ((month == 4 || month == 6 || month== 9 || month == 11)){
        return 30;
    }
    return 31;
}

int Date::DayOfYear() const{
    auto day=day_;
    for (auto i=1; i<month_;i++){
        day+=getDayInMonth(i);
    }
    return day;
}

std::string Date::afficher_date_str() const{
    return (std::to_string(year_) + "|" + std::to_string(month_) + "|" + std::to_string(day_));
}

std::string Date::afficher_year_str() const{
    return (std::to_string(year_));
}

void Date::afficher_date_void() const{
    std::cout << year_ << "/" << month_ << "/" << day_ << std::endl;
}