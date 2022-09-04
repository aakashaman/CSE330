#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void bubblesort(int arr[], int n) {
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[],int size){
    int i;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int arr[] = {5,1,4,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printarray(arr,n);
    return 0;

    
}
