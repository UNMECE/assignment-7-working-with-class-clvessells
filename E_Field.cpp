#include <iostream>
#include <cmath>
#include "Electric_Field.h"

using namespace std;

extern double magnitude;


// Constructor
Electric_Field::Electric_Field(){
	
	E_F = new double[3]{0.0, 0.0, 0.0};

	cout << "\nYour Electric_Field default constructor has been declared and initialized." << endl;
    cout << " X: " << E_F[0] << ", Y: " << E_F[1] << ", Z: " << E_F[2] << "\n" << endl;
}

Electric_Field::Electric_Field(double e_x, double e_y, double e_z){
    E_F = new double[3];
		E_F[0] = e_x; 
		E_F[1] = e_y; 
		E_F[2] = e_z;
	
	cout << "\nYour 3-component Electric_Field constructor has been declared and initialied." << endl;
	cout << " X: " << e_x << ", Y: " << e_y << ", Z: " << e_z << "\n" << endl;
}


// Destructor
Electric_Field::~Electric_Field(){
	delete[] E_F;
	
	cout << "******  ALL Electric_Field MEMORY HAS BEEN DELETED  ******" << endl;
}

// Function to calculate magnitude
double Electric_Field::calculate_Magnitude(){
	
	double magnitude = sqrt(pow(E_F[0], 2) + pow(E_F[1], 2) + pow(E_F[2], 2));
	
	cout << " Electric_Field magnitude is : " << magnitude << ".\n" << endl;
	
	return magnitude;
}


/*Electric Field Class Specific
Calculate the inner product (dot product) of the electric field vector & output 
the vector to the screen.*/

double Electric_Field::calculate_Inner_Product(){
	
	double inner_product = (E_F[0] * 2) + (E_F[1] * 2) + (E_F[2] * 2);
	
	cout << " Electric_Field inner (dot) product is : " << inner_product << ".\n" << endl;
	
}

// Getters 
double Electric_Field::get_Electric_Field_X() const{ 
	return E_F[0]; 
}
	
double Electric_Field::get_Electric_Field_Y() const { 
	return E_F[1]; 
} 

double Electric_Field::get_Electric_Field_Z() const { 
	return E_F[2]; 
} 

// Setters 
void Electric_Field::set_Electric_Field_X(double e_x) { 
	E_F[0] = e_x; 
} 

void Electric_Field::set_Electric_Field_Y(double e_y) { 
	E_F[1] = e_y; 
} 

void Electric_Field::set_Electric_Field_Z(double e_z) { 
	E_F[2] = e_z; 
}	