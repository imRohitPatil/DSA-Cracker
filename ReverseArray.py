arr = [1, 2, 3]
print(arr[::-1])

# or

arr = [4, 5, 1, 2]
for i in range(len(arr)-1, -1, -1):
    print(arr[i], end=" ")
