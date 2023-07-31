// Write	a	program	to	reverse	the	array.	
// [Hint:	use	indexes]	
// Here	,	5	is	the	size	of	array	and	then	elements	of	arrays	are	input
#include<iostream>
#include<algorithm>
using namespace std;
void reverseArray(int a[], int start, int end){
     while(a[end]>a[start]){
        int temp = a[start];
        a[start]= a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}
int main(){
 
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout << "Original Array" << endl;
    printArray(a,n);
    reverseArray(a,0,n-1);
    cout << endl;
    cout << "After Array is Reversed" << endl;
    printArray(a,n);
    return 0;
}