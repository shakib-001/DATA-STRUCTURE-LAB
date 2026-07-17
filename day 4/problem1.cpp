#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 6, 4, 8, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-j;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
     cout<< "short number is: ";
            for(int i=0;i<n; i++){
                cout<<arr[i];
                }

return 0;
}

