#include<iostream>
#include<thread>

using namespace std;

void first(){
	cout<<"first thread"<<endl;
}

void second(){
	cout<<"second thread"<<endl;
}
int main(){
	
	thread t1(first);
	
	thread t2(second);
	
	t1.join();
	t2.join();
	
	cout<<"excecution of 2 threads are finished "<<endl;
	
	
	return 0;
}
