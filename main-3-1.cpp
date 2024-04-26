#include "AirFleet.h"
#include <iostream>

int main() {
  AirFleet air_fleet;
  Aircraft** aircraft = air_fleet.get_aircraft();

  // Print the capacities of the aircraft
  for (int i = 0; i < 5; ++i) {
    std::cout << "Aircraft capacity: " << aircraft[i]->capacity_ << std::endl;
  }

  // Deallocate memory (optional)
  for (int i = 0; i < 5; ++i) {
    delete aircraft[i];
  }

  return 0;
}