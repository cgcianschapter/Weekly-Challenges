for _ in range(int(input())):
    A,B,N = map(int, input().split())
    A *= 1 if(N%2 == 0) else 2
    print(max(A, B)//min(A, B))