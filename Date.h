// Date.h
// by Chufan Wu
// Dec. 2021

#ifndef __DATE__
#define __DATE__

class Date{
public:
    Date();
    Date(int year, int month, int day);
    ~Date();
    int getYear();
    int getMonth();
    int getDay();
    void setYear();
    void setMonth();
    void setDay();
private: 
    int year;
    int month;
    int day;
};

#endif
