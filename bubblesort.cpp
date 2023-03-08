#include<vector>
#include<iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int arr[], int n)
{   
    for(int i = 1; i<n; i++){
        for(int j =0; j<n-i; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
           
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout<< array[i] << " ";
  }
  cout << endl;
} 

int main()
{
    int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout<< "Sorted array in Acsending Order:\n";
  printArray(data, size);
}
