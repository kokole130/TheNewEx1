#include "myMath.h"

#define EXPONENT 2.718281;

double Exp(int x){
	double sum=1;
	int neg=0;
	if(x<0){
	neg=1;
	x=x*(-1);
	}
	for(int i=0;i<x;i++) {
	sum=sum*EXPONENT;
	}
	if(neg==1) sum=1/sum;
	return sum;
}

double Pow(double x, int y){
	double sum=1;
	int neg=0;
	if(y<0){
	neg=1;
	y=y*(-1);
	}
	for(int i=0;i<y;i++) {
	sum=sum*x;
	}
	if(neg==1) sum=1/sum;
	return sum;
}
