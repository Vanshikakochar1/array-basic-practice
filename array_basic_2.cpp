// Check	whether	n	is	present	in	an	array	of	size	m	or	not.	
// Input	-		n,m	(Input	number,	size	of	array)
// -									Take	input	n	elements	for	the	array
// Output	->	true/false
// sample Input: 3
                // 5
                // 1 2 3 4 5 
                // output: True

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // defining variables 
    int number,size;
    // Taking input from user
    cout << "Enter the number you want to check  ";
    cin >> number;
    cout << endl;
    cout << "enter the size of array  " ;
    cin >> size;
    cout << endl;
    int a[size];
    cout << "enter the array elements  " ;
    for(int i=0; i<size; i++){
        cin >> a[i];
        cout << a[i] << endl;
    }


    bool isEqual(number, a[i]){
        return (number == a[i]);
    }
    // for(int i=0; i<size; i++){
    //     if(number == a[i]){
    //         cout << "true" <<endl;
    //         break;
    //     }

    // }
        
    // cout << "false" << endl;  
    if(isEqual(number, a[i])==true){
        cout << "true";
    }
        
    else{
        cout << "false";
    }

return 0;
}