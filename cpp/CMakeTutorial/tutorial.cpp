// A simple program that computes the square root of a number
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main (int argc, char *argv[])
{
  int n;
  cin >> n;
  if (argc < 2)
    {
      fprintf(stdout,"Usage: %s number\n",argv[0]);
      return 1;
    }
  double inputValue = atof(argv[1]);
  double outputValue = sqrt(inputValue);
  fprintf(stdout,"The square root of %g is %g\n",
          inputValue, outputValue);
  cout << "Hello World";

  return 0;
}
