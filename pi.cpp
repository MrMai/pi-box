//#include <cstdio>
//#include <cstdlib>
#include <iostream>
//#include <stdio.h>
#include <math.h>

using namespace std;

//  calculates pi by graphing points and then finding the distance between them
float s = 100000;
long double d = 20;

long double r = d / 2;
long double res = d / s;
long double rs = r * r;
long double ram = 0;
long double c = 0;

int main(){
  long double x = 0;
  while(x < r){
    long double x1 = x;
    long double y1 = sqrt(rs - (x * x));
    x += res;
    long double x2 = x;
    long double y2 = sqrt(rs - (x * x));
    x += res;
    ram = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5);
    cout << ram << "\n";
    c += ram;
  }
  c *= 4;
  cout << c << "\n";
  return 0;
}
