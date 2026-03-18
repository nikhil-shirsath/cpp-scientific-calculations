#include<iostream>
using namespace std;

long factorial(int no){
	if(no ==0){
		return 1;
	}
	return  no* factorial(no-1);
}


int main(){
	
	int no;
	cout<<"Enter any No : ";
	cin>> no;
	
	long fact = factorial(no);
	
	cout<<fact;
	
}
