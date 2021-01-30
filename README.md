# 0x1B. C - Sorting algorithms & Big O

### At least four different sorting algorithms

#### Simple sorts
Two of the simplest sorts are insertion sort and selection sort, both of which are efficient on small data, due to low overhead, but not efficient on large data. Insertion sort is generally faster than selection sort in practice, due to fewer comparisons and good performance on almost-sorted data, and thus is preferred in practice, but selection sort uses fewer writes, and thus is used when write performance is a limiting factor.

#### Insertion sort
Main article: Insertion sort
Insertion sort is a simple sorting algorithm that is relatively efficient for small lists and mostly sorted lists, and is often used as part of more sophisticated algorithms. It works by taking elements from the list one by one and inserting them in their correct position into a new sorted list similar to how we put money in our wallet.[22] In arrays, the new list and the remaining elements can share the array's space, but insertion is expensive, requiring shifting all following elements over by one. Shellsort (see below) is a variant of insertion sort that is more efficient for larger lists.

#### Selection sort
Main article: Selection sort
Selection sort is an in-place comparison sort. It has O(n2) complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity, and also has performance advantages over more complicated algorithms in certain situations.

The algorithm finds the minimum value, swaps it with the value in the first position, and repeats these steps for the remainder of the list.[23] It does no more than n swaps, and thus is useful where swapping is very expensive.

#### Efficient sorts
Practical general sorting algorithms are almost always based on an algorithm with average time complexity (and generally worst-case complexity) O(n log n), of which the most common are heap sort, merge sort, and quicksort. Each has advantages and drawbacks, with the most significant being that simple implementation of merge sort uses O(n) additional space, and simple implementation of quicksort has O(n2) worst-case complexity. These problems can be solved or ameliorated at the cost of a more complex algorithm.

### What is the Big O notation, and how to evaluate the time complexity of an algorithm

Is an asymptotic notation, which helps to identify the behavior of an algorithm depending on the upper limit, since it represents the worst case in terms of performance, big O simplifies the algorithm in its approximation in real functions based on the execution time.

![alt text](https://1.bp.blogspot.com/-bjP1Mt98YMU/XWMhHAFNFKI/AAAAAAABGOM/Rvqe3UU5SKMYY8DpBbR0BA2KadrgLQcxwCLcBGAs/s1600/1_5ZLci3SuR0zM_QlZOADv8Q.jpeg)

### How to select the best sorting algorithm for a given input

To choose a sorting algorithm for a particular problem, consider the running time, space complexity, and the expected format of the input list.
![Test Image 1](sort.png)


### What is a stable sorting algorithm
