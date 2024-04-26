// AirFleet.h
#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
private:
    Aircraft* aircraft[5];

public:
    AirFleet();
    Aircraft** get_aircraft();
};

#endif // AIRFLEET_H
