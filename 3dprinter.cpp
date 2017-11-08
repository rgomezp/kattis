// RO GMZ
// https://open.kattis.com/problems/3dprinter
// NOV 8 2017

#include <iostream>
#include <math.h>

using namespace std;
int main(){
  int s;
  cin >> s;
  int days = 0;
  while(pow(2,days) < s){
      days++;
  }
  cout <<days+1;
  return 0;
};
