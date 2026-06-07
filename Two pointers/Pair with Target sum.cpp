#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 5, 1, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    sort(arr, arr + n);

    int i = 0, j = n - 1;

    while(i < j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            cout << arr[i] << " " << arr[j] << '\n';
            break;
        } else if(sum < target){
            i++;
        } else {
            j--;
        }
    }
    return 0;
}