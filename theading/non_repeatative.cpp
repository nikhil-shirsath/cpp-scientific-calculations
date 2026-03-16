#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
	
	unordered_map<char, int> c_map ;
	
	string name ="hello";
	
	for(char c : name){
		c_map[c]++;
	}
	
	for(char val : name){
		if(c_map[val] ==1){
			cout<<val;
			break;
		}
	}
	
	return 0;
}
