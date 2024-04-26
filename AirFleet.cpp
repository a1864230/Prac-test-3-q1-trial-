#include "AirFleet.h"

Aircraft::Aircraft() {}

Airplane::Airplane(int capacity) : capacity_(capacity) {}

Helicopter::Helicopter(int capacity) : capacity_(capacity) {}

AirFleet::AirFleet() {
  fleet_[0] = new Airplane(20);
  fleet_[1] = new Helicopter(10000);
  fleet_[2] = new Helicopter(5000);
  fleet_[3] = new Helicopter(100);
  fleet_[4] = new Airplane(15);
}

Aircraft** AirFleet::get_aircraft() {
  return fleet_;
}