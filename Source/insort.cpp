#include <iostream>
using namespace std;

void insertionSort(int x[], int n){
  int j;
  int insert;

  for(int i=1; i < n; i++){
    insert=x[i];
    j=i-1;
    while (j>=0 && x[j]>insert) {
      x[j+1]= x[j];
      j=j-1;
    }
    x[j+1]=insert;
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
    insertionSort(x,n);
    return 0;
}
