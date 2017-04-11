//#include <cstdio>
//#include <cstdlib>
#include <iostream>
//#include <stdio.h>
#include <math.h>
#include <time.h>

using namespace std;

//  calculates pi by graphing points and then finding the distance between them


int main(){
  // interface stuff
  float s = 10000000;
  clock_t t = clock();
  cout << "enter sample size: ";
  cin >> s;
  cout << "calculating with " << s << " samples\n";
  cout << "predicted finish in " << s / 10000000 * 0.330102 << " seconds\n";
  // variable declaration
  long double d = 2;
  long double r = d / 2;
  long double res = d / s;
  long double rs = r * r;
  long double ram = 0;
  long double c = 0;
  long double pi = 0;
  // calculations
  long double x = 0;
  while(x < r-(res*2)){
    long double x1 = x;
    long double y1 = sqrt(rs - (x * x));
    x += res;
    long double x2 = x;
    long double y2 = sqrt(rs - (x * x));
    x += res;
    ram = pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5);
    //cout << ram << "x\n";
    c += ram;
  }
  // end
  c *= 4;
  pi = c / r;
  float tr = float((clock() - t)) / CLOCKS_PER_SEC;
  cout << "circumference is " << c << "\n";
  cout << "pi is " << pi << '\n';
  cout << "calculation took " << tr << " seconds\n";
  return 0;
}

long double pi(float s) {
  
}
