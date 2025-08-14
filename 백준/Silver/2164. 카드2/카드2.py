import sys
from collections import deque
input=sys.stdin.readline

N=int(input())
queue=deque(range(1, N+1))
# queue=deque()
# for i in range(N):
#     queue.append(i+1)

while len(queue)>1:
    queue.popleft()
    queue.append(queue.popleft())
    # front=queue[0]
    # queue.popleft()
    # queue.append(front)

print(queue.popleft())