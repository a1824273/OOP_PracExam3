#include <iostream>
#include <string>
#include "Unit.h"

Unit::Unit(){
    // a default constructor
    bedrooms = 0;
    area = 0;
    price = 0;
}
Unit::Unit(int bedroom_number, double square_metres, int dollar_values){
    // a constructor that takes: the number of bedrooms,
    //number of square meters, and value in dollars as parameters
    bedrooms = bedroom_number;
    area = square_metres;
    price = dollar_values;
}
int Unit::get_bedrooms(){
    // returns the number of bedrooms for the unit
    return bedrooms;
}
int Unit::get_value(){
    // returns the value in dollars of the Unit
    return price;
}

double Unit::get_area(){
    // returns the number of square meters in the unit
    return area;
}