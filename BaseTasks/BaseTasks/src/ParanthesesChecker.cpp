/*
����������� �������, ����������� ������ ������� ������ � ���������.

int check_parentheses(char *expression)
{
  ������� ���������� 1, ���� ��������� ����������,
  ��� 0 � ��������� ������.
}
����������.������ ������� ������ ���� �������������� � ������� ������� assert.
*/
#include "BaseTasks.h"

#include <iostream>
#include <assert.h>
#include <string>

int checkParantheses(const char* inStr)
{
  const size_t strSize = strlen(inStr);
  if (0 == strSize)
    return 1;

  int leftNum = 0;
  int rightNum = 0;
  for (size_t i = 0; i < strSize; i++)
  {
    const char currElem = inStr[i];
    if (currElem == '(')
      leftNum++;
    else if (currElem == ')')
    {
      if (rightNum < leftNum)
        rightNum++;
      else
        return 0;
    }
  }

  return leftNum == rightNum ? 1 : 0;
}

int BaseTasks::parenthesesChecker(int argc, char* argv[])
{
  std::string inStr;
  std::cout << "Input parantheses string" << std::endl;
  std::cin >> inStr;

  assert(1 == checkParantheses(inStr.c_str()));
  return 0;
}