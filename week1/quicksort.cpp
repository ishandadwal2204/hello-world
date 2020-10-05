// #include<bits/stdc++.h>
// using namespace std;
// void swap(vector<int> arr,int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// void show(vector<int> array){
//     for (int i = 0; i < array.size(); i++)
//     {
//         cout<<array[i];
//     }
//     cout<<endl;
    
// }
// int partition(vector<int> arr,int low,int high){
//     int pivot=arr[high];
//     //cout<<pivot<<endl;
//     int i=low-1;
//     for(int j=low;j<high;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr,arr[i],arr[j]);
//         }
//     }
//     swap(arr,arr[i+1],arr[high]);
//     return i+1;
// }
// void sort(vector<int >arr,int low,int high){
//     if(low<high){
//         int pi=partition(arr,low,high);
//         //cout<<"pivot is at position"<<pi;
//         sort(arr,low,pi-1);
//         sort(arr,pi+1,high);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     vector<int> array{9,5,3,6,7,8,2};
//     //show(array);
//     sort(array,0,array.size());
//     show(array);
//     return 0;
// }

#include<stdio.h> 
  
// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
   // printf("n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n-1); 
    printf("Sorted array: "); 
    printArray(arr, n); 
    return 0; 
}