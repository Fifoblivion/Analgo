#include <iostream>
using namespace std;

void sequentialSearch(int x[], int n, int key){
bool found = false;
int i = 0;
while(i<=n && found==false){
    if (x[i]==key) {
      found=true;
    }
    else
    i++;
}
if(found==true)
cout<<"Found!\nindex: "<<i<<endl;
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
    sequentialSearch(x,n,q);
    return 0;
}
