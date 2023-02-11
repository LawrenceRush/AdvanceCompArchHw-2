// instructions for log10, loge, factorial integer, factorial register , isodd , iseven,ispositive, isnegative,great (return 1 if value1>value2 , less (return 1 if value1< value2)
//#include <stdio.h>
#include <math.h>
int logr(int y,int x) {
    int result = 0;
    while (x >= 10) {
        x /= 10;
        result += 1;
    }
    return result;
}
int nlog(int y ,int x) {
    int result = 0;
    double term = (x - 1) / (x + 1);
    double denominator = 3;
    double fraction = term;
    while (fraction >= 0.0001 || fraction <= -0.0001) {
        result += fraction;
        term *= ((x - 1) / (x + 1)) * ((x - 1) / (x + 1));
        denominator += 2;
        fraction = term / denominator;
    }
    result *= 2;
    return result;
}
int fctoi(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int fctol(int reg){
	int result=1;
	for (int i = 2; i <= reg; i++) {
        result *= i;
    }
	    return result;
}
int isodd(int n) {
    if (n % 2) {
        return 1;
    }
}
int iseve(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int ispos(int n) {
    if (n > 0) {
        return 1;
    } else {
        return 0;
    }
}
int isneg(int n) {
    if (n < 0) {
        return 1;
    } else {
        return 0;
    }
}
int great(int x, int y) {
    if (x > y) {
        return 1;
    } else {
        return 0;
    }
}
int less(int x, int y) {
    if (x < y) {
        return 1;
    } else {
        return 0;
    }
}