#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string str;
vector<char> result;
int value = 0;

int main(){
  cin >> str;

  //문자를 하나씩 확인하면서 반복문
  for(int i = 0; i < str.size(); i++){
    //알파벳인 경우 결과 리스트에 삽입
    if(isalpha(str[i])) {
      result.push_back(str[i]);
    }
    //수는 따로 더한다.
    else{
      value += str[i] - '0';
    }
  }

  //알파벳을 "오름차순"으로 정렬
  sort(result.begin(), result.end());

  //알파벳을 차례대로
  for(int i = 0; i < result.size(); i++){
    cout << result[i];
  }

  //수가 하나라도 존재하면 가장 뒤에
  if(value != 0) cout << value;
  cout << '\n';
}