#ifndef ELECTRIC_FIELD
#define ELECTRIC_FIELD

#include <iostream>

extern double magnitude;


class Electric_Field
{
  private:
  
    double *E_F;
	
  public:
  
	// Constructors
	Electric_Field();
	Electric_Field(double e_x, double e_y, double e_z);
	
	// Destructor
	~Electric_Field(); 
	
	// Functions
	double calculate_Magnitude();
	double calculate_Inner_Product();
	
	// Getters
	double get_Electric_Field_X() const;
	double get_Electric_Field_Y() const;
	double get_Electric_Field_Z() const;
	
	// Setters
	void set_Electric_Field_X(double e_x);
	void set_Electric_Field_Y(double e_y);
	void set_Electric_Field_Z(double e_z);
	
};


#endif
