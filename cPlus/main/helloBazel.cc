#include <ctime>
#include <string>
#include <iostream>

std::string get_greet(const std::string &who)
{
  return "Hello " + who;
}

void print_myTime()
{
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char **argv)
{
  std::string who = "Bazel";
  if (argc > 1)
  {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_myTime();
  return 0;
}