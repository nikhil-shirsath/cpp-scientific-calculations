#include<iostream>
using namespace std;


int main(){
	string name = "hello";
	
	for(int i = 0 , j = name.length()-1; i<j ; i++,j--){
		char temp = name[i];
		name[i]= name[j];
		name[j]=temp;
	}
	
	cout<<name;
}
