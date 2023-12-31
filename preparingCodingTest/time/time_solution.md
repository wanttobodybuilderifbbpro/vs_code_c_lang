## 시각 문제 풀이법

- brute forcing 유형으로 생각하고 풀이하면 이해에는 문제가 없을 것이다. 완전 탐색 알고리즘은 가능한 모든 경우의 수를 모두 검사해 보는 탐색 방법을 말하는데, 구현이 중요한 대표적인 문제 유형이라고 할 수 있을 것이다.
- 보통 완전 탐색 알고리즘은 비효율적인 시간 복잡도를 가지고 있는 편인데, 데이터 개수가 크다면 정상적으로 작동하지 않을 수도 있다. 그러나 이 문제의 경우는 데이터 개수가 작은 편에 속하기 때문에 완전 탐색을 사용하면 적절하다고 할 수 있겠다.
- 풀이의 핵심은 매 시각을 문자열로 바꾸고, 문자열에 3이 포함됐는지 검사해 보는 것이다. 00시 00분 00초부터 23시 59분 59초까지 1초씩 늘려가면서 시, 분, 초를 문자열 자료형으로 변환하고 합치는 것이다. 예를 들면, 03시 20분 35초라고 하자. 이를 문자열 자료형인 '032035'로 만들어주고, '3'이 '032035'에 있는지 체크해 보는 것이다.

* 다만, C++ 풀이의 경우 문자열로 만들 경우 코드가 복잡해지는 일명 '스파게티 코드(Spaghetti code)가 나타날 수 있기 때문에, 시 분 초를 매개변수로 입력받아서 처리하는 방식을 사용하게 된다. h의 경우는 23까지밖에 존재하지 않기 때문에(0시 ~ 23시) 10의 자리는 확인할 필요 없는 것.
