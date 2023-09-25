//
//  main.cpp
//  hw9
//
//  Created by Дима on 18.09.23.
//

#include <iostream>
#include "data.hpp"
using namespace std;

int main() {
    Data data;
    data.input();
    data.print();
    Data data1 = ++data;
    cout << "++ вариант 1: "; //перегрузка оператора ++
    data1.print();
    
    
     data1 = --data;
    cout << "-- вариант 1: "; //перегрузка оператора --
    data1.print();
    
    cout << "++ вариант 2: "; //перегрузка оператора ++
    data1 = data++;
    data1.print();
    cout << "-- вариант 2: "; //перегрузка оператора --
    data1 = data--;
    data1.print();
    cout << endl;
    
    
    Data data2 = data1 + 10;
    cout << "+ 10 дней: "; //дата + 10 дней
    data2.print();
     data2 = data1 - 10;
    
    
    cout << "- 10 дней: "; //дата - 10 дней
    data2.print();
    Data data3(11, 11, 2011);
    Data data4(10, 10, 2010);
   data3 -= data4;
    cout << "дата - дата: "; //дата - дата
    data3.print();
    Data data5;
    data5.input();
    data5 += data3;
    cout << "дата + дата: "; //дата + дата
    data5.print();
    Data data7(10, 19, 2022);
    Data data8(10, 19, 2022);
    if(data7 == data8){// перегрузка оператора ==
        cout << "даты равны" << endl;
    }
    else{
        cout << "даты не равны" << endl;
    }
    Data data9(11, 11, 2011);
    
    if(data8 < data9){ //перегрузка оператора <
        data8.print();
        cout << "меньше, чем ";
        data9.print();
    }
    else{
        data8.print();
        cout << "больше, чем ";
        data9.print();
        cout << endl;
    }
    
    
    
    
    if(data8 > data9){ //перегрузка оператора >
        data8.print();
        cout << "больше, чем ";
        data9.print();
    }
    else{
        data8.print();
        cout << "меньше, чем ";
        data9.print();
        cout << endl;
    }
    
    
    
    
    if(data8 >= data9){ //перегрузка оператора >=
        data8.print();
        cout << "больше, либо равна ";
        data9.print();
    }
    else{
        data8.print();
        cout << "меньше, либо равна ";
        data9.print();
        cout << endl;
    }
    
    if(data8 <= data9){ //перегрузка оператора <=
        data8.print();
        cout << "меньше, либо равна ";
        data9.print();
    }
    else{
        data8.print();
        cout << "больше, либо равна ";
        data9.print();
        cout << endl;
    }
}
