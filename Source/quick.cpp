#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int partition(int a[], int i, int j) {
  int p = a[i]; // p is the pivot
  int m = i; // S1 and S2 are initially empty
  for (int k = i+1; k <= j; k++) { // explore the unknown region
    if (a[k] < p) { // case 2
      m++;
      swap(a[k], a[m]); // C++ STL algorithm std::swap
    } // notice that we do nothing in case 1: a[k] >= p
  }
  swap(a[i], a[m]); // final step, swap pivot with a[m]
  return m; // return the index of pivot
}
void quickSort(int a[], int low, int high) {
  if (low < high) {
    int m = partition(a, low, high); // O(N)
    // a[low..high] ~> a[low..m–1], pivot, a[m+1..high]
    quickSort(a, low, m-1); // recursively sort left subarray
    // a[m] = pivot is already sorted after partition
    quickSort(a, m+1, high); // then sort right subarray
  }
}
int main()
{
    int n = 8;
    int a[]={1, 5, 19, 20, 2, 11, 15, 17};//array of input
    int low=1;
    int high=n;
    cout<<"input: ";
    for (int i = 0; i < n; i++) { //print array
      cout<<a[i]<<" ";
    }
    quickSort(a,low,high);
    cout<<"\nsorted output: ";
    for (int i = 0; i < n; i++) {
      cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
