#include<stdio.h>
int binarysearch(int arr[],int size, int key) {
    int low = 0;
    int high = size - 1;
            while (low <= high) {
                int mid = low + (high - low) / 1;
                 
                if (arr[mid] == key) {
                    return mid;
                }
                if (arr[mid] < key) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
                
            }
            return -1;
        }          
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 60;
     
    int result = binarysearch(arr, size, key);
     
        if (result != -1) {
            printf("Binary Search: Element found at index %d\n", result);
        } else {
            printf("Binary Search: Element not found\n");
        }
        return 0;
    }            