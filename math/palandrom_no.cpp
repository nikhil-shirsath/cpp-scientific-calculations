#include<iostream>
using namespace std;

bool isPalandrom(int no){
	int origional = no;
	int reverse =0;
	
	while(no){
		int digit = no%10;
		reverse = reverse*10 +digit;
		no/=10;
		
	}
	
	return origional==reverse;
}

int main(){
	int no;
	cout<<"Enter any no to check palandrom : ";
	cin>> no;
	if(isPalandrom(no)){
		cout<<"Palandrom";
	}else{
		cout<<"Not Palandrom";
	}
}
