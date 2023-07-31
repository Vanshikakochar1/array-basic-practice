// Find	the	minimum	and	maximum	element	in	an	array.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // int n;
    // cin >>n;
    // int a[n];
    // for(int i=0; i<n;i++){
    //     cin >> a[i];
    // }
    // sort(a.begin(),a.end(),a.begin(),(greater<int>());
   int arr[10]={1,3,2,7,2,7,4,9,6,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr + n );
   // inbuilt function to sort an array
   cout << "min-" << arr[0] << endl;
   cout << "max-" << arr[n-1];
return 0;
}