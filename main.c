#include "myMath.h"
#include <stdio.h>

double f1(double x);
double f2(double x);
double f3(double x);

void main(){
	double x;
	printf("Write x: ");
	scanf("%lf", &x);
	printf("1) f(x)=%0.4lf\n",f1(x));
	printf("2) f(x)=%0.4lf\n",f2(x));
	printf("3) f(x)=%0.4lf\n",f3(x));
}

double f1(double x){
	double y= sub(add(Exp((int)x),Pow(x,3)),2);
	return y;
}

double f2(double x){
	double y=add(mul(x,3),mul(Pow(x,2),2));
	return y;
}

double f3(double x){
	double y=sub(div((mul(Pow(x,3),4)),5),mul(x,2));
	return y;
}
