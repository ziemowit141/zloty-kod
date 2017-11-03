#include "Vehicle.h"


void Vehicle::set_values() {
    cout<<"Enter weight of your car"<<endl;
    cin>>weight;



}


Vehicle::Vehicle() : tint(black), brand(lamborghini), year_of_production(1997)
{}

Vehicle::Vehicle(int weigh, int num, int year, Color color, std::string& type) : weight(weigh),
                                                                                 number_of_seats(num),
                                                                                 Color(color),
                                                                                 brand(type)
{}

