import sys
input=sys.stdin.readline

N=int(input())
stack=[]
while N>0:
    com=input().strip()
    if com=="pop":
        print(stack.pop() if stack else -1)
    elif com=="size":
        print(len(stack))
    elif com=="empty":
        if not stack:
            print(1)
        else:
            print(0)
    elif com=="top":
        print(stack[-1] if stack else -1)
    else:
        text, num=com.split()
        stack.append(int(num))
    N-=1