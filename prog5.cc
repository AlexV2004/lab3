/*
 *        File: prog5.cc
 *      Author: Alex Vano
 *        Date: 2/2/2024
 * Description: Lab 3
 */



#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time - page 48
   int cel = 20;

   ctof = cel * 9/5 + 32;
   ftoc = (fah - 32) * 5/9;

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
