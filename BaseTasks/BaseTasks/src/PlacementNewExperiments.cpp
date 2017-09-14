#include "BaseTasks.h"

#include <corecrt_malloc.h>
#include <new>

char* giveMemory(const int N)
{
  char* pArray = (char*)malloc(sizeof(char)*N);
  return new (pArray) char{};
}

int NonStandartTasks::placementNewExperiments(int argc, char* argv[])
{
  char* pRes = giveMemory(10);
  pRes[5] = '5';
  return 0;
}