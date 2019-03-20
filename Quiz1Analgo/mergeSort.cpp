#include <iostream>
using namespace std;

void merge(int A[], int p, int q, int r) {//p=low,q=mid,r=high
  // subarray1 = a[p..q], subarray2 = a[q+1..r], sorted
  int N = r-p+1;
  int b[N]; //temporary array
  int left = p, right = q+1, bIdx = 0;

  while (left <= q && right <= r){ // merging
    b[bIdx++] = A[left];
    if(A[left] <= A[right])
     A[left++];
    else
     A[right++];
  }
  while (left <= q) {
    b[bIdx++] = A[left++]; // rest
  }
  while (right <= r) {
    b[bIdx++] = A[right++];// rest
  }
  for (int k = 0; k < N; k++)
  {
     A[p+k] = b[k]; // copy back
  }
}


void mergeSort(int A[], int p, int r){
  int n =5;
  if (p < r) {
    int q = (p+r) / 2;
    mergeSort(A, p  , q ); // divide
    mergeSort(A, q+1, r); //  sort
    merge(A, p, q, r); // conquer / Merge
  }
}
int main()
{
    int n = 6;
    int A[]={5,4,3,2,1,6};//array of input
    int p=A[0];
    int r=A[5];
    cout<<"input: ";
    for (int i = 0; i < n; i++) { //print array
      cout<<A[i]<<" ";
    }
    mergeSort(A,p,r);
    cout<<"\nsorted output: ";
    for (int i = 0; i < n; i++) {
      cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
