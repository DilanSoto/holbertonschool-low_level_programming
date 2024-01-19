C - Search Algorithms

Here are a few key search algorithms written in C:

Linear search - This is one of the simplest search algorithms. It sequentially checks each element of the list/array to see if it matches the target value. Time Complexity = O(n)
Binary search - This can only be used on sorted arrays/lists. It works by dividing the search space in half at each step. Time Complexity = O(log n)
Bubble sort - Repeatedly steps through the list comparing adjacent elements and swapping them if they are in the wrong order. Place largest elements at the end. Time Complexity = O(n^2)
Selection sort - Finds the minimum element from the unsorted part and moves it to the sorted part. Repeats until the list is fully sorted. Time Complexity = O(n^2)
Insertion sort - Builds up the sorted array one element at a time. It assumes the first element is sorted, and then inserts each next element in the correct position. Time Complexity = O(n^2)
Quicksort - Picks a "pivot" element and rearranges the array so that all elements with values less than the pivot come before the pivot, and all elements with values greater than the pivot come after it. Then applies quicksort recursively to the sub-arrays. Time Complexity = O(nlogn) on average
Binary tree traversal (preorder, inorder, postorder) - Useful for searching binary tree data structures. Time Complexity = O(n) where n is number of nodes.
So in summary, linear search and binary search are simplest, while quicksort, binary search and tree traversals are generally the most efficient depending on the data structure.