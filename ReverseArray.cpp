#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 5, 1, 2};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i = arrSize-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
