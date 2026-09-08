/* Select a pivot element from the array (last element, first, middle, or random).
Rearrange the elements in the array such that all elements smaller than the pivot are placed
before it and all greater elements are placed after it (this step is called partitioning).
Recursively apply the same process
Base condition for recursion is when the subarray has zero or one element*/

/* Time Complexity: O(N*logN), At each step, we divide the whole array, for that we take logN time and n steps are taken for the partitioning. In worst case i.e. when our pivot is always the greatest or the smallest element of the array, the time complexity can be O(N^2).
Space Complexity: O(N), auxiliary stack space. */

class Solution {
public:
    // Function to perform quicksort
    void quickSort(vector<int>& arr, int low, int high) {
        // Base case: if low is not less than high
        if (low < high) {
            // Find pivot index after partitioning
            int pivotIndex = partition(arr, low, high);

            // Recursively sort elements before pivot
            quickSort(arr, low, pivotIndex - 1);

            // Recursively sort elements after pivot
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    // Function to partition the array
    int partition(vector<int>& arr, int low, int high) {
        // Choose the last element as pivot
        int pivot = arr[high];

        // Initialize i to place smaller elements
        int i = low - 1;

        // Traverse the array
        for (int j = low; j < high; j++) {
            // If element is smaller than or equal to pivot
            if (arr[j] <= pivot) {
                // Increment i and swap with j
                i++;
                swap(arr[i], arr[j]);
            }
        }

        // Place pivot in correct position
        swap(arr[i + 1], arr[high]);

        // Return pivot index
        return i + 1;
    }
};