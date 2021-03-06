알고리즘 C++

## 정렬
- 정렬 스와핑
```
i = 기존 값
j = 바꾸려는 값
temp = 잠시 저장하는 공간
temp = array[i];
array[i] = array[j];
array[j] = temp;
```

### 선택 정렬
- 가장 작은 것을 선택해서 제일 앞으로 보내자
- 등차수열
- N * ( N + 1) / 2
- O(N^2)
- 비효율적

### 버블 정렬
- 앞에 있는 값과 비교해서 더 작은 값은 앞으로 보내자
- 한번 반복 했을때 가장 큰값이 끝으로 가게된다.
- 등차수열
- N * ( N + 1) / 2
- O(N^2)
- 비효율적
- 선택정렬 보다 느림  
- 자리가 바꾸는 연산이 많이 들어감

### 삽입 정렬
- 앞에 삽입할 위치를 찾아 보내자
- 등차수열
- N * ( N + 1) / 2
- O(N^2)
- 정렬이 많이 되어있는 경우에는 빠르다

### 퀵 정렬
- 분할정복 알고리즘 사용
- 피벗값을 기준으로 두집합으로 나눈다.
- 일반적으로 가장빠른 정렬 알고리즘이다.
- O(N*logN)
- 최악은 O(N^2)

### 정렬팁
- 데이터의 개수를 시간 복잡도에 대입해 보고 어떤 알고리즘을 사용할 것인지 판단한다.
- 데이터 개수가 100만 정도 넘어가면 N*logN 으로 풀어야 한다.


### 병합 정렬
- 반으로 나누고 합쳐서 정렬한다.
- O(N*logN) 보장
- 가로: N
- 세로: logN
- 정렬배열은 전역변수로 선언해준다.

### C++ STL sort()
- 정렬함수

### vector, pair
- vector안에 pair로 한쌍을 만들어 사용한다.

### 완전 이진 트리
- 데이터가 루트 노드부터 시작해서 자식 노드가 
  왼쪽 자식 노드, 오른쪽 자식 노드로 차근차근 들어가는 구조의 이진트리

### 힙구조
- 완전 이진 트리 기반
- 최대힙
  - 부모노드가 자식노드 보다 큰 힙

### 힙 정렬
- 힙 트리 구조를 이용한 정렬방법.
- O(N * logN)
- 힙생성(Heapify Algorithm) 알고리즘 수행
- 한번의 힙생성 시간복잡도: O(logN)
- 추가적인 배열이 필요하지 않아 메모리 측면에서도 효율적이다.
- '힙정렬', '크기줄이기'를 반복하며 정렬한다.

### 계수 정렬
- 범위 조건이 있는 경우에 한해서 빠른 알고리즘
- 시간복잡도: O(N)
- 크기(범위)를 기준으로 갯수를 세면, 데이터의 위치를 바꿀 필요가 없다.
- 크기(범위)를 기준으로 정렬 한다는 점에서 빠르다.
- 데이터의 크기의 의존적

### 스택
- LIFO

### 큐
- FIFO

### BFS
- 맹목적인 탐색을 할때 사용
- 최단경로를 찾고 최단 길이를 보장한다
- 큐를 사용해서 구현
- 다른 알고리즘에 응용해서 사용
1. 큐에서 하나의 노드를 꺼내고
2. 해당 노드에 연결된 노드중 방문 하지 않은 노드를 방문하고 차례대로 큐에 삽입

### DFS
- 재귀함수나 스택으로 구현
- 재귀함수로 구현하면 보통 속도가 더 빠르다(재귀함수가 스택프레임에 쌓여서 동작)
- 다른 알고리즘에 응용해서 사용
1. 스택의 최상단 노드를 확인
2. 최상단 노드에서 방문하지 않은 인접 노드가 있으면 그노드를 스택에 넣고 방문처리, 방문하진 않은 인접 노드가 없으면 스택에서 최상단 노드를 뺀다.

### Union-Find
- 합집합 찾기
- Disjoint-Set 서로소 집합 알고리즘
- 여러 개의 노드가 존재할 때 두개의 노드를 선택해서, 현재 이 두 노드가 서로 같은 그래프에 속하는지 판별한다
1. 각노드의 부모를 만들어 주고 부모는 자신을 가리키도록 한다.
2. 두 부모 노드를 합칠 때는 더 작은 값 쪽으로 합친다.
3. 두 노드의 부모 노드를 재귀를 통하여 찾아 확인 하여 같은 집합에 속하는지 확인한다. (부모가 같으면 같은 집합에 속해있다)

### 크루스칼 알고리즘
- 가장 적은 비용으로 모든 노드를 연결
- 최소 비용 신장 트리 알고리즘
- 노드, 정점, 도시
- 간선, 거리, 비용
- 최소 비용 신장 트리의 간선 수 = (노드 수 -1) 
- 해법: 간선을 거리가 짧은 순서대로 그래프에 포함시킨다
1. 간선을 비용을 기준으로 오름차순으로 정렬하고 순서에 맞게 그래프에 포함시킨다
2. 포함시키기 전에 사이클 테이블을 확인한다
3. 사이클이 될 때에는 간선을 포함시키지 않는다

### 이진트리
- 데이터의 탐색 속도 증진을 위해 사용하는 구조이다.
- 탐색방법은 크게 전위순회, 중위순회, 후위순회 3가지가 있다
- 후위순회를 많이 사용한다

### 다이나믹 프로그래밍
- 한나의 문제를 단 한 번만 풀도록 하는 알고리즘
- 조건
  - 큰 문제를 작은 문제로 나눌수 있을때
  - 작은 문제에서 구한 답이 큰문제에서 사용될때
- 이미 구한 값들이 저장해 놓는다(메모이제이션)
- 점화식을 구해서 해결해 나간다
- n번째 경우의 수를 구할때에는 n-1 번째, n-2번째를 생각해가면 점화식을 구한다
- 2차원 DP