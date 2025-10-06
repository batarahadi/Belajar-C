# Bubble Sort di Python
arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

for i in range(n):
    for j in range(0, n-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]  # swap

print(f"Sorted array: {arr}")

dataBaru = sorted(arr, reverse=True)
print(f"Sorted array in descending order using sorted(): {dataBaru}")


dataBaru.sort()
print(f"Sorted array using built-in sort: {dataBaru}")