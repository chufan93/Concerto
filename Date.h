// Date.h
// by Chufan Wu
// Dec. 2021

#ifndef __DATE_H__
#define __DATE_H__

#define __MIN_YEAR__ 1900
#define __MAX_YEAR__ 2100

class Date {
public:
    Date() : year(0), month(0), day(0) {};
    Date(int &yearPrmt);
    Date(int &yearPrmt, int &monthPrmt, int &dayPrmt);
    ~Date();
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    Date getDate() const;
    void setYear(int &yearPrmt);
    void setMonth(int &monthPrmt);
    void setDay(int &dayPrmt);
    void setDate(int &yearPrmt, int &monthPrmt, int &dayPrmt);
    void setDate(Date &datePrmt);
    bool isLeapYear() const;
    bool isLeapYear(int &yearPrmt) const;
    bool isLeapYear(Date &datePrmt) const;
    bool isLeapYear(Date const *datePointerPrmt) const;
    bool isDateLegal() const;
    bool isDateLegal(int &yearPrmt) const;
    bool isDateLegal(int &yearPrmt, int &monthPrmt, int &dayPrmt) const;
    bool isDateLegal(Date &datePrmt) const;
private: 
    int year;
    int month;
    int day;
};

#endif
