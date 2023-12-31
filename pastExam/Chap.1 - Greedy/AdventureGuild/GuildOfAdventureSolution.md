## 풀이

- 공포도를 기준으로 오름차순으로 정렬을 수행해 보면,
- 공포도가 가장 낮은 모험가부터 하나씩 확인하고, 그룹에 포함될 모험가의 수를 계산해 볼 수 있음.
- 만약에 현재 그룹에 포함된 모험가의 수가 현재 확인하고 있는 공포도보다 크거나 같다면, 그룹을 결성할 수 있을 것이다.
- 예를 들어 문제에서 예시 입력을 표현하면,
  - 2 3 1 2 2
- 가장 먼저 5명의 공포도를 오름차순으로 정렬하면 다음과 같이 구성된다.
  - 1 2 2 2 3
- 이제 앞에서부터 공포도를 하나씩 확인하며, '현재 그룹에 포함된 모험가의 수'가 '현재 확인하고 있는 공포도'보다 크거나 같다면, 이를 그룹으로 설정하면 된다.
- 현재에서는 2개의 그룹을 형성할 수 있다.
- 남은 2명은 그룹에 속하지 못하고, 그대로 남아 있게 되는 것이다.

- 이런 방법을 쓰면, 공포도가 오름차순으로 정렬되어 있다는 점에서, 항상 최소한의 모험가의 수만 포함하여 그룹을 결성하게 된다. 따라서 최대한 많은 그룹이 구성되는 방법이므로, 항상 최적의 해를 찾을 수 있게 되는 것이다.
