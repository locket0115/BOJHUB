# [Platinum V] 트리와 쿼리 - 25402 

[문제 링크](https://www.acmicpc.net/problem/25402) 

### 성능 요약

메모리: 24616 KB, 시간: 452 ms

### 분류

자료 구조(data_structures), 깊이 우선 탐색(dfs), 분리 집합(disjoint_set), 그래프 이론(graphs), 그래프 탐색(graph_traversal), 트리(trees)

### 문제 설명

<p>$1$부터 $N$까지 $N$개의 정점으로 이루어진 트리가 있다. $i$번째 간선은 서로 다른 두 정점 $A_i$, $B_i$를 잇는다. ($1 ≤ i ≤ N - 1$)</p>

<p>$N$개의 정점 중 몇 개를 골라, 그 고른 정점들을 $S = \{s_1, s_2, \dots , s_K\}$라고 하자. 또한, $s_i = v$를 만족하는 $i$ ($1 ≤ i ≤ K$)가 존재할 때, 정점 $v$가 $S$에 속한다고 부르자.</p>

<p>$S$에 속하는 서로 다른 두 정점 $u$, $v$에 대하여, $S$에 속하는 정점만을 이용하여 트리 위에서 $u$, $v$ 사이를 오갈 수 있다면, “$u$와 $v$는 $S$ 위에서 연결되어 있다”고 하자.</p>

<p>예를 들어, 아래와 같은 트리를 생각하자. ($N = 7$)</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/718e7c6d-b718-45a0-84b7-0ed67bd01c22/-/preview/" style="width: 259px; height: 145px;"></p>

<p>만일, $K = 6$, $S = \{1, 2, 3, 4, 5, 6\}$라면, “$1$과 $2$”, “$3$과 $5$”, “$4$와 $6$”은 각각 서로 $S$ 위에서 연결되어 있다. 그러나, “$1$과 $6$”, “$2$와 $7$”은 각각 서로 $S$ 위에서 연결되어 있지 않다.</p>

<p>다음 조건을 모두 만족하는 정점쌍 $(u, v)$의 개수를 $S$의 연결 강도라고 하자.</p>

<ol>
	<li>$u$와 $v$는 서로 다른 두 정점.</li>
	<li>$1 ≤ u < v ≤ N$.</li>
	<li>$u$와 $v$는 $S$ 위에서 연결되어 있다.</li>
</ol>

<p>고른 정점들 $S$가 주어질 때, $S$의 연결 강도를 계산하는 프로그램을 작성하라. 여러분은 이러한 질의 $Q$개에 대하여 모두 답해야 한다.</p>

### 입력 

 <p>첫 번째 줄에 정수 $N$이 주어진다.</p>

<p>다음 ($N - 1$)개의 줄에 각 간선에 대한 정보가 주어진다. 이 중 $i$ ($1 ≤ i ≤ N - 1$)번째 줄에는 두 정수 $A_i$, $B_i$가 주어진다.</p>

<p>다음 줄에 정수 $Q$가 주어진다.</p>

<p>다음 $Q$개의 줄에 각 질의에 대한 정보가 주어진다. 이 중 $i$ ($1 ≤ i ≤ Q$)번째 줄은 $i$번째 질의를 나타내며, 정수 $K$와 $K$개의 정수 $s_1, \dots , s_K$가 차례대로 주어진다.</p>

### 출력 

 <p>첫 번째 줄부터 $Q$개의 줄에 걸쳐, 각 질의에 대한 답을 출력한다. 이 중 $i$ ($1 ≤ i ≤ Q$)번째 줄에는 $i$번째 질의에서 주어진 $S$에 대하여, $S$의 연결 강도를 출력한다.</p>

