#include<iostream>
#include<future>

using namespace std;

int add (int first, int second){
	return first +second;
}

int main(){
	
	future<int> ans = async ( add, 2 ,3);
	
	cout<<ans.get();
	return 0;
}
