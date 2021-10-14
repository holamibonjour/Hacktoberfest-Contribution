#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[500], n, min=INT_MAX;
    cout << "Enter no. of Elements: ";
    cin >> n;
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        }
    
    for (int i = 0; i < n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "\nSmallest Element: " << min;
    return 0;
}