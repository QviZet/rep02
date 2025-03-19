#include <iostream>
#include <string>
int
main()
{
  std::string name;
  std::cout << "User's name:" << std::endl;
  std::cin >> name;                                      // Input username
  std::cout << "Hello world from " << name << std::endl; // Print output
}
