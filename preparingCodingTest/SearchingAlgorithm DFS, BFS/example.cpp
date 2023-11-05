#include <iostream>
#define INF 999999999 //definite infinte
using namespace std;

//2차원 리스트를 이용하여 인접 행렬 표현
int graph[3][3] = {
  {0, 7, 5},
  {7, 0, INF},
  {5, INF, 0}
};

int main(){
  //print graph
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout << graph[i][j] << ' ';
    }
    cout << '\n';
  }
}