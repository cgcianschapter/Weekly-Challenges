X, Y = map(float, input().split())
if(X % 5 == 0 and X+0.5 < Y):
	Y = Y - X - 0.5
print("%.2f" % Y)
