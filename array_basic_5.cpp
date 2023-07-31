// program to sort a given array
// bubble sort 
// iterate through loop 
// if ist element is greater than second than swap similarly for consecutive
#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0; i<n ; ++i){
        for(int j=0; j<n-i; ++j ){
            if(arr[j]> arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
        }

        }
    }
}
void printUsingBubbleSort(int arr[], int n){
    for (int i = 0; i < n; ++i)
    {
        cout <<" " << arr[n] << endl;
    }
    
    
}
int main(){
    // int n;
    // cin >>n;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin >> a[i];
    // }
    int a[] = {3,7,9,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
    printUsingBubbleSort(a,n);
return 0;
}