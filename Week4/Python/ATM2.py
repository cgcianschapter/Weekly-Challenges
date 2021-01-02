for _ in range(int(input())):
    _, k = map(int, input().split())
    A = list(map(int, input().split()))
    for ind, amt in enumerate(A):
        if(amt <= k):
            A[ind] = 1
            k -= amt
        else:
            A[ind] = 0
    print(*A, sep='')