## Sorting
These algorithms are used to rearrange given array elements in a particular order based on a comparison operator.
### Bubble Sort
It is the simplest sorting algorithm that works by repeatedly swapping adjacent elements if they are in the incorrect order. The worst-case time complexity of Bubble Sort is
O(n * n), where n is the size of the array, while best-case time complexity is O(n), which happens when an array is already sorted. 

### Selection Sort
The selection sort algorithm picks the minimum element in an unsorted array in every iteration and puts it in the beginning. Thus, seperating the array into an unsorted and sorted 
part. The time complexity of Selection Sort is O(n * n) in the best-case as well as the worst-case. 

### Insertion Sort
It works similar to sorting playing cards in the hand. The array is split into a sorted and an unsorted part and element from the unsorted part is inserted into the correct 
position in sorted part. The best-case time complexity of Insertion sort is O(n) and worst-case is O(n * n)

### Quick Sort
Quick Sort is a Divide and Conquer Algorithm. It picks an element as the pivot and partitions the array around the pivot. After that, it sorts the array till elements before the
pivot and after the pivot are not in the correct order. The worst-case time complexity of Quick Sort is O(n * n), while best-case is O(n * log n)

### Merge Sort
Like Quick Sort, Merge Sort is a Divide and Conquer Algorithm. It divides the array into two halves, calls itself for two halves and then merges the two sorted halves. The time 
complexity of Merge Sort is O(n * log n) in all three cases.
