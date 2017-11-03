#include "Vehicle.h"


Vehicle::Vehicle(int weigh, int num, int year, Color color, std::string& type) : weight(weigh),
                                                                                 number_of_seats(num),
                                                                                 Color(color),
                                                                                 brand(type)
{}

Vehicle::Vehicle() : weight(1000),
                     number_of_seats(5),
                     year_of_production(1997),
                     tint(red),
                     brand("Polonez")
{}

Vehicle::~Vehicle() = default;

