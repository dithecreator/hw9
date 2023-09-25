//
//  data.hpp
//  hw9
//
//  Created by Дима on 18.09.23.
//

#ifndef data_hpp
#define data_hpp
#include <stdio.h>



class Data{
    int day;
    int month;
    int year;
public:
    Data& operator ++();//префиксный инкремент
    Data& operator --();//префиксный декремент
    Data operator ++(int);//постфоксный инкремент
    Data operator --(int);//постфиксный декремент
    Data operator +(int);
    Data operator +=(int);
    Data operator -(int);
    Data operator -=(Data&);
    Data operator +=(Data&);
    bool operator ==(Data&);
    bool operator <(Data&);
    bool operator >(Data&);
    bool operator >=(Data&);
    bool operator <=(Data&);
     void input();
     Data();
    Data(int, int, int);
    Data(int);
    void print();
    
};

#endif /* data_hpp */
