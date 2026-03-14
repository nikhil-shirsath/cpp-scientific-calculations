#include<iostream>
#include<cmath>

using namespace std;


double square (double val ){
	return val * val;
}


int main(){
	
	double x1,x2,y1,y2;
	
	cout<<"Enter value of x1 ";
	cin>>x1;
	
	cout<<"Enter value of x2 ";
	cin>>x2;
	
	cout<<"Enter value of y1 ";
	cin>>y1;
	
	cout<<"Enter value of y2 ";
	cin>>y2;
	
	//distance between 2 points in 2D 
	//minimum distance in the 2 points in x y cordination
	
	double d = sqrt( square(x2-x1) + (square(y2-y1) ));
	cout<<"minimum distance in 2 points in " << d;
}
