users = [0] * 500
difMoney = 0

def switchMoney(n1, n2, num):
    global users
    global difMoney 

    n1-=1
    n2-=1

    users[n2] += num
    t = 0
    if users[n1] < num:
        t += num - users[n1]
    difMoney += t


n = int(input())

for i in range(n):
    a = int(input())
    b = int(input())
    c = int(input())

    switchMoney(a, b, c)

print(difMoney)
