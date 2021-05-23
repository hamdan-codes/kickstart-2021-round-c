# Author: Chaudhary Hamdan
# Github: https://github.com/hamdan-codes

def printAllKLength(set, k):
    n = len(set)
    printAllKLengthRec(set, "", n, k)

def printAllKLengthRec(set, prefix, n, k):
    if (k == 0) :
        strings.append(prefix)
        return

    for i in range(n):
        newPrefix = prefix + set[i]
        printAllKLengthRec(set, newPrefix, n, k - 1)
def isPalindrome(s):
    return s == s[::-1]


strings = []
alphas = []
a = list(range(97, 97+26))
for alpha in a:
    alphas.append(chr(alpha))

t = int(input())
for tc in range(1, t+1):
    ans = 0
    n, k = [int(x) for x in input().split()]
    s = input()
    strings = []
    printAllKLength(alphas[:k], n)
    l = len(strings)
    for string in strings:
        if string < s and isPalindrome(string):
            ans += 1

    print('Case #'+str(tc)+': '+str(ans))