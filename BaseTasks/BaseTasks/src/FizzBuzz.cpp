/*
Написать программу, которая будет печатать все числа от 1 до 100. При этом :

Если число делится на 3, вместо числа напечатать Fizz
Если число делится на 5, вместо числа напечатать Buzz
Если число делится и на 3 и на 5, вместо числа напечатать FizzBuzz
*/
#include "BaseTasks.h"

#include <iostream>

using namespace BaseTasks;

int fizzBuzz(int argc, char* argv[])
{
  const int maxNum = 100;
  const int fizzNum = 3;
  const char* fizzStr = "Fizz";
  const int buzzNum = 5;
  const char* buzzStr = "Buzz";
  for (int i = 1; i <= 100; i++)
  {
    if (0 == i % fizzNum)
    {
      std::cout << fizzStr << std::endl;
      continue;
    }
    else if (0 == i % buzzNum)
    {
      std::cout << buzzStr << std::endl;
      continue;
    }

    std::cout << i << std::endl;
  }

  return 0;
}
