#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> a, b;

bool compare(int x, int y){
  return x > y;
}

int main(){
  //input n, k
  cin >> n >> k;
  //input array A all elements
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    a.push_back(x);
  }
  //input array B all elements
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    b.push_back(x);
  }
  //ascents array A
  sort(a.begin(), a.end());
  //descenets array B
  sort(b.begin(), b.end(), compare);

  //confirm first index, compare elements 
  for(int i = 0; i < k; i++){
    //A < B
    if(a[i] < b[i]) swap(a[i], b[i]);
    //A > B, break 
    else break;
  }

  //sum of array A elements
  long long result = 0;
  for(int i = 0; i < n; i++){
    result += a[i];
  }
  cout << result << '\n';
}

