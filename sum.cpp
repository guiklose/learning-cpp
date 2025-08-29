#include <iostream>

int sumValues(int firstNumber, int secondNumber)
{
  int sum = firstNumber + secondNumber;
  return sum;
}

// Entry point - the very first thing that runs
int main()
{

  int answer = sumValues(12, 9);

  std::cout << "The sum of two numbers is " << answer << std::endl;

  // success.
  return 0;
}