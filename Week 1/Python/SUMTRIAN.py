for _ in range(int(input())):
    S = int(input())
    L = []
    for s in range(S):
        L.append(list(map(int, input().split())))
    i = S-1
    while(i > 0):
        for j in range(i):
            L[i-1][j] += max(L[i][j], L[i][j+1])
        i -= 1
    print(L[0][0])
