#include <iostream>
using namespace std;

void findMax(int x[], int n){
int max = 0;
int i = 0;
while(i<=n){
    if (x[i]>max){
        max=x[i];
    }
    i++;
}
cout<<"max: "<<max<<endl;
}
int main()
{
    int n; //banyak input
    n=4;
    int x[]={1,2,3,4,5};//array of input
    cout<<"input: ";
    for (int i = 0; i <= n; i++) { //print array
      cout<<x[i]<<" ";
    }
    findMax(x,n);
    return 0;
}
