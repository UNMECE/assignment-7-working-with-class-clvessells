#ifndef MAGNETIC_FIELD
#define MAGNETIC_FIELD

#include <iostream>

extern double magnitude;


class Magnetic_Field
{
  private:
  
    double *M_F;
	
  public:
  
    // Constructors
	Magnetic_Field();
	Magnetic_Field(double m_x, double m_y, double m_z);
	
	// Destructor
	~Magnetic_Field(); 
	
	// Functions
	double calculate_Magnitude();
	double calculate_Unit_Vector();
	
	// Getters
	double get_Magnetic_Field_X() const;
	double get_Magnetic_Field_Y() const;
	double get_Magnetic_Field_Z() const;
	
	// Setters
	void set_Magnetic_Field_X(double m_x);
	void set_Magnetic_Field_Y(double m_y);
	void set_Magnetic_Field_Z(double m_z);
	
};


#endif