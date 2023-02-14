/*
 * MultiplicationOfLargeIntegers.cpp
 *
 *      Author: Ian Nielsen
 */
#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter the first integer value: ";
	cin >> a;
	cout<<"Enter the second integer value: ";
	cin >> b;
	int hold = b;
	int n = 0;
	while(hold>0){
		hold = hold/10;
		n++;
	}
	if(n == 3){
		n = 4;
	}
	int a1 = a/100;
	int b1 = b/100;
	int a0 = a%100;
	int b0 = b%100;
	int c2 = a1*b1;
	int c1 = a1*b0+a0*b1;
	int c0 = a0*b0;
	int c = c2*pow(10,n)+c1*pow(10,n/2)+c0;

	cout<<c;
	return 0;
}
