/*
 * MemoryFunctionKnapsack.cpp
 *
 *      Author: Ian Nielsen
 */
#include <iostream>
#include<cmath>
using namespace std;
int MFKnapsack(int i, int j, int weight[], int value[]){
	int F[i][j];
	int v;
	if(F[i][j]<0){
		if(j<weight[i]){
			v = MFKnapsack(i-1,j,weight,value);
		}
		else{
			v = max(MFKnapsack(i-1,j,weight,value),value[i]+MFKnapsack(i-1,j-weight[i],weight,value));
		}
		F[i][j] = v;
	}
	return F[i][j];
}

int main(){
	int i;
	cout<<"Enter number of items: ";
	cin >> i;
	int weight[i];
	int value[i];
	for(int x = 0; x<i; x++){
		cout<<"Enter weight "<<x+1<<": ";
		cin>>weight[x];
		}
	for(int x = 0; x<i; x++){
		cout<<"Enter value "<<x+1<<": ";
		cin>>value[x];
		}
	int j;
	cout<<"Enter knapsack capacity: ";
	cin>>j;
	cout<<MFKnapsack(i,j,weight,value);
	return 0;
}
