#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student { //함수 만드는게 아니니까 class Student() {} 아님.
  string name;
  int score;
  Student(string name, int score){
    this->name = name;
    this->score = score;
  }
  //정렬 기준은 <점수가 낮은 순서>  뭐 떄문에 안되는거지
  bool operator <(Student &other) {
    return this->score < other.score;
  }
};

int n;
vector<Student> v;

int main(){
  cin >> n;

  //N명의 학생 정보를 입력받아 리스트에 저장
  for(int i = 0; i < n; i++){
    string name;
    int score;
    cin >> name >> score;
    v.push_back(Student(name, score));
  }
  sort(v.begin(), v.end());
  //정렬이 수행된 결과를 출력
  for(int i = 0; i < n; i++){
    cout << v[i].name << ' ';
  }
}