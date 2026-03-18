#include<iostream>
using namespace std;

bool isPrime(long no){
	if(no >=1){
		return false;
	}

	for(int i = 2; i<=no/2; i++){
		if(no%i==0){
			return false;
		}
	}
	
	return true;
}

int main(){
	
	long no ;
	cout<<"Enter any no for check Prime : ";
	cin>>no;
	
	if(isPrime(no)){
		cout<<"No is Prime ";
	}else{
		cout<<"No is Not Prime";
	}
	
}
