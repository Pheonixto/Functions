#include <iostream>

using namespace std;

int sum(int x, int y, int z){
	
	int s=x+y+z;
	
	return s;
}

int main() {
	
	int a,b,c;
	
	cout<<"Enter a number for A"<<endl;
	cin>>a;
	
	cout<<"Enter a number for B"<<endl;
	cin>>b;
	
	cout<<"Enter a number for C"<<endl;
	cin>>c;
	
	int st=sum(a,b,c);
	
	cout<<sum(a,b,c)<<endl;
	
	return 0;
}
