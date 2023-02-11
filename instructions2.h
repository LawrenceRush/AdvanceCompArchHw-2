//#include <stdio.h>
#include <math.h>
int logr(int x) {
//	printf("\n%f\n",log10((double) x));
   int result = 0;
     while (x >= 10) {
        x /= 10;
        result += 1;
    }
	    return result;
}
int nlog(int x) {
    double result = log((double)x);
	//printf("\n%f\n",result);
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
    if (n % 2 == 0) {
        return 0;
    } else {
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
