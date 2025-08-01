/*Functions and Prototypes - Converting Temperatures
In this exercise you will create a program that will be used to convert Fahrenheit temperatures 
to Celsius and Kelvin temperatures through the use of two functions.

For this program, assume that temperature will be represented as a double value.

Begin by defining the function prototypes for the functions fahrenheit_to_celsius and 
fahrenheit_to_kelvin which are both passed a double value and return a double value.

Now, at the bottom of the file, write the full definitions of both functions.

The function fahrenheit_to_celsius is passed a Fahrenheit temperature and returns a rounded 
Celsius temperature. You may use the <cmath> function round in order to round the return value. 
The formula to convert Fahrenheit to Celsius is (5.0/9.0)*(temperature - 32). 

The function fahrenheit_to_kelvin is passed a Fahrenheit temperature and returns a rounded 
Kelvin temperature. The formula to convert Fahrenheit to Kelvin is 
(5.0/9.0)*(temperature - 32) + 273.

Remember the rules of PEMDAS when defining the body of your functions.

Now, from the temperature_conversion function, declare and initialize the variables 
celsius_temperature and kelvin_temperature by calling the appropriate functions which 
you have just defined and passing the variable fahrenheit_temperature.*/

#include <iostream>
#include<cmath>

using namespace std;

double fahrenheit_to_celsius (double);

double fahrenheit_to_kelvin (double);


int main()
{
    double fahrenheit_temperature{89};
    double celsius_temperature = fahrenheit_to_celsius (fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin (fahrenheit_temperature);

    cout << "The fahrenheit temperature " << fahrenheit_temperature 
    << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " 
    << kelvin_temperature << " degrees kelvin.";

}

double fahrenheit_to_celsius (double fahrenheit_temperature)
{
    double conv_F_to_C = (5.0/9.0)*(fahrenheit_temperature - 32);
    double celsius_temperature = round(conv_F_to_C);
    return celsius_temperature;
}

double fahrenheit_to_kelvin (double fahrenheit_temperature)
{
    double conv_F_to_K = (5.0/9.0)*(fahrenheit_temperature - 32) + 273;
    double kelvin_temperature = round(conv_F_to_K);
    return kelvin_temperature;
}