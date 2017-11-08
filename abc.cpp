// RO GMZ
// https://open.kattis.com/problems/abc
// NOV 8 2017

#include <iostream>
#include <math.h>
#include <vector>
#include <list>
#include <sstream>
#include <string.h>

using namespace std;

//Helper functions
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(vector<int>& vec, int n)
{
 int i, j;
 for (i = 0; i < n-1; i++)

     // Last i elements are already in place
     for (j = 0; j < n-i-1; j++)
         if (vec[j] > vec[j+1])
            swap(&vec[j], &vec[j+1]);
}


vector<string> split(string str,string sep){
  char* cstr=const_cast<char*>(str.c_str());
  char* current;
  vector<string> arr;
  current=strtok(cstr,sep.c_str());
  while(current!=NULL){
      arr.push_back(current);
      current=strtok(NULL,sep.c_str());
  }
  return arr;
}


int main(){
string nums; string chars;
getline(cin, nums); getline(cin,chars);
vector<int> num_vec;
list<char> char_vec;

//split
vector<string> arr;
arr = split(nums, " ");
for(int i=0;i<arr.size();i++){
  num_vec.push_back(atoi(arr[i].c_str()));
}

//Put into Char Vec
for(int i=0; i <= chars.length(); i++){
  char_vec.push_back(chars[i]);
}


//sort
int n = num_vec.size();
bubbleSort(num_vec,n);

/*
for(int i=0; i< num_vec.size(); i++){
  cout<<num_vec[i]<<endl;
}
*/

string out = "";
for(int i=0; i<= char_vec.size(); i++){
  char temp = char_vec.front();
  char_vec.pop_front();
  if(temp=='C') out+=to_string(num_vec[2]); //append last elem
  if(temp=='B') out+=to_string(num_vec[1]); //append mid elem
  if(temp=='A') out+=to_string(num_vec[0]); //append first elem
  if(i != char_vec.size()) out+=" ";
}
cout << out <<endl;

return 0;
};
