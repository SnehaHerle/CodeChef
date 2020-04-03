//https://www.codechef.com/problems/FCTRL2
def factorial(n):
        if n == 0:
            return 1
        else:
            return n * factorial(n-1)

t=int(input())
while t>0:
    n=int(input())
    print(factorial(n))
    t-=1
