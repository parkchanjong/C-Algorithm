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
- O(N*logN)
- 최악은 O(N^2)
