#include <iostream>

//From external_libs folder in the root of the project
#include "a1.h"
#include "a2.h"
#include "b1.h"
#include "b2.h"

#include "module_a1.h"
#include "module_a2.h"
#include "module_b1.h"
#include "module_b2.h"

int main( int argc, char **argv ) {

  std::cout << "Hello from main" << std::endl; 

  std::cout << getExternalLibA1( "Tomas1" ) << std::endl;
  std::cout << getExternalLibA2( "Tomas2" ) << std::endl;

  std::cout << getExternalLibB1( "Rafael1" ) << std::endl;
  std::cout << getExternalLibB2( "Rafael2" ) << std::endl;

  std::cout << getModuleA1( "Moreno1" ) << std::endl;
  std::cout << getModuleA2( "Moreno2" ) << std::endl;

  std::cout << getModuleB1( "Poggio1" ) << std::endl;
  std::cout << getModuleB2( "Poggio2" ) << std::endl;

  return 0;

} 