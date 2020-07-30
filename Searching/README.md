## Linear Search
It is the easiest searching algorithm. It sequentially checks for the item in the array. The time complexity of linear search in the worst case is O(n), where n is the size of 
the array, and in the best case is O(1), which occurs if the element to be found is first in the array. It is not preferred as Binary Search gives faster searching.
## Binary Search
It assumes that the array is sorted. It looks for the element to be searched in the middle. If the element is found in the middle, we print the position. If the value of the element 
is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the 
interval is empty. The time complexity of Binary Search is O(log n) in the worst case and O(1) in the best case, which occurs if the element is already in the middle.
