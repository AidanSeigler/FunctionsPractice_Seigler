#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();            
void callOption(string);    
void velocityCalc();        
void accelerationCalc();    
void motionCalc();
void newton2LawCalc();      
void weightCalc();          
void momentumCalc();

int main()
{
  string input = "";

  do
  {
    
    showMenu();
    cout << "Choose an option: ";
    input = validateString(input);
    cout << endl << endl;

    callOption(input);
    
  } while (input != "E" && input != "e");

  return 0;
}


void showMenu()
{
  cout << "\n*PHYSICS CALCULATOR*\n\n";
  cout << "1) Velocity\n";
  cout << "2) Acceleration\n";
  cout << "3) Motion\n";
  cout << "4) Newton's 2nd Law\n";
  cout << "5) Weight\n";
  cout << "6) Momentum\n";
  cout << "E) Exit\n";
  cout << "X) Clear Screen\n";
}

void callOption(string option)
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
      motionCalc();
    }
    else if (option == "4")
    {
      newton2LawCalc();
    }
    else if (option == "5")
    {
      weightCalc();
    }
    else if (option == "6")
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

void motionCalc()
{
  string option = "";

  cout << "Select a formula:\n";
  cout << "1) v = u + at\n";
  cout << "2) s = ut + 1/2at²\n";
  cout << "3) v²= (v_0)² + 2a(s - s_0)\n";
  cout << "4) v = 1/2 (v + v_0)\n";
  cout << "X) Exit\n\n";

  do
  {
    cout << "Choose an option: ";
    option = validateString(option);

    if (option == "1")
    {
      double u, a, t;
      float ma;

      cout << "Enter a value for u: ";
      u = validateDouble(u);

      cout << "Enter a value for a: ";
      a = validateDouble(a);

      cout << "Enter a value for t: ";
      t = validateDouble(t);

      cout << "Calculating Ma = " << u << " + (" << a << " * " << t << ")\n";
      ma = u + (a * t);
      cout << "The motion is " << ma << endl; 
    }
    else if (option == "2")
    {
      double u, t, a;
      float Ms;

      cout << "Enter a value for u: ";
      u = validateDouble(u);

      cout << "Enter a value for t: ";
      t = validateDouble(t);

      cout << "Enter a value for a: ";
      a = validateDouble(a);
    }
    else if (option == "3")
    {

    }
    else if (option == "4")
    {

    }
    else
    {
      cout << "Error processing input\n";
    }
  } while (option != "1" && option != "2" && option != "3" && option != "4");

}

void newton2LawCalc()
{
  double m, a;
  float n;
  string mUnits, aUnits;

  cout << "Enter the unit of measurement for m: ";
  mUnits = validateString(mUnits);

  cout << "Enter a value for m: ";
  m = validateDouble(m);

  cout << "Enter the unit of measurement for a: ";
  aUnits = validateString(aUnits);

  cout << "Enter a value for a: ";
  a = validateDouble(a);

  cout << "Calculating: " << "N = " << m << " * " << a << endl;
  n = m * a;
  cout << "Newton's second law states " << fixed << setprecision(4) << n << " " + mUnits + "/" + aUnits << endl;
}

void weightCalc()
{
  double m, g;
  float w;
  string measure;

  cout << "Enter the expected measure output: ";
  measure = validateString(measure);

  cout << "Enter a value for m: ";
  m = validateDouble(m);

  cout << "Enter a value for g: ";
  g = validateDouble(g);

  cout << "Calculating: " << "W = " << m << " * " << g << endl;
  w = m * g;
  cout << "The weight is " << fixed << setprecision(4) << w << " " + measure << endl;
}