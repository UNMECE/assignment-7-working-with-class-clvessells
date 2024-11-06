#include <iostream>
#include <cmath>
#include "Magnetic_Field.h"

using namespace std;

extern double magnitude;


// Constructor
Magnetic_Field::Magnetic_Field(){
	
	M_F = new double[3]{0.0, 0.0, 0.0};
		
	cout << "\nYour Magnetic_Field default constructor has been declared and initialized." << endl;
    cout << " X: " << M_F[0] << ", Y: " << M_F[1] << ", Z: " << M_F[2] << "\n" << endl;
}

Magnetic_Field::Magnetic_Field(double m_x, double m_y, double m_z){
	
	M_F = new double[3];
		M_F[0] = m_x; 
		M_F[1] = m_y; 
		M_F[2] = m_z;
	
	cout << "\nYour 3-component Magnetic_Field constructor has been declared and initialied." << endl;
	cout << " X: " << m_x << ", Y: " << m_y << ", Z: " << m_z << "\n" << endl;
}


// Destructor
Magnetic_Field::~Magnetic_Field(){
	
	delete[] M_F;
	
	cout << "******  ALL Magnetic_Field MEMORY HAS BEEN DELETED  ******" << endl;
}

// Function to calculate magnitude
double Magnetic_Field::calculate_Magnitude(){
	
	double magnitude = sqrt(pow(M_F[0], 2) + pow(M_F[1], 2) + pow(M_F[2], 2));
	
	cout << " Magnetic_Field magnitude is " << magnitude << ".\n" << endl;
	
	return magnitude;
}

/*Magnetic Field Class Specific - Calculate the unit vector of the magnetic field 
and output the vector to the screen.*/
double Magnetic_Field::calculate_Unit_Vector(){
	
	double magnitude = sqrt(pow(M_F[0], 2) + pow(M_F[1], 2) + pow(M_F[2], 2));
	
	double unit_x = M_F[0]/magnitude;
	double unit_y = M_F[1]/magnitude;
	double unit_z = M_F[2]/magnitude;
	
	cout << " The Unit Vector is (" << unit_x << ", " << unit_y << ", " << unit_z << ").\n" << endl;
}

// Getters 
double Magnetic_Field::get_Magnetic_Field_X() const{ 
	return M_F[0]; 
}
	
double Magnetic_Field::get_Magnetic_Field_Y() const { 
	return M_F[1]; 
} 

double Magnetic_Field::get_Magnetic_Field_Z() const { 
	return M_F[2]; 
} 

// Setters 
void Magnetic_Field::set_Magnetic_Field_X(double m_x) { 
	M_F[0] = m_x; 
} 

void Magnetic_Field::set_Magnetic_Field_Y(double m_y) { 
	M_F[1] = m_y; 
} 

void Magnetic_Field::set_Magnetic_Field_Z(double m_z) { 
	M_F[2] = m_z;
}