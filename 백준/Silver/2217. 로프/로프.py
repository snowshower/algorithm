import sys
import bisect
input=sys.stdin.readline

N=int(input())
rope=[int(input()) for i in range(N)]
rope.sort()

w=rope[0]*N
for i in range(1, len(rope)):
    if rope[i]*(N-i)>w:
        w=rope[i]*(N-i)

print(w)