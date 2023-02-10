#include<stdio.h>
#include <math.h>

int neg(int secondReg)
{
    return -1 * secondReg;
}

int addao(int secondRegister, int thirdRegister)
{
    return secondRegister + thirdRegister + 1;
}

int addat(int secondRegister, int thirdRegister)
{
    return secondRegister + thirdRegister + 2;
}

int lessi(int secondRegister, int constant)
{
    if (secondRegister < constant) {
        return 1;
    }
    return 0;
}

int greti(int secondRegister, int constant)
{
    if (secondRegister > constant) {
        return 1;
    }
    return 0;
}

int fact(int secondReg, int thirdReg)
{
    if (secondReg % thirdReg == 0){
        return 1;
    }
    return 0;
}

int facti(int secondReg, int constant)
{
    if (secondReg % constant == 0){
        return 1;
    }
    return 0;
}