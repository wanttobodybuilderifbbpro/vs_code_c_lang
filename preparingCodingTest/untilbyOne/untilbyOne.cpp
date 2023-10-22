#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int result;

int main()
{
  cin >> n >> m; 
  while (true) {
    //n이 k로 나누어 떨어지는 수가 될 때까지 빼기
    int target = (n / m) * m;
    result += (n - target);
    n = target;
    //N이 M보다 작을 때(더 이상 나눌 수 없을 때) 반복문 탈출
    if(n < m) break;
    //M으로 나누기
    result++;
    n /= m;
  }
  //마지막으로 남은 수에 대하여 -1
  result += (n - 1);
  cout << result << '\n';
}