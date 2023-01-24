from collections import Counter

shoecount = int(input())
shoes = Counter(map(int, input().split()))
custcount = int(input())

total_income = 0

for i in range(custcount):
    size, price = map(int, input().split())
    if shoes[size]:
        total_income += price
        shoes[size] -= 1
    
    
print(total_income)
