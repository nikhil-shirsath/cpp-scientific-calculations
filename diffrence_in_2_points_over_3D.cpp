#include<iostream>
#include<cmath>

using namespace std;

double squareWithDivision(double first, double second){
	double division = first- second;
	return division * division;
}


int main(){
	//
	double x1,x2,y1,y2,z1,z2;
	
	// for diff in 2 points in 3 will be th squareroot of all three points diff square 
	
	cout<<" Enter x1 : ";
	cin >> x1;
	
	cout<<" Enter x2 : ";
	cin >> x2;
	
	
	cout<<" Enter y1 : ";
	cin >> y1;
	
	cout<<" Enter y2 : ";
	cin >> y2;
	
	cout<<" Enter z1 : ";
	cin >> z1;
	
	cout<<" Enter z2 : ";
	cin >> z2;
	
	
	double diffrenceIn3d = sqrt( squareWithDivision(x2,x1) + squareWithDivision(y2,y1) +squareWithDivision(z2,z1));
	
	cout << " Diffrence in 3D point "<< diffrenceIn3d;
	return 0;
}
