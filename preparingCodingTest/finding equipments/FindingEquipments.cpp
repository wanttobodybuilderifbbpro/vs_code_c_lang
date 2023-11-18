#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int target, int start, int end){
  while (start <= end){
    int mid = (start + end) / 2;
    //찾으면 중간점 반환
    if(arr[mid] == target) return mid;
    //중간점의 값보다 찾고자 하는 ㄱ밧이 작은 경우 왼쪽
    else if (arr[mid] > target) end = mid - 1;
    //중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 
    else start = mid + 1;
  }
  return -1;
}

//N(가게의 부품 개수)와 M(손님이 확인 요청한 부품 개수)
int n, m;
//가게에 있는 전체 부품 번호
vector<int> arr;
//손님이 확인 요청한 부품 번호
vector<int> targets;

int main() {
  cin >> n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(x);
  }
  //binary search
  sort(arr.begin(), arr.end());

  cin >> m;
  for(int i = 0; i < m; i++){
    int target;
    cin >> target;
    targets.push_back(target);
  }
  //손님이 확인 요청한 부품 번호 확인
  for(int i = 0; i < m; i++){
    //해당 부품 존재하는지 확인
    int result = binarySearch(arr, targets[i], 0, n - 1);
    if (result != -1){
      cout << "yes" << ' ';
    }
    else {
      cout << "no" << ' ';
    }
  }
}