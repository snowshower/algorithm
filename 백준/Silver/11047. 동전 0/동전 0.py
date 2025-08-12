import bisect

N, K=map(int, input().split())
coins=[]
for i in range(N):
    coins.append(int(input()))

index=bisect.bisect_right(coins, K)

cnt=0

for i in range(index-1, -1, -1):
    cnt+=K//coins[i]
    K%=coins[i]

print(cnt)