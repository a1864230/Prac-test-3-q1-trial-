#include "AirVehicle.h"

AirVehicle::AirVehicle(){
    weight = 0;
    fuel = 0;
    numberOfFlights = 0;
}

AirVehicle::AirVehicle(int w) : weight(w), fuel(100), numberOfFlights(0) {}

void AirVehicle:: refuel(){
    fuel = 100;
}

int AirVehicle:: get_weight(){
    return weight;
}

void AirVehicle:: set_weight(int w){
    weight = w;
}


float AirVehicle:: get_fuel(){
    return fuel;
}

void AirVehicle:: set_fuel(float f){
    fuel = f;
}



int AirVehicle:: get_numberOfFlights(){
    return numberOfFlights;
}

void AirVehicle:: set_numberOfFlights(int n) {
    numberOfFlights = n;
}

void AirVehicle:: fly(int headwind, int minutes){
    numberOfFlights = numberOfFlights + 1;
}