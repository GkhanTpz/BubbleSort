# Bubble Sort and Array Printer in C

This project showcases a C program that generates a random array of integers, prints it, and then sorts it using the **Bubble Sort** algorithm. It's a simple demonstration of dynamic memory allocation, array handling, and sorting algorithms.

---

## Features

1. **Dynamic Array Allocation**:
   - The program uses `malloc` to dynamically allocate memory for the array, making it flexible and memory-efficient.
2. **Random Array Generation**:
   - Populates the array with random integers between 1 and 100 using the `rand` function.
3. **Bubble Sort Implementation**:
   - Demonstrates a simple yet fundamental sorting algorithm.
4. **Formatted Array Printing**:
   - Prints the unordered and ordered array neatly for user clarity.

---

## Code Explanation

### Core Functions:
1. **`PrintArray(unsigned int* array)`**:
   - Prints the elements of the array in a single line, separated by spaces.

2. **`BubbleSort(unsigned int* array)`**:
   - Implements the Bubble Sort algorithm:
     - Compares adjacent elements in the array.
     - Swaps them if they are out of order.
     - Repeats this process until the array is sorted.

3. **Main Workflow**:
   - Dynamically allocates an array of size `SIZE` (default: 12).
   - Fills the array with random integers between 1 and 100.
   - Prints the unordered array.
   - Sorts the array using Bubble Sort.
   - Prints the sorted array.

---

## Usage

### Prerequisites
- A C compiler (e.g., GCC).

### Steps to Run:
1. Clone the repository:
   ```bash
   git clone https://github.com/YourUsername/Bubble-Sort.git
   ```
2. Compile the program:
   ```bash
   gcc bubble_sort.c -o bubble_sort
   ```
3. Run the program:
   ```bash
   ./bubble_sort
   ```

### Example Output
```text
Unordered Array
45 67 23 89 12 34 56 78 90 11 43 76 

Ordered Array
11 12 23 34 43 45 56 67 76 78 89 90
```

## Learning Outcomes

- Dynamic memory allocation using `malloc` and `free`.
- Random number generation and manipulation in C.
- Implementation of a fundamental sorting algorithm.
- Efficient use of pointers for array handling.

---

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute it as needed.

---
