from math import ceil
for _ in range(int(input())):
    A,B,N = map(int, input().split())
    A *= 1 << (ceil(N/2) - N//2)
    print(max(A, B)//min(A, B))