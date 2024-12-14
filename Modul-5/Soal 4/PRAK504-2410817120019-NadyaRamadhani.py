def reverse(nil):
    reversed = 0
    while nil > 0:
        reversed = reversed * 10 + (nil % 10)
        nil = nil // 10
    return reversed

A, B = map(int, input().split())
A=reverse(A)
B=reverse(B)
C = A+B
print(reverse(C))