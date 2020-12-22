L = [1,2,4,8,16,32,64,128,256,512,1024,2048]
for _ in range(int(input())):
    N = int(input())
    t = 0
    l = len(L)
    while(N > 0):
        l-=1
        if(L[l] <= N):
            t+=1
            N -= L[l]
            l = len(L)
    print(t)
