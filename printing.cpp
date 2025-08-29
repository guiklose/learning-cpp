#include <iostream>
#include <string>

void getNameAge()
{
  int age;
  std::string name;

  std::cout << "Type First name: " << std::endl;
  std::cin >> name;

  std::cout << "Type age: " << std::endl;

  std::cin >> age;

  std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;
}

// Other way of do it in line 27.
void getNameAgeTogether()
{
  int age;
  std::string name;

  std::cout << "Type First name and age: " << std::endl;
  std::cin >> name >> age;

  std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;
}

// Other way of do it but making sure spaces are handle correctly at user input.
void getNameAgeSpaceProof()
{
  int age;
  std::string fullname;

  std::cout << "Type First fullname and age: " << std::endl;

  // Make sure user spaces count.
  std::getline(std::cin,fullname);

  std::cin >> age;

  std::cout << "Hello " << fullname
            << "! You are " << age << " years old" << std::endl;
}

void errorLogTesting()
{
  std::cerr << "Warning! Error!" << std::endl;
  std::clog << "Message: Something bad happened" << std::endl;
}

int main ()
{
  // Run any pre-created function.


  // getNameAge();
  // getNameAgeTogether();
  getNameAgeSpaceProof();
  // errorLogTesting();
  return 0;
}