for i in range(int(input())):
    str1 = list(input())
    str2 = list(input())
    for i,j in zip(str1, str2):
        if(i != '?' and j != '?' and i != j):
            print('No')
            break
    else:
        print('Yes')