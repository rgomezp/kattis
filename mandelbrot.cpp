#include <bits/stdc++.h>

using namespace std;

struct complex{
  bool complex;
  long r_val;
  long i_val = -1;
};

complex square(complex num, complex c){
  long x = num.r_val;
  long y = num.i_val;
  long sum = (x*x) - (y*y);
  long imaginary = 2*x*y;
  //Add imaginary part
  if(c.i_val != -1){
    sum += c.r_val;
    imaginary += c.i_val;
  }

  complex result;
  result.r_val = sum;
  result.i_val = imaginary;
  return result;
}

bool mandelbrot(complex z, long x, long y, int r, complex c){
  complex num;
  num.r_val = x;
  num.i_val = y;
  z = square(z, c);

}

int main(){
  long x, y;
  int r;
  for(int i=0; i<2; i++){
    scanf("%ld %ld %i", &x, &y, &r);
  }
  return 0;
}
