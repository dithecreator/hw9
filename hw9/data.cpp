//
//  data.cpp
//  hw9
//
//  Created by Дима on 18.09.23.
//
#include <iostream>
#include "data.hpp"
using namespace std;


Data:: Data(){ //конструктор по умолчанию
    day = 0;
    month = 0;
    year = 0;
}

Data:: Data(int d, int m, int y){ //конструктор с тремя параметрами
    day = d;
    month = m;
    year = y;
}


Data::Data(int day){ //конструктор с одним параметром
    this -> day = day;
    month = 0;
    year = 0;
}

void Data:: input(){ //ввод даты
    cout << "enter a day: ";
    cin >> day;
    month = 0;
    cout << "enter a month: ";
    cin >> month;
    year = 0;
    cout << "enter a year: ";
    cin >> year;
}

void Data:: print(){//вывод даты
    cout << day << "." << month << "." << year << endl;
}



Data& Data::operator ++(){ // инкремент префиксный
    day += 1;
    return* this;
};


Data& Data::operator --(){ // декремент префиксный
    day -= 1;
    return* this;
};


Data Data::operator ++(int a){ // инкремент постфиксный
    Data temp = *this;
         --(*this);
         return temp;
};


Data Data::operator --(int){ // декремент постфиксный
    Data temp = *this;
         --(*this);
         return temp;
};


Data Data::operator +(int s){
    Data result;
    int difference;
    result.day = day;
    result.month = month;
    result.year = year;
    result.day += s;
    difference = result.day - s;
    do{
        result.month += 1;
        result.day = 1;
        
    
        if (result.month > 12) {
            result.month = 1;
            result.year += 1;
        }
        s -= difference;
    }while(s > 30);
      
      return result;
};




Data Data::operator +=(int s){
    Data result;
    result.day = day;
    result.month = month;
    result.year = year;
    int difference;
    result.day += s;
    difference =  result.day - s;
    do{
        result.month += 1;
        result.day = 1;
        
    
        if ( result.month > 12) {
            result.month = 1;
            result.year += 1;
        }
        s -= difference;
    }while(s > 30);
      
      return result;
};


Data Data::operator -(int s){ //дата - 10 дней
    Data result = *this;
      for (int i = 0; i < s; i++) {
          if (result.day > 1) {
              result.day--;
          } else {
              if (result.month > 1) {
                  result.month--;
                  result.day = 30;
              } else {
                  result.year--;
                  result.month = 12;
                  result.day = 30;
              }
          }
      }

      return result;
};


Data Data::operator -=(Data& data){
    int thisDays = year * 365 + month * 30 + day;
    int dataDays = data.year * 365 + data.month * 30 + data.day;

    int difference = thisDays - dataDays;

    year = difference / 365;
    difference %= 365;
    month = difference / 30;
    day = difference % 30;

    return *this;
    
    
}


Data Data::operator +=(Data& data){
    Data result;
    day += data.day;
    month += data.month;
    year += data.year;
    if(day > 30){
        day = 1;
        month++;
    }
    if(month > 12){
        month = 1;
        year++;
    }
    

return *this;
}

bool Data :: operator ==(Data& data){

    return (day == data.day && month == data.month && year == data.year);

}
    
bool Data:: operator <(Data& data){
    
    
    if (year != data.year) {
        return year > data.year;
    }
    if (month != data.month) {
        return month > data.month;
    }
    
    if (day != data.day) {
        return day > data.day;
    }
    return day > data.day;
        
    }

bool Data:: operator >(Data& data){
        return (data.day > day && data.month > month && data.year > year);
        
    }


bool Data:: operator >=(Data& data){
        return (data.day >= day && data.month >= month && data.year >= year);
        
    }


bool Data:: operator <=(Data& data){
        return (data.day <= day && data.month <= month && data.year <= year);
        
    }
