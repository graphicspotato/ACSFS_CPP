/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

using namespace OurCube;

int main() {
  Cube c;
  Cube c1;

  c1.setLength(5.0);

  c.setLength(3.48);
  double volume = c.getVolume();
  std::cout << "Volume: " << volume << std::endl;
  std::cout << "Biggr Volume: " << c1.getVolume() << std::endl;

  return 0;
}
