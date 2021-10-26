#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();
void conductOption(string);
void velocityCalc();
void accelerationCalc();

int main()
{
  string input = "";

  do
  {
    
    showMenu();
    cout << "Choose an option: ";
    input = validateString(input);

    conductOption(input);
    
  } while (input != "E" && input != "e");

  return 0;
}


void showMenu()
{
  cout << "\n*PHYSICS CALCULATOR*\n\n";
  cout << "1) Velocity\n";
  cout << "2) Acceleration\n";
  cout << "3) Motion\n";
  cout << "4) Weight\n";
  cout << "5) Momentum\n";
  cout << "E) Exit\n";
  cout << "X) Clear Screen\n";
}

void conductOption(string option)
{
    if (option == "1")
    {
      velocityCalc();
    }
    else if (option == "2")
    {
      accelerationCalc();
    }
    else if (option == "3")
    {
      
    }
    else if (option == "4")
    {
      
    }
    else if (option == "5")
    {
      
    }
    else if (option == "X" || option == "x")
    {
      system("clear");
    }
    else if (option == "E" || option == "e")
    {
      cout << "Goodbye!\n";
    }
    else
    {
      cout << "Error processing input\n";
    }
}

void velocityCalc()
{
  double ds, dt;
  float v;
  string dsUnits, dtUnits;

  cout << "Enter the unit of measurement for ds: ";
  dsUnits = validateString(dsUnits);

  cout << "Enter a value for ds: ";
  ds = validateDouble(ds);

  cout << "Enter the unit of measurement for dt: ";
  dtUnits = validateString(dtUnits);

  cout << "Enter a value for dt: ";
  dt = validateDouble(dt);

  cout << "Calculating: " << "v = " << ds << " / " << dt << endl;
  v = ds / dt;
  cout << "The velocity is " << fixed << setprecision(4) << v << dsUnits + "/" + dtUnits << endl;
}

void accelerationCalc()
{
  double dv, dt;
  float a;
  string dvUnits, dtUnits;

  cout << "Enter the unit of measurement for dv: ";
  dvUnits = validateString(dvUnits);

  cout << "Enter a value for dv: ";
  dv = validateDouble(dv);

  cout << "Enter the unit of measurement for dt: ";
  dtUnits = validateString(dtUnits);

  cout << "Enter a value for dt: ";
  dt = validateDouble(dt);

  cout << "Calculating: " << "v = " << dv << " / " << dt << endl;
  a = dv / dt;
  cout << "The acceleration is " << fixed << setprecision(4) << a << dvUnits + "/" + dtUnits << endl;
}
/*
void motionCalc()
{
  string option = "";

  cout << "Select a formula:\n";
  cout << "1) v = v_0 + at\n";
  cout << "2) s = s_0 + v_0t + 1/2at²\n";
  cout << "3) v² = v_0² + 2a(s - s_0)\n";

}
*/