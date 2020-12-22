for _ in range(int(input())):
    N = input()
    if N[::-1] == N:
        print('wins')
    else:
        print('loses')
