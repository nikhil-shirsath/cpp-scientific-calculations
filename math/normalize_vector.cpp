//normalize vector 
//x/v, y/v, z/v
//where v = squreroot of ( addition of all x,y,z squere)

#include<iostream>
#include<cmath>
using namespace std;

double findVector(double x, double y, double z){
	return sqrt(x*x + y*y + z*z);
}

int main(){
	double x,y,z,v;
	cout<<"Enter value of X : ";
	cin>>x;
	
	cout<<"Enter value of Y : ";
	cin>>y;
	
	cout<<"Enter value of Z : ";
	cin>>z;
	
	
	v = findVector(x,y,z);
	
	x/=v;
	y/=v;
	z/=v;
	
	cout<< x <<" , "<<y<<" , "<<z;
	
	return 0;
}

