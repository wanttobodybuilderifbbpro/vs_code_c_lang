#include <iostream>
#include <string>
using namespace std;

//N 입력
int n;
string plans;
int x = 1, y = 1;

//L, R, U , D에 따른 이동 방향
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main(){
  cin >> n;
  cin.ignore(); //clear bupper
  getline(cin, plans);

  //이동 계획 확인(반복문)
  for(int i = 0; i < plans[i]; i++){
    char plan = plans[i];
    //이동 후의 좌표
    int nx = -1, ny = -1;
    for(int j = 0; j < 4; j++){
      if(plan == moveTypes[j]){
        nx = x + dx[j];
        ny = y + dy[j];
      }
    }
    //공간을 벗어나는 경우 무시한다.
    if(nx < 1 || ny < 1 || nx > n || ny > n) continue;
    //이동 수행
    x = nx;
    y = ny;
  }
  cout << x << ' ' << y << '\n';
  return 0;
}