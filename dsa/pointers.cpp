#include<iostream>
using namespace std;

int main(){
	
	int a = 100;
	int*b = &a;
	
	int &c =a;
	
	cout<<"b :"<<b<<endl;
	cout<<"b : "<<*b<<endl;
	
	cout<<"c : "<<c<<endl;
	
	return 0;
}
