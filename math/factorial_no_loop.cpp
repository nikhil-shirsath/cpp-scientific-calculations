#include<iostream>
using namespace std;

long factorial(int no){
	long fact = 1;
	
	for(int i = 1; i<= no; i++){
		fact *=i;
	}
	return fact;
}


int main(){
	int no;
	cout<<"Enter Any No for factorial : ";
	cin>>no;
	
	cout<<"Factorial is "<<factorial(no);
}
