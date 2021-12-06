
// Created Oct. 30 2021
// Assigned by Dr. Tyson McMillian, TCCD
// The purpose of this assignment was to create a physics calculator
// This assignment increased my knowledge of functions

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Input_Validation_Extended.h"
using namespace std;

string const red = "\x1b[" + to_string(31) + ";1m";
string const green = "\x1b[" + to_string(32) + ";1m";
string const blue = "\x1b[" + to_string(34) + ";1m";
string const yellow = "\x1b[" + to_string(33) + ";1m";
string const magenta = "\x1b[" + to_string(35) + ";1m";
string const reset = "\x1b[0m";

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
    cout << endl;

    callOption(input);
    
  } while (input != "E" && input != "e");

  return 0;
}

void showMenu()
{
  cout << magenta << "\n*PHYSICS CALCULATOR*\n\n" << reset;
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
    cout << fixed << setprecision(2);  // Resets precision for next calculation

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
      momentumCalc();
    }
    else if (option == "X" || option == "x")
    {
      system("clear");
    }
    else if (option == "E" || option == "e")
    {
      cout << "Goodbye! :)\n";
    }
    else
    {
      cout << "Error processing input\n";
    }
}

void velocityCalc()
{
  cout << "=========================================\n\n";

  double ds, dt;
  float v;
  string dsUnits, dtUnits;

  cout << "Equation: V = ds / dt\n";

  cout << "Enter the unit of measurement for ds: ";
  dsUnits = validateString(dsUnits);
  cout << "Equation: V = ds " << yellow << dsUnits << reset << " / dt\n";

  cout << "Enter a value for ds: ";
  ds = validateDouble(ds);
  cout << "Equation: V = " << blue << ds << reset << " " << yellow << dsUnits << reset << " / dt\n";

  cout << "Enter the unit of measurement for dt: ";
  dtUnits = validateString(dtUnits);
  cout << "Equation: V = " << blue << ds << reset << " " << yellow << dsUnits << reset << " / dt " 
       << yellow << dtUnits << reset << endl;

  cout << "Enter a value for dt: ";
  dt = validateDouble(dt);
  cout << "Equation: V = " << blue << ds << reset << " " << yellow << dsUnits << reset << " / " 
       << blue << dt << reset << " " << yellow << dtUnits << reset << endl;

  cout << "\nCalculating...\n\n";
  v = ds / dt;
  cout << "V = " << fixed << setprecision(4) << red << v << reset << " " << yellow << dsUnits << reset << "/"
       << yellow << dtUnits << reset << endl;

  cout << "\n=========================================\n\n";
}

void accelerationCalc()
{
  cout << "=========================================\n\n";

  double dv, dt;
  float a;
  string dvUnits, dtUnits;

  cout << "Equation: A = dv / dt\n";

  cout << "Enter the unit of measurement for dv: ";
  dvUnits = validateString(dvUnits);
  cout << "Equation: A = dv " << yellow << dvUnits << reset << " / dt\n";

  cout << "Enter a value for dv: ";
  dv = validateDouble(dv);
  cout << "Equation: A = " << blue << dv << reset << " " << yellow << dvUnits << reset << " / dt\n";

  cout << "Enter the unit of measurement for dt: ";
  dtUnits = validateString(dtUnits);
  cout << "Equation: A = " << blue << dv << reset << " " << yellow << dvUnits << reset << " / dt " 
       << yellow << dtUnits << reset << endl;

  cout << "Enter a value for dt: ";
  dt = validateDouble(dt);
  cout << "Equation: A = " << blue << dv << reset << " " << yellow << dvUnits << reset << " / " 
       << blue << dt << reset << yellow << dtUnits << reset << endl;

  cout << "\nCalculating...\n\n";
  a = dv / dt;
  cout << "A = " << fixed << setprecision(4) << red << a << reset << " " << yellow << dvUnits << reset << "/" 
       << yellow << dtUnits << reset << endl;

  cout << "\n=========================================\n\n";
}

void motionCalc()
{
  cout << "=========================================\n\n";

  string option = "";

  do
  {
    cout << "Select a formula:\n";
    cout << "1) Ma = solve for v\n";
    cout << "2) Ms = solve for s\n";
    cout << "3) Mv2 = solve for v^2\n";
    cout << "4) Mv = solve for v_bar\n";
    cout << "E) Exit\n\n";

    cout << "Choose an option: ";
    option = validateString(option);
    cout << endl;

    if (option == "1")
    {
      double v_0, a, t;
      float ma;

      cout << "Equation: Ma = v_0 + ( a * t )\n";

      cout << "Enter a value for v_0: ";
      v_0 = validateDouble(v_0);
      cout << "Equation: Ma = " << blue << v_0 << reset << " + ( a * t )\n";

      cout << "Enter a value for a: ";
      a = validateDouble(a);
      cout << "Equation: Ma = " << blue << v_0 << reset << " + ( " << blue << a << reset << " * t )\n";

      cout << "Enter a value for t: ";
      t = validateDouble(t);
      cout << "Equation: Ma = " << blue << v_0 << reset << " + (" << blue << a << reset << " * " << blue << t << reset << ")\n";

      cout << "\nCalculating...\n\n";
      ma = v_0 + (a * t);
      cout << "Ma = " << fixed << setprecision(4) << red << ma << reset << endl; 
    }
    else if (option == "2")
    {
      double s_0, v_0, t, a;
      float ms;

      cout << "Equation: Ms = s_0 + ( v_0 * t ) + 0.5( a * t^2 )\n";

      cout << "Enter a value for s_0: ";
      s_0 = validateDouble(s_0);
      cout << "Equation: Ms = " << blue << s_0 << reset << " + ( v_0 * t ) + 0.5( a * t^2 )\n";

      cout << "Enter a value for v_0: ";
      v_0 = validateDouble(v_0);
      cout << "Equation: Ms = " << blue << s_0 << reset << " + ( " << blue << v_0 << reset << " * t ) + 0.5( a * t^2 )\n";

      cout << "Enter a value for t: ";
      t = validateDouble(t);
      cout << "Equation: Ms = " << blue << s_0 << reset << " + ( " << blue << v_0 << reset << " * " << blue << t << reset 
           << " ) + 0.5( a * " << blue << t << reset << "^2 )\n";

      cout << "Enter a value for a: ";
      a = validateDouble(a);
      cout << "Equation: Ms = " << blue << s_0 << reset << " + ( " << blue << v_0 << reset << " * " << blue << t << reset 
           << " ) + 0.5( " << blue << a << reset << " * " << blue << t << reset << "^2 )\n";

      cout << "\nCalculating...\n\n";
      ms = s_0 + (v_0 * t) + 0.5 * (a * (t * t));
      cout << "Ms = " << fixed << setprecision(4) << red << ms << reset << endl;
    }
    else if (option == "3")
    {
      double v_0, a, s, s_0;
      float mv2;

      cout << "Equation: Mv2 = (v_0)^2 + ( 2 * a )( s - s_0 )\n";

      cout << "Enter a value for v_0: ";
      v_0 = validateDouble(v_0);
      cout << "Equation: Mv2 = (" << blue << v_0 << reset << ")^2 + ( 2 * a )( s - s_0 )\n";

      cout << "Enter a value for a: ";
      a = validateDouble(a);
      cout << "Equation: Mv2 = (" << blue << v_0 << reset << ")^2 + ( 2 * " << blue << a << reset << " )( s - s_0 )\n";

      cout << "Enter a value for s: ";
      s = validateDouble(s);
      cout << "Equation: Mv2 = (" << blue << v_0 << reset << ")^2 + ( 2 * " << blue << a << reset << " )( " 
           << blue << s << reset << " - s_0 )\n";

      cout << "Enter a value for s_0: ";
      s_0 = validateDouble(s_0);
      cout << "Equation: Mv2 = (" << blue << v_0 << reset << ")^2 + ( 2 * " << blue << a << reset << " )( " 
           << blue << s << reset << " - " << blue << s_0 << reset << " )\n";

      cout << "\nCalculating...\n\n";
      mv2 = (v_0 * v_0) + (2 * a) * (s - s_0);
      cout << "Mv2 = " << fixed << setprecision(4) << red << mv2 << reset << endl; 
    }
    else if (option == "4")
    {
      double v, v_0;
      float mv;

      cout << "Equation: Mv = 0.5( v + v_0 )\n";

      cout << "Enter a value for v: ";
      v = validateDouble(v);
      cout << "Equation: Mv = 0.5( " << blue << v << reset << " + v_0 )\n";

      cout << "Enter a value for v_0: ";
      v_0 = validateDouble(v_0);
      cout << "Equation: Mv = 0.5( " << blue << v << reset << " + " << blue << v_0 << reset << " )\n";

      cout << "\nCalculating...\n\n";
      mv = 0.5 * (v + v_0);
      cout << "Mv = " << fixed << setprecision(4) << red << mv << reset << endl;
    }
    else if (option == "E" || option == "e")
    {
      cout << "Returning to main menu...\n";
    }
    else
    {
      cout << "Error processing input\n";
    }
  } while (option != "E" && option != "e");

  cout << "\n=========================================\n\n";
}

void newton2LawCalc()
{
  cout << "=========================================\n\n";

  double m, a;
  float n;
  string mUnits, aUnits;

  cout << "Equation: N = m * a\n";

  cout << "Enter the unit of measurement for m: ";
  mUnits = validateString(mUnits);
  cout << "Equation: N = m " << yellow << mUnits << reset << " * a\n";

  cout << "Enter a value for m: ";
  m = validateDouble(m);
  cout << "Equation: N = " << blue << m << reset << " " << yellow << mUnits << reset << " * a\n";

  cout << "Enter the unit of measurement for a: ";
  aUnits = validateString(aUnits);
  cout << "Equation: N = " << blue << m << reset << " " << yellow << mUnits << reset << " * a " 
       << yellow << aUnits << reset << endl;

  cout << "Enter a value for a: ";
  a = validateDouble(a);
  cout << "Equation: N = " << blue << m << reset << " " << yellow << mUnits << reset << " * " 
       << blue << a << reset << " " << yellow << aUnits << reset << endl;

  cout << "\nCalculating...\n\n";
  n = m * a;
  cout << "N = " << fixed << setprecision(4) << red << n << reset << " " << yellow << mUnits 
       << " " << aUnits << reset << endl;

  cout << "\n=========================================\n\n";
}

void weightCalc()
{
  cout << "=========================================\n\n";

  double m, g;
  float w;
  string measure;

  cout << "Equation: W = m * g\n";

  cout << "Enter a value for m: ";
  m = validateDouble(m);
  cout << "Equation: W = " << blue << m << reset << " * g\n";

  cout << "Enter a value for g: ";
  g = validateDouble(g);
  cout << "Equation: W = " << blue << m << reset << " * " << blue << g << reset << endl;

  cout << "Enter the expected measure output: ";
  measure = validateString(measure);

  cout << "\nCalculating...\n\n";
  w = m * g;
  cout << "W = " << fixed << setprecision(4) << red << w << reset << " " << yellow << measure << reset << endl;

  cout << "\n=========================================\n\n";
}

void momentumCalc()
{
  cout << "=========================================\n\n";

  double m, v;
  float p;
  string measure;

  cout << "Equation: P = m * v\n";

  cout << "Enter a value for m: ";
  m = validateDouble(m);
  cout << "Equation: P = " << blue << m << reset << " * v\n";

  cout << "Enter a value for v: ";
  v = validateDouble(v);
  cout << "Equation: P = " << blue << m << reset << " * " << blue << v << reset << endl;

  cout << "Enter the expected measure output: ";
  measure = validateString(measure);

  cout << "\nCalculating...\n\n";
  p = m * v;
  cout << "P = " << fixed << setprecision(4) << red << p << reset << " " << yellow << measure << reset << endl;

  cout << "\n=========================================\n\n";
}