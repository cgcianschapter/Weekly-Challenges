for _ in range(int(input())):
    A = input().split()
    a = A.count('1')
    if(a == 0):
        print('Beginner')
    elif(a == 1):
        print('Junior Developer')
    elif(a == 2):
        print('Middle Developer')
    elif(a == 3):
        print('Senior Developer')
    elif(a == 4):
        print('Hacker')
    else:
        print('Jeff Dean')