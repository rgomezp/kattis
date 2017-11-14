#include <bits/stdc++.h>
#include <vector>
//#include <splitF.h>

using namespace std;

int main(){
  int W, N;
  cin >> W >> N;

  vector<int> partitions;
  partitions.push_back(0);

  //Get input for second line
  for(int i=0; i<N; i++){
    int temp;
    cin>>temp;
    partitions.push_back(temp);
  }
  partitions.push_back(W);
  vector<int> spaces;

  for(int i=1; i<=W; i++){
    spaces.push_back(-1);
  }

  for(int i=0;i<partitions.size(); i++){
    for(int j=i+1; j<partitions.size();j++){
      int space = partitions[j] - partitions[i];
      spaces[space] = space;
    }
  }

  for(int i=0; i<=spaces.size(); i++){
    if(spaces[i]!=-1){
      cout << spaces[i] <<" ";
    }
  }


  return 0;
};
