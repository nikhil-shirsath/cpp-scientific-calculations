//sum of array using thread
#include<iostream>
#include<vector>
#include<thread>

using namespace std;

	int res=0;
	int res2=0;

void arraySum(vector<int> &arr, int start, int end , int& res){
	for(int i =start; i<end; i++){
		res+=arr[i];
	}
}

int main(){
	
	vector<int> arr(100,1);
	
	for(int i = 0; i<100; i++){
		arr.at(i)=i+1;
	}

	
	thread t1(arraySum,ref(arr),0,50,ref(res));
	thread t2(arraySum,ref(arr),51,100,ref(res2));
	
	t1.join();
	t2.join();
	
	cout<<res<<endl;
	cout<<res2<<endl;
	
	
	return 0;
}
