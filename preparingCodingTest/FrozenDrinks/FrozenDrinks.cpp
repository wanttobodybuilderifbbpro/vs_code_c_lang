#include <iostream>
using namespace std;

int n, m;
int graph [1000][1000];

//DFS로 node 방문하고 , 연결된 모든 node들도 방문
bool dfs(int x, int y){
  //주어진 범위를 벗어나면(false)즉시 종료
  if(x <= -1 || x >= n || y <= -1 || y >= m){
    return false;
  }
  //node를 방문 안 했다면
  if(graph[x][y] == 0){
    //방문 처리
    graph[x][y] = 1;
    //상, 하, 좌, 우 위치들도 모두 재귀적으로 호출
    dfs(x - 1, y);
    dfs(x, y - 1);
    dfs(x + 1, y);
    dfs(x, y + 1);
    return true;
  }
  return false;
}

int main(){
  //N, M 공백을 기준으로 구분하여 입력
  cin >> n >> m;
  //2차원 리스트의 맵 정보 입력 받기
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      scanf("%1d", &graph[i][j]);
    }
  }
  //모드 node에 음료수 채우기
  int result = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      //DFS 수행
      if(dfs(i, j )){
        result += 1;
      }
    }
  }
  cout << result << '\n'; //정답
}