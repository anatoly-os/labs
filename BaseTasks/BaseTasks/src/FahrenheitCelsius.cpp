/*
Написать программу, которая переводит градусы Цельсия в градусы Фаренгейта и обратно.

Пользователь указывает режим перевода и вводит значение, программа переводит его в другую систему.

Формула: C = (F - 32) * 5/9
*/
#include "BaseTasks.h"

#include <iostream>
#include <assert.h>
#include <string>

using namespace BaseTasks;

static float convertToCelsius(const float inF)
{
	return (inF - 32) * 5 / 9;
}

static float convertToFahrenheit(const float inC)
{
	return 9 * inC / 5 + 32;
}

enum InputControl
{
  eFahrenheit,
  eCelsius,
  eExit
};

static InputControl processInput()
{
  bool initC = false;
  bool initF = false;
  bool needExit = false;
  const std::string celsiusSign = "C";
  const std::string fahrenheitSign = "F";
  const std::string exitSign = "E";
  while (!initC && !initF && !needExit)
  {
    std::cout << "Enter desired temperature scale (C or F):" << std::endl;
    std::string cfValue;
    std::cin >> cfValue;
    initC = (cfValue == celsiusSign);
    initF = (cfValue == fahrenheitSign);
    if (!initF && !initC)
    {
      std::cout << "Incorrect input. Enter E to exit or any input to continue:" << std::endl;
      std::string exitValue;
      std::cin >> exitValue;
      needExit = (exitValue == exitSign);
    }
  }

  if (needExit)
    return eExit;

  if (initC)
    return eCelsius;

  if (initF)
    return eFahrenheit;

  assert(0 && "Never should be here.");
  return eExit;
}

float processTemperatureInput()
{
  while (true)
  {
    std::string tempValue;
    std::cout << "Enter initial temperature:" << std::endl;
    std::cin >> tempValue;
    float temperature = 0.0f;
    try
    {
      temperature = std::stof(tempValue);
      return temperature;
    }
    catch (...)
    {
      std::cout << "Incorrect temperature format. Try again." << std::endl;
      continue;
    }
  }

  assert(0 && "Never should be here.");
  return 0.0f;
}

int fahrenheitCelsius(int argc, char* argv[])
{
  while (true)
  {
    InputControl ctrlVal = processInput();
    switch (ctrlVal)
    {
    case eFahrenheit:
    {
      std::cout << convertToCelsius(processTemperatureInput()) << std::endl;
      break;
    }
    case eCelsius:
    {
      std::cout << convertToFahrenheit(processTemperatureInput()) << std::endl;
      break;
    }
    }
  }
	
	return 0;
}