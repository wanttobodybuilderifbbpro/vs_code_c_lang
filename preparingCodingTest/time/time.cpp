#include <iostream>
using namespace std;

int h, cnt;

//특정 시각 안에 '3'이 포함되어 있는지 여부
bool check(int h, int m, int s){
  if(h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3){
    return true;
  }
  return false;
}

int main(){
  // h 입력
  cin >> h;
  for(int i = 0; i <= h; i++){
    for(int j = 0; j < 60; j++){
      for(int k = 0; k < 60; k++){
        //매 시각 안에 '3'이 포함될 경우
        if(check(i, j, k)) cnt++;
      }
    }
  }
  cout << cnt << '\n';
  return 0;
}