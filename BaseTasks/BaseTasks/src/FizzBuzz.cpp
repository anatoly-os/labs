/*
�������� ���������, ������� ����� �������� ��� ����� �� 1 �� 100. ��� ���� :

���� ����� ������� �� 3, ������ ����� ���������� Fizz
���� ����� ������� �� 5, ������ ����� ���������� Buzz
���� ����� ������� � �� 3 � �� 5, ������ ����� ���������� FizzBuzz
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
