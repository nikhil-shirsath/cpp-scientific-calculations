#include<iostream>
#include<thread>

using namespace std;

void add(int a , int b , int &result ){
	result =  a+b;
}

int main(){
	int ans = 0;
	thread t1 (add,2,4,ref(ans));
	t1.join();
	
	cout<<"addition is "<<ans<<endl;
	
	return 0;
}
