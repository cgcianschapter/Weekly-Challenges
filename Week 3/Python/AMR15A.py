N = int(input())
L = list(map(int, input().split()))

count = 0
for n in L:
    if n % 2 == 0:
        count += 1
        
if count > N-count:
    print('READY FOR BATTLE')
else:
    print('NOT READY')
