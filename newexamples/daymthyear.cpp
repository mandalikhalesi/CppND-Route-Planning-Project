//#include <assert.h>
#include <string>
#include <cassert>
#include <iostream>

class Date {
public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);

private:
  int day_{1};
  int month_{1};
  int year_{0};
  int DaysInMthYear(int month, int year) const;
};

int Date::DaysInMthYear(int month, int year) const {
//  If Leap Year
  if (month == 2 && (year % 4 == 0 || (year % 400 == 0 && year % 100 != 0)))
    return 29;

//  Otherwise not Leap Year
  else if (month == 2)
    return 28;
    //daysinmthyear_ = daysinmthyear;

  else if (month == 4 || month == 6 || month == 9 || month == 11)
  return 30;

  else
    return 31;
}

Date::Date(int day, int month, int year) {
  Year(year);
  Month(month);
  Day(day);
}

void Date::Day(int day) {
//  if (day >= 1 && day <= 31)
  if (day >= 1 && day <= Date::DaysInMthYear(Year(), Month()))
    day_ = day;
}

void Date::Month(int month) {
  if (month >= 1 && month <= 12)
    month_ = month;
}

void Date::Year(int year) { year_ = year; }

// Test
int main() {
  Date date(28, 2, 2019);
  assert(date.Day() == 28);
  assert(date.Month() == 2);
  assert(date.Year() == 2019);
}