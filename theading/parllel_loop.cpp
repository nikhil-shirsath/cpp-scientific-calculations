#include<iostream>
#include<thread>
using namespace std;

void printLoop(int start, int end){
	for(int i = start; i <= end; i++){
		cout<<i;
	}
	
}

int main(){
	
	thread t1(printLoop, 1,5);
	thread t2(printLoop,6,10);
	
	t1.join();
	t2.join();
	
	return 0;
}
