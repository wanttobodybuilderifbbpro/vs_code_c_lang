#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> arr;

int main(){
  cin >> n;

  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(x);
  }

  sort(arr.begin(), arr.end());

  int target = 1;
  for(int i = 0; i < n; i++){
    //찾았다면 반복 종료
    if(target < arr[i]) break;
    target += arr[i];
  }

  //출력
  cout << target << '\n';

  // 문제가 어려워서 내일 다시 공부를 해보기로 하자. 
}