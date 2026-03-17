//use mutex to lock variable 

#include<iostream>
#include<mutex>
#include<thread>

using namespace std;

int count = 0;

mutex m ;

void increament(){
	for(int i = 0; i< 100; i++){
		m.lock();
		count++;
		m.unlock();
	}
}

int main(){
	thread t1(increament);
	thread t2(increament);
	
	t1.join();
	t2.join();
	
	cout<<count;
}
