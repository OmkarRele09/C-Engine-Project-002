#include <stdio.h>

int main(){
float celsius , fahrenheit , kelvin;
printf("Enter the value of celsius\n");
scanf("%f" , &celsius);
kelvin = celsius + 273.15;
fahrenheit = ((9.0/5.0*celsius)+32);
printf("The value of fahrenheit is %f\n" , fahrenheit);
printf("The value of kelvin is %f\n" , kelvin);
return 0;
}