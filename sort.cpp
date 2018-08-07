#include <bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int> arr){
  if(arr.size()==1){
    vector<int> temp;
    temp.push_back(arr[0]);
    return temp;
  }
  else if(arr.size()==2){
    vector<int> temp;
    if(arr[0]<arr[1]){
      temp.push_back(arr[0]);
      temp.push_back(arr[1]);
    }
    else{
      temp.push_back(arr[1]);
      temp.push_back(arr[0]);
    }
  }
  else{
    int mid = floor(arr.size()/2);
    vector<int> left;
    vector<int> right;
    for(int i=0;i<mid;i++){
      left.push_back(arr[i]);
    }
    for(int i=mid+1;i<arr.size();i++){
      right.push_back(arr[i]);
    }

    vector<int> left_ret = merge_sort(left);
    vector<int> right_ret = merge_sort(right);
    vector<int> final_arr;
    for(int i=0; i<left_ret.size();i++){
      final_arr.push_back(left_ret[i]);
    }
    for(int i=0; i<right_ret.size();i++){
      final_arr.push_back(right_ret[i]);
    }
    return final_arr;
  }
  vector<int> void_arr;
  return void_arr;
};




int main(){
  int temp;
  vector<int> arr;
  while(cin>>temp){
    arr.push_back(temp);
  }

  arr = merge_sort(arr);

  for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
