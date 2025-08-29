#include <iostream>

consteval int get_value(){
  return 3;
}

// Entry point - the very first thing that runs
int main(){
  std::cout << "Hey! You're finally learning a good language!" << std::endl;
  return 0;
}