## 게임 개발

- 현민이는 게임 캐릭터가 맵 안에서 움직이는 시스템을 개발 중이다. 캐릭터가 있는 장소는 1 × 1 크기의 정사각형으로 이뤄진 N × M 크기의 직사각형으로, 각각의 칸은 육지 또는 바다이다. 캐릭터는 동서남북 중 한 곳을 바라본다.
- 맵의 각 칸은 (A, B)로 나타낼 수 있고, A는 북쪽으로부터 떨어진 칸의 개수, B는 서쪽으로부터 떨어진 칸의 개수이다. 캐릭터는 상하좌우로 움직일 수 있고, 바다로 되어 있는 공간에는 갈 수 없다. 캐릭터의 움직임을 설정하기 위해 정해 놓은 메뉴얼은 이러하다.
  ```
  1. 수평으로 두 칸 이동한 뒤에 수직으로 한 칸 이동하기
  2. 수직으로 두 칸 이동한 뒤에 수평으로 한 칸 이동하기
  ```
- 현민이는 위 과정을 반복적으로 수행하면서 캐릭터의 움직임에 이상이 있는지 테스트하려고 한다. 매뉴얼에 따라 캐릭터를 이동시킨 뒤에, 캐릭터가 방문한 칸의 수를 출력하는 프로그램을 만드시오.

- `입력 조건` 첫째 줄에 맵의 세로 크기 N과 가로 크기 M을 공백으로 구분하여 입력한다. (3 ≤ N, M ≤ 50)
- 둘째 줄에 게임 캐릭터가 있는 칸의 좌표 (A, B)와 바라보는 방향 d가 각각 서로 공백으로 구분하여 주어진다. 방향 d의 값으로는 다음과 같이 4가지가 존재한다.
  - 0: 북쪽
  - 1: 동쪽
  - 2: 남쪽
  - 3: 서쪽
- 셋째 줄부터 맵이 육지읹 바다인지에 대한 정보가 주어진다. N개의 줄에 맵의 상태가 북쪽부터 남쪽 순서대로, 각 줄의 데이터는 서쪽부터 동쪽 순서대로 주어진다. 맵의 외곽은 항상 바다로 되어 있다.
  - 0: 육지
  - 1: 바다
- 처음에 게임 캐릭터가 위치한 칸의 상태는 항상 육지이다.
- `출력 조건` 첫째 줄에 이동을 마친 후 캐릭터가 방문한 칸의 수를 출력한다.

> 입력 예시<br>
>
> 4 4 ▶ 4 × 4 맵 작성
> 1 1 0 ▶ (1, 1)에 북쪽(0)을 바라보고 서 있는 캐릭터
> 1 1 1 1 ▶ 첫 줄은 모두 바다
> 1 0 0 1 ▶ 둘째 줄은 바다/육지/육지/바다
> 1 1 0 1 ▶ 셋째 줄은 바다/바다/육지/바다
> 1 1 1 1 ▶ 넷째 줄은 모두 바다

> 출력 예시<br>
>
> 3
