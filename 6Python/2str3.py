from cs50 import get_string

s = get_string("Input: ")
print("Output: ", end = "")

for i in range(len (s)):
    print(s[i] , end = "")
print()


#直接用c打印s
print("Output: ", end = "")
for c in s:
    print(c, end = "")
print()