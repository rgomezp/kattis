#include <bits/stdc++.h>
#include <vector>
//#include <splitF.h>

using namespace std;

//TODO:--------------
//RUN TIME ERROR: SOMETHING WRONG WITH SCANF (RUNS ON TERMINAL, NOT ON KATTIS)

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

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

bool contains(vector<int>vec, int value){
  for(int i=0; i<vec.size(); i++){
    if(value == vec[i]) return true;
  }
  return false;
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

int main(){
  int W, N;
  scanf("%i %i", &W, &N);
  string second;
  cin.ignore();
  getline(cin, second);
  vector<string> arr;
  vector<int> spaces;
  arr = split(second," ");

  int temp = W;
  for(int i=N; i >=0; i--){
    for(int j=i; j >=0; j--){
      int space = temp - atoi(arr[j-1].c_str());
      //If not already in vector
      if(!contains(spaces, space)){
        spaces.push_back(space);
      }
    }
    temp = atoi(arr[i-1].c_str());
  }

  bubbleSort(spaces, spaces.size());

  for(int i=0; i<spaces.size(); i++){
    cout<<spaces[i]<<" ";
  }cout<<endl;

  return 0;
};
