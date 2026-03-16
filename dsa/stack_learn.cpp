#include<iostream>
using namespace std;

class stack{
	private :
		int arr[100];
		int top;
		
	public:
		stack(){
			top= -1;
		}
		
		void push(int val){
			arr[++top]= val;
		}
		
		int pop(){
			top--;	
		}
		
		int peek(){
			return arr[top];
		}
		
		void display(){
			for(int i = top ; i>=0; i--){
				cout<< arr[i]<<"\t";
			}
		}
		
};

int main(){
	stack s ;
	
	s.push(10);
	s.push(55);
	s.push(100);
//	cout<<s.peek();

	s.display();

}
