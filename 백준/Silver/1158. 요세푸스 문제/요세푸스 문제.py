import sys
from collections import deque
input=sys.stdin.readline

N, K=map(int, input().split())
queue=deque(range(1, N+1))
result=[]

while queue:
    queue.rotate(-K+1)
    result.append(queue.popleft())

print("<", end='')
print(', '.join(map(str, result)), end='')
print(">")