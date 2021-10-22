#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();
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

    if (input == "1")
    {
      velocityCalc();
    }
    else if (input == "2")
    {
      accelerationCalc();
    }
    else if (input == "X" || input == "x")
    {
      system("clear");
    }
    else if (input == "E" || input == "e")
    {
      cout << "Goodbye!\n";
    }
    else
    {
      cout << "Error processing input\n";
    }
    
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

void velocityCalc()
{
  double ds, dt;
  float velocity;
  cout << "Enter a value for delta S (speed): ";
  ds = validateDouble(ds);

  cout << "Enter a value for delta T (time): ";
  dt = validateDouble(dt);

  velocity = ds / dt;
  cout << "The velocity is " << fixed << setprecision(4) << velocity << endl;
}

void accelerationCalc()
{
  double dv, dt;
  float acceleration;
  cout << "Enter a value for delta V (velocity): ";
  dv = validateDouble(dv);

  cout << "Enter a value for delta T (time): ";
  dt = validateDouble(dt);

  acceleration = dv / dt;
  cout << "The acceleration is " << fixed << setprecision(4) << acceleration << endl;
}

void motionCalc()
{

}