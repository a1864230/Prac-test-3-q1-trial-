#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"

int main() {
  Helicopter apache(5670, "Apache");

  std::cout << "The helicopter's name is " << apache.get_name() << std::endl;
  std::cout << "The helicopter's weight is " << apache.get_weight() << std::endl;
  std::cout << "The helicopter's fuel is " << apache.get_fuel() << "%" << std::endl;
  std::cout << "The helicopter has flown " << apache.get_numberOfFlights() << " times" << std::endl;

  apache.fly(20, 60);

  std::cout << "The helicopter's fuel is now " << apache.get_fuel() << "%" << std::endl;
  std::cout << "The helicopter has flown " << apache.get_numberOfFlights() << " times" << std::endl;

  return 0;
}