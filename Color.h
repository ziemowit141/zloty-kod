#ifndef VEHICLES_COLOR_H
#define VEHICLES_COLOR_H

typedef enum Color{
    red,
    green,
    blue,
    yellow,
    black,
    silver,
}Color;

std::ostream& operator<<(std::ostream& os, Color& tint){
    switch (tint){

        case red : os << "red"; break;
        case green : os << "red"; break;
        case blue : os << "red"; break;
        case yellow : os << "yellow"; break;
        case black : os << "black"; break;
        case silver : os << "silver"; break;
        default: os << "no colour specified"; break;
    }

    return os;
}

enum mark{ opel, bmw, fiat, lamborghini};


#endif //VEHICLES_COLOR_H
