#include <iostream>
#include <algorithm>
#define INF 1e9

using namespace std;

//N = 노드의 개수, M = 간선의 개수
int n, m;
//2차원 배열
int graph[101][101];

int main(){
  cin >> n >> m;

  //최단 거리 테이블을 모두 무한으로 
  for(int i = 0; i < 101; i++){
    fill(graph[i], graph[i] + 101, INF);
  }
  //자기 자신에서 자기 자신으로
  for(int a = 1; a <= n; a++){
    for(int b = 1; b <= n; b++){
      if(a == b) graph[a][b] = 0;
    }
  }
  
  //각 간선에 대해 정보 입력, 그 값으로 초기화
  for(int i = 0; i < m; i++){
    //A와 B가 서로에게 가는 비용은 1
    int a, b;
    cin >> a >> b;
    graph[a][b] = 1;
    graph[b][a] = 1;
  }

  //거쳐 갈 노드 X와 최종 목적지 노드 K
  int x , k;
  cin >> x >> k;

  //점화식에 따라 플로이드 워셜 알고리즘
  for(int k = 1; k <= n; k++){
    for(int a = 1; a <= n; a++){
      for(int b = 1; b <= n; b++){
        graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
      }
    }
  }

  //results
  int distance = graph[1][k] + graph[k][x];

  //도달할 수 없는 경우, -1
  if(distance >= INF) {
    cout << "-1" << '\n';
  }
  //도달 가능하다면, 최단 거리 출력
  else{
    cout << distance << '\n';
  }
}