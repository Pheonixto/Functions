#include <iostream>
#include<cmath>

//Recursive functions.

using namespace std;

int factorial(int n){
	
	if(n==1)
	return 1;
	
	else
	return n*factorial(n-1);
	
	
}


int main() {
	
	int n;
	cout<<"enter the number to calculate it factorial "<<endl;
	cin>>n;
	
	int result=factorial(n);
	
	cout<<"\nThe factorial of "<< n <<" is " <<factorial(n)<<endl;
	
	return 0;
}
