// Date.cpp
// by Chufan Wu
// Dec. 2021

#include "Date.h"

// Constructor with complete date parameter
Date::Date(int &yearPrmt, int &monthPrmt, int &dayPrmt) {
    // Judge if the input is a legal date
    if (isDateLegal(yearPrmt, monthPrmt, dayPrmt)) {
        this -> year = yearPrmt;
        this -> month = monthPrmt;
        this -> day = dayPrmt;
    }

    // Initialize the object with 0.0.0 if the input is illegal
    else {
        this -> year = 0;
        this -> month = 0;
        this -> day = 0;
    }
}

// Constructor with year parameter
Date::Date(int &yearPrmt) {
    // Judge if the input is a legal date
    if (isDateLegal(yearPrmt))
        this -> year = yearPrmt;
    else this -> year = 0;
    this -> month = 0;
    this -> day = 0;
}

// Destructor
// -1 stands for waiting for destruction status
Date::~Date() {
    this -> year = -1;
    this -> month = -1;
    this -> day = -1;
}

// Return year of the date
int Date::getYear() const {
    return this -> year;
}

// Return month of the date
int Date::getMonth() const {
    return this -> month;
}

// Return day of the date
int Date::getDay() const {
    return this -> day;
}

// Return Date object
Date Date::getDate() const {
    return *this;
}

// Update year of the date
void Date::setYear(int &yearPrmt) {
    if (isDateLegal(yearPrmt))
        this -> year = yearPrmt;
    else return; // wait for filling further operations
}

// Update month of the date
void Date::setMonth(int &monthPrmt) {
    if (isDateLegal(this -> year, monthPrmt, this -> day))
        this -> month = monthPrmt;
    else return; // wait for filling further operations
}

// Update day of the date
void Date::setDay(int &dayPrmt) {
    if (isDateLegal(this -> year, this -> month, dayPrmt))
        this -> day = dayPrmt;
    else return; // wait for filling further operations
}

// Update the date with independent parameters
void Date::setDate(int &yearPrmt, int &monthPrmt, int &dayPrmt) {
    if (isDateLegal(yearPrmt, monthPrmt, dayPrmt)) {
        this -> year = yearPrmt;
        this -> month = monthPrmt;
        this -> day = dayPrmt;
    }
    else return; // wait for filling further operations
}

// Update the date with a Date object
void Date::setDate(Date &datePrmt) {
    if (isDateLegal(datePrmt)) {
        this -> year = datePrmt.year;
        this -> month = datePrmt.month;
        this -> day = datePrmt.day;
    }
}

// Judge if year of the date object is a leap year
bool Date::isLeapYear() const {
    return ((((this -> year % 4) == 0) && ((this -> year % 100) != 0)) || ((this -> year % 400) != 0));
}

// For an input year, judge if it is a leap year
bool Date::isLeapYear(int &yearPrmt) const {
    return ((((yearPrmt % 4) == 0) && ((yearPrmt % 100) != 0)) || ((yearPrmt % 400) != 0));
}

// For an input Date object, judge if it is a leap year
bool Date::isLeapYear(Date &datePrmt) const {
    return ((((datePrmt.year % 4) == 0) && ((datePrmt.year % 100) != 0)) || ((datePrmt.year % 400) != 0));
}

// For an input Date object pointer, judge if it is a leap year
bool Date::isLeapYear(Date const *datePointerPrmt) const {
    return ((((datePointerPrmt -> year % 4) == 0) && ((datePointerPrmt -> year % 100) != 0)) || ((datePointerPrmt -> year % 400) != 0));
}

// Judge if the Date object is legal
bool Date::isDateLegal() const {
    // year should be between __MIN_YEAR__ and __MAX_YEAR__
    if ((this -> year < __MIN_YEAR__) || (this -> year > __MAX_YEAR__))
        return false;
    // month should be between 1 and 12 ([1, 12])
    else if ((this -> month < 1) || (this -> month > 12))
        return false;
    // day should be between 1 and 31 ([1, 31])
    else if ((this -> day < 1) || (this -> day > 31))
        return false;
    // for month in April, June, September and November, day should be less or equal than 30 ([1, 30])
    else if (((this -> month == 4) || (this -> month == 6) || (this -> month == 9) || (this -> month == 11)) 
            && (this -> day > 30))
        return false;
    // for month is February, day should be less or equal than 29 in a leap year and less or equal than 28 in a non-leap year
    else if (((this -> month == 2) && (isLeapYear(this) == false) && (this -> day > 28)) 
            || ((this -> month == 2) && (isLeapYear(this) == true) && (this -> day > 29)))
        return false;
    // date is legal if it passes all checks
    else return true;
}

// For an input year, judge if it is a legal year (should be between __MIN_YEAR__ and __MAX_YEAR__)
bool Date::isDateLegal(int &yearPrmt) const {
    if ((yearPrmt < __MIN_YEAR__) || (yearPrmt > __MAX_YEAR__))
        return false;
    else return true;
}

// Judge if the date (independent parameters) is legal
bool Date::isDateLegal(int &yearPrmt, int &monthPrmt, int &dayPrmt) const {
    // year should be between __MIN_YEAR__ and __MAX_YEAR__
    if ((yearPrmt < __MIN_YEAR__) || (yearPrmt > __MAX_YEAR__))
        return false;
    // month should be between 1 and 12 ([1, 12])
    else if ((monthPrmt < 1) || (monthPrmt > 12))
        return false;
    // day should be between 1 and 31 ([1, 31])
    else if ((dayPrmt < 1) || (dayPrmt > 31))
        return false;
    // for month in April, June, September and November, day should be less or equal than 30 ([1, 30])
    else if (((monthPrmt == 4) || (monthPrmt == 6) || (monthPrmt == 9) || (monthPrmt == 11)) 
            && (dayPrmt > 30))
        return false;
    // for month is February, day should be less or equal than 29 in a leap year and less or equal than 28 in a non-leap year
    else if (((monthPrmt == 2) && (isLeapYear(yearPrmt) == false) && (dayPrmt > 28)) 
            || ((monthPrmt == 2) && (isLeapYear(yearPrmt) == true) && (dayPrmt > 29)))
        return false;
    // date is legal if it passes all checks
    else return true;
}

// Judge if the date object is legal
bool Date::isDateLegal(Date &datePrmt) const {
// year should be between __MIN_YEAR__ and __MAX_YEAR__
    if ((datePrmt.year < __MIN_YEAR__) || (datePrmt.year > __MAX_YEAR__))
        return false;
    // month should be between 1 and 12 ([1, 12])
    else if ((datePrmt.month < 1) || (datePrmt.month > 12))
        return false;
    // day should be between 1 and 31 ([1, 31])
    else if ((datePrmt.day < 1) || (datePrmt.day > 31))
        return false;
    // for month in April, June, September and November, day should be less or equal than 30 ([1, 30])
    else if (((datePrmt.month == 4) || (datePrmt.month == 6) || (datePrmt.month == 9) || (datePrmt.month == 11)) 
            && (datePrmt.day > 30))
        return false;
    // for month is February, day should be less or equal than 29 in a leap year and less or equal than 28 in a non-leap year
    else if (((datePrmt.month == 2) && (isLeapYear(datePrmt.year) == false) && (datePrmt.day > 28)) 
            || ((datePrmt.month == 2) && (isLeapYear(datePrmt.year) == true) && (datePrmt.day > 29)))
        return false;
    // date is legal if it passes all checks
    else return true;
}
