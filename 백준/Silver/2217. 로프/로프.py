import sys
input=sys.stdin.readline

N=int(input())
rope=sorted(int(input()) for i in range(N))
# rope=[int(input()) for i in range(N)]
# rope.sort()

w=max(rope[i]*(N-i) for i in range(N))
# w=rope[0]*N
# for i in range(1, N):
#     if rope[i]*(N-i)>w:
#         w=rope[i]*(N-i)

print(w)