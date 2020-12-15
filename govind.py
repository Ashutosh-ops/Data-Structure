def gov(a):
	sum = 0

	while(a > 0 or sum > 9):

		if(a == 0):
			a = sum
			sum = 0

		sum += n % 10
		a /= 10
    return sum
    # print(sum)


n = 1234
# print ()
gov(n)
