/* Assignment 7 - Working with Class                           Christie Vessells */

#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"

using namespace std;
 
//Global variable declaration
double magnitude = 0;

 
int main(){

	cout << "\n\n\n**************************** ELECTRIC FIELD **********************************\n" << endl;
	
	
	// Electric_Field Vector calls and printing
	Electric_Field E1;
	E1.calculate_Magnitude();
	E1.calculate_Inner_Product();
	
	Electric_Field E2(1e5, 10.9, 1.7e2);
	E2.calculate_Magnitude();
	E2.calculate_Inner_Product();
	
	Electric_Field E3;
	E3.set_Electric_Field_X(45.247);
	E3.set_Electric_Field_Y(85.028);
	E3.set_Electric_Field_Z(28.58);
	
	cout << "\nYour new Electric_Field component values are: \n X: " << E3.get_Electric_Field_X() <<
	", Y: " << E3.get_Electric_Field_Y() << ", Z: " << E3.get_Electric_Field_Z() <<
	"\n" << endl;
	
	E3.calculate_Magnitude();
	E3.calculate_Inner_Product();
	
	cout << "\n\n****************************** Magnetic FIELD *********************************\n" << endl;
	
	// Magnetic_Field Vector calls and printing
	Magnetic_Field M1;
	M1.calculate_Magnitude();
	M1.calculate_Unit_Vector();
	
	Magnetic_Field M2(1e5, 10.9, 1.7e2);
	M2.calculate_Magnitude();
	M2.calculate_Unit_Vector();
	
	Magnetic_Field M3;
	M3.set_Magnetic_Field_X(8.21);
	M3.set_Magnetic_Field_Y(12.02);
	M3.set_Magnetic_Field_Z(31.02);
	
	cout << "\nYour new Magnetic_Field component values are: \n X: " << M3.get_Magnetic_Field_X() <<
	", Y: " << M3.get_Magnetic_Field_Y() << ", Z: " << M3.get_Magnetic_Field_Z() <<
	"\n" << endl;
	
	M3.calculate_Magnitude();
	M3.calculate_Unit_Vector();
	
	cout << "\n\n" << endl;
	return 0;
	
}   