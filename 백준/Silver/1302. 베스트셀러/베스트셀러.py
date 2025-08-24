import sys
input=sys.stdin.readline

N=(int(input()))
book={}

def add_title(title:str):
    if title in book:
        book[title]+=1
    else:
        book[title]=1
    
for i in range(N):
    add_title(input())
    
result=sorted(
    book.items(),
    key=lambda x:(-x[1], x[0]),
)    

print(result[0][0])