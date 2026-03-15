#include<iostream>
#include<thread>

//threads are light wight sub processes which operates simaltenously 
//as independend process but with shared memory 

//in this program output its not guaranteed that  thred function and main thread statement will called when 

using namespace std;

void greet(){
	cout<<"Hello from thread";
}

int main(){
	
	//creates a thread that runs greet function 
	thread t(greet);
	
	for(int i = 0; i<100; i++)
	
	cout<<"hello from main function  "<<endl;
	
	return 0;
	
}
