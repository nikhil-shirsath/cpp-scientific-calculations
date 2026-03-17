//dot product of vectors 
//A.V = x1x2+y1y2+z1z2

#include<iostream>
using namespace std;


double dotProduct(double x1, double x2, double y1 , double y2, double z1, double z2 ){
	return (x1*x2)+(y1*y2)+(z1*z2);
}

int main(){
	double x1,x2,y1,y2,z1,z2;
	
	cout<<"Enter Value for X1 : ";
	cin>>x1;
	
	cout<<"Enter Value for X2 : ";
	cin>>x2;
	
	cout<<"Enter Value for Y1 : ";
	cin>>y1;
	
	cout<<"Enter Value for Y2 : ";
	cin>>x2;
	
	cout<<"Enter Value for Z1 : ";
	cin>>z1;
	
	cout<<"Enter Value for Z2 : ";
	cin>>z2;
	 
	double d= dotProduct(x1,x2,y1,y2,z1,z2);
	
	cout<<"Dot Product of vector are "<<d;
}
