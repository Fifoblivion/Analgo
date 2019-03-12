#include <iostream>
using namespace std;

void selectionSort(int x[], int n){
  int j;
  int imin;
  int temp;

  for(int i=0; i < n-1; i++){
    imin=i;
    for (j = i+1; j < n+1; j++) {
      if (x[j]<x[imin]) {
        imin=j;
      }
    }
    int temp = x[imin];
    x[imin] = x[i];
    x[i] = temp;
  }
  cout<<"\nsorted output: ";
  for (int i = 0; i < n; i++) {
    cout<<x[i]<<" ";
  }
  cout<<endl;
}
int main()
{
    int n; //banyak input
    n=5;
    int x[]={5,4,3,2,1};//array of input
    cout<<"input: ";
    for (int i = 0; i < n; i++) { //print array
      cout<<x[i]<<" ";
    }
    selectionSort(x,n);
    return 0;
}
