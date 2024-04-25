#include "AirVehicle.h"
#include "Helicopter.h"
#include <string>
#include <iostream>

Helicopter::Helicopter() {
  weight = 0;
  fuel = 0; 
  name = " ";
  numberOfFlights = 0;

}



Helicopter::Helicopter(int w, std::string n){
  weight = w;
  name  = n;
  fuel = 100;
  numberOfFlights = 0;
}


void Helicopter::fly(int headwind, int minutes) {
  
  float fuel_used = 0.18 * minutes;
  if (headwind >= 40) {
    fuel_used = 0.4 * minutes;
  }

  int weight_penalty = weight - 5670;
  if (weight_penalty > 0) {
    fuel_used += 0.01 * weight_penalty * minutes;
  }

  if (fuel - fuel_used < 20) {
    std::cout << "Helicopter " << name << " not enough fuel to fly" << std::endl;
    return;
  }


  fuel = fuel - fuel_used;
  numberOfFlights = numberOfFlights + 1;
}

std::string Helicopter:: get_name(){
  return name;
}

void Helicopter::set_name(std::string n){
  name = n;
}