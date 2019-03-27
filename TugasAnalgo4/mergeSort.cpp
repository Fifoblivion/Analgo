#include <iostream>
using namespace std;

void merge(int a[], int p, int q, int r) { //p=low,q=mid,r=high
  // subarray1 = a[p..q], subarray2 = a[q+1..r]
  int N = r-p+1;
  int b[N];
  int left = p, right = q+1, bIdx = 0;
  while (left <= q && right <= r) // the merging
    b[bIdx++] = (a[left] <= a[right]) ? a[left++] : a[right++];
  while (left <= q) b[bIdx++] = a[left++]; // leftover, if any
  while (right <= r) b[bIdx++] = a[right++]; // leftover, if any
  for (int k = 0; k < N; k++) a[p+k] = b[k]; // copy back
}



void mergeSort(int a[], int p, int r) {
  // the array to be sorted is a[p..r]
  if (p < r) { // base case: p >= r (0 or 1 item)
    int q = (p+r) / 2;
    mergeSort(a, p  , q ); // divide into two halves
    mergeSort(a, q+1, r); // then recursively sort them
    merge(a, p, q, r); // conquer: the merge subroutine
  }
}

int main()
{
    int n = 20;
    int a[]={1, 5, 19, 20, 2, 11, 15, 17 ,3, 6, 16, 22, 24, 31, 35, 47,53,51,19,30};//array of input
    int p=1;
    int r=n;
    cout<<"input: ";
    for (int i = 0; i < n; i++) { //print array
      cout<<a[i]<<" ";
    }
    mergeSort(a,p,r);
    cout<<"\nsorted output: ";
    for (int i = 0; i < n; i++) {
      cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
