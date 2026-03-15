#include<iostream>
#include<thread>

using namespace std;

void addFirst(int &first){
	for(int i = 0; i<= 3 ; i++){
		first+=i;
	}
}


void addSecond(int &second){
	for(int i = 2; i<= 4 ; i++){
		second+=i;
	}
}

int main(){
	int first=0, second=0;
	
	thread t1(addFirst,ref(first));
	thread t2(addSecond,ref(second));
	
	t1.join();
	t2.join();
	
	cout<<"first "<<first<<"\n second"<<second;

	return 0;
}
