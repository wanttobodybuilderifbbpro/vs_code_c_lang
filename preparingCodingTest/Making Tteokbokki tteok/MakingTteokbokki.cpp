#include<iostream>
#include<vector>
using namespace std;

//Tteok (N) and length(M)
int n, m;
//each tteok heights
vector<int> arr;

int main(){
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(x);
  }

  //binary search start point and end point
  int start = 0;
  int end = 1e9;
  //binary search
  int result = 0;
  while (start <= end) {
    long long int total = 0;
    int mid = (start + end) / 2;
    for(int i = 0; i < n; i++){
      //amounts
      if (arr[i] > mid) total += arr[i] - mid;
    }
    if (total < m) {//when tteok is short, more slice (left point search)
      end = mid - 1;
    }
    else { // 떡의 양이 충분할 때 덜 자르기
      result = mid; //최대한 덜 잘랐을 때가 정답이여서, result
      start = mid + 1;
    }
  }
  cout << result << '\n';
}