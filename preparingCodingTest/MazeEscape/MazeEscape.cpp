#include <iostream>
#include <queue>
using namespace std;

int n, m;
int graph[201][201];

//이동할 네 방향 정의(상, 하, 좌, 우)
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int x, int y){
  //que 구현을 위해 queue 라이브러리 사용
  queue<pair<int, int> > q;
  q.push({x, y});
  //que 가 빌 때까지 반복
  while(!q.empty()){
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    //현위치에서 4가지 방향으로 위치 확인
    for(int i = 0; i < 4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      //미로 찾기 공간 벗어난 경우 무시
      if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      //벽이라면 무시한다.
      if(graph[nx][ny] == 1){
        graph[nx][ny] = graph[x][y] + 1;
        q.push({nx, ny});
      }
    }
  }
  //가장 오른쪽 아래까지 최단 거리 반환
  return graph[n - 1][m - 1];
}

int main(){
  //N, M 공백 기준. 입력.
  cin >> n >> m;
  //2차원 리스트에서 맵 정보
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      scanf("%d", &graph[i][j]);
    }
  }
  //BFS
  cout << bfs(0, 0) << '\n';
  return 0;
}