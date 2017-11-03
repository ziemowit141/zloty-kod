#ifndef VEHICLE_1ST_VEHICLE_H
#define VEHICLE_1ST_VEHICLE_H
#include <iostream>
#include "Color.h"

using std::cout;
using std::cin;
using std::endl;

class Vehicle {
protected:
    int weight;
    int number_of_seats;
    int year_of_production;
    Color tint;
    std::string brand;

    Vehicle();
    Vehicle(int weigh,int num, int year,Color color, std::string& brand );
    ~Vehicle();

};
#endif