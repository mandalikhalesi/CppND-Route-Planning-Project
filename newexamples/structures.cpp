#include <iostream>
#include <cassert>

// Structure usually start with capital, varoable is not

namespace English{
    void Hello(){
        std::cout << "Hello World\n";
    }
}

namespace Japanese{
    void Hello(){
        std::cout << "Konnichiwa\n";
    }
}

class Date{
    private:
        int day{1};
        int month{1};
        int year{0};
    
    public:
        //constructor class
        Date(int d, int m, int y){
            Day(d);
            Month(m);
            Year(y);
        }   
        //accessor function
        int Day(){
            return day;
        }
        //mutator function
        void Day(int d){
            //invariants for the mutator function
            if (d >= 1 && d <= 31) day = d;
        }
        int Month(){
            return month;
        }
        void Month(int m){
            if (m >= 1 && m <= 12) month = m;
        }
        int Year(){
            return year;
        }
        void Year(int y){
            if (y >= 1900 && y <= 2050) year = y;
        }
};

int main(){
    Date date(14, 7, 2024);

    assert(date.Day() == 14);
    assert(date.Month() == 7);
    assert(date.Year() == 2024);

    std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() << "\n";
    English::Hello();
    Japanese::Hello();

}