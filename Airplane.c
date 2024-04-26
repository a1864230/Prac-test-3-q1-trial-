// Airplane.h
#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Aircraft.h"

class Airplane : public Aircraft {
private:
    int maxAltitude;

public:
    Airplane(int maxAltitude) : maxAltitude(maxAltitude) {}

    void fly() override {
        std::cout << "Airplane flying at " << maxAltitude << " feet altitude.\n";
    }
};

#endif // AIRPLANE_H
