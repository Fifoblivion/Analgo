#include <iostream>
using namespace std;

void binarySearch(int x[], int n, int key){
bool found = false;
int i = 0;
int j = n;
int mid = 0;

while(i<=j && found==false){
    mid=(i+j)/2;
    if (x[mid]==key) {
      found=true;
    }
    else{
      if(x[mid]<key)
        i=mid+1;
      else
        i=mid-1;
    }
}
if(found==true)
cout<<"Found!\nindex: "<<mid<<endl;
else
cout<<"Not found!\n";
}
int main()
{
    int n; //banyak input
    n=5;
    int x[]={1,2,3,4,5};//array of input
    int q = 3; //key
    cout<<"input: ";
    for (int i = 0; i < n; i++) { //print array
      cout<<x[i]<<" ";
    }
    cout<<"\nkey: "<<q<<endl;
    binarySearch(x,n,q);
    return 0;
}
