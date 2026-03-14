//Vector magnitude
//vector ==> magnitude (parinam) + direction (disha)
//vector example ==> a car is moving with 30km/ hrs towards south 
//scaler example ==> a car is moving with 30km/hr

#include<iostream>
#include<cmath>
using namespace std;


double square(double val){
	return val * val;
}

double squareRoot(double val){
	return sqrt( val);
}

double vectorMagnitude2D(double x, double y){
	
	return squareRoot(square(x)+ square(y));
}

double vectorMagnitude3D(double x, double y,double z){
	
	return squareRoot(square(x)+ square(y)+square(z));
}

int main(){
	
	double x, y, z;
	cout<<"Enter value of x : ";
	cin>> x;
	cout<<"Enter value of y : ";
	cin>>y;
	cout<<"Enter value of z : ";
	cin>>z;
	
	
	double magnitude2DVector = vectorMagnitude2D(x,y);
	cout<<"Magnitude of 2D Vector : "<< magnitude2DVector<<endl;
	
	double magnitude3DVector = vectorMagnitude3D(x,y,z);
	cout<<"Magnitude of 3D Vector : "<< magnitude3DVector<<endl;
	
	return 0;
}

