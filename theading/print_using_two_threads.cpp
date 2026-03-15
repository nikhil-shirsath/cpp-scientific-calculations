#include<iostream>
#include<thread>
using namespace std;

void printNo(int id){
	for(int i = 0; i< 10; i++){
		cout<<"id "<< id <<" val = "<<i<<endl;
	}
	cout<<endl;
}

int main(){
	
	thread t1(printNo, 1);
		t1.join();

	thread t2(printNo,2);
	t2.join();
	
	cout<<"Both Thread Excecution is completed "<<endl;
	return 0;
}
