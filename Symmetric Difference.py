# Enter your code here. Read input from STDIN. Print output to STDOUT
m = int(input())
set1 = set(map(int, input().split()))

n = int(input())
set2 = set(map(int, input().split()))


res = sorted(x for x in set1.symmetric_difference(set2))
for i in res:
    print(i)
