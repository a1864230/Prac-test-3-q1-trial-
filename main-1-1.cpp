#include <iostream>
#include "AirVehicle.h"

int main() {
  AirVehicle plane(10000);

  std::cout << "The plane's weight is " << plane.get_weight() << std::endl;
  std::cout << "The plane's fuel is " << plane.get_fuel() << "%" << std::endl;
  std::cout << "The plane has flown " << plane.get_numberOfFlights() << " times" << std::endl;

  plane.fly(10, 60);

  std::cout << "The plane's fuel is now " << plane.get_fuel() << "%" << std::endl;
  std::cout << "The plane has flown " << plane.get_numberOfFlights() << " times" << std::endl;

  return 0;
}