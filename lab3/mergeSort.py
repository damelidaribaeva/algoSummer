def merge_sort(arr):
    
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2

    left_half = merge_sort(arr[:mid])
    right_half = merge_sort(arr[mid:])
 
    return merge(left_half, right_half)

def merge(left, right):
    result = []
    l, r = 0, 0
    
    while l < len(left) and r < len(right):
        if left[l] <= right[r]:
            result.append(left[l])
            l += 1
        else:
            result.append(right[r])
            r += 1
  
    result.extend(left[l:])
    result.extend(right[r:])
    
    return result

def read_input():
    input_str = input()
    input_list = list(map(int, input_str.split()))
    return input_list

if __name__ == "__main__":
    arr = read_input()
    
    print(arr)
    sorted_arr = merge_sort(arr)
    print(sorted_arr)