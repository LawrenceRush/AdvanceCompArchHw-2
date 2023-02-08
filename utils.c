#include<stdio.h>
#include <math.h>

int div4(int firstReg)
{
  return firstReg / 4;
}

int equal(int firstReg, int secondReg)
{

  if (firstReg == secondReg)
  {
    return 1;
  }

  return 0;
}

int noteq(int firstReg, int secondReg)
{
  if (firstReg = !secondReg)
  {
    return 1;
  }

  return 0;
}

int less(int firstReg, int secondReg)
{
  if (firstReg < secondReg)
  {

    return 1;
  }

  return 0;
}

int expo(int firstReg, int secondReg)
{

  return pow(firstReg, secondReg);
}

int expi(int firstReg, int secondReg)
{

  return pow(firstReg, secondReg);

}

int minao(int firstReg, int secondReg)
{

  return firstReg - secondReg + 1;

}

// this may need help
int clear(int firstReg)
{

  return 0;

}

int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int perm(int firstReg, int secondReg)
{

 return factorial(firstReg)/(factorial(firstReg - secondReg));

}

int permi(int firstReg, int secondReg)
{
  
  return factorial(firstReg)/(factorial(firstReg - secondReg));

}

 
