#include <iostream>
#include <string>
using namespace std;

int solution(string s){
  int answer = s.size();
  //1개 단위부터
  for(int step = 1; step < s.size() / 2 + 1; step++){
    string compressed = "";
    string prev = s.substr(0, step); //앞에서부터 step만큼
    int cnt = 1;
    //단위 크기만큼 증가
    for(int j = step; j < s.size(); j += step){
      //이전 상태와 같으면 cnt 증가
      if(prev == s.substr(j, step)) cnt += 1;
      //다른 문자열이 나왔으면(압축불가)
      else {
        compressed += (cnt >= 2)? to_string(cnt) + prev : prev;
        prev = s.substr(j, step); //다시 상태 초기화
        cnt = 1;
      }
    }
    //남은 문자열 처리
    compressed += (cnt >= 2)? to_string(cnt) + prev : prev;
    //압축 문자열 제일 짧은 거 정답
    answer = min(answer, (int)compressed.size());
  }
}

