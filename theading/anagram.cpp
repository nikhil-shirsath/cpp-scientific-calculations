#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	string name ="silent";
	string second ="listen";
	
	sort(name.begin(),name.end());
	sort(second.begin(),second.end());
	cout<<name<<endl;
	
	if(name== second){
		cout<<"anagram";
	}else{
		cout<<"Not anagram";
	}
}
