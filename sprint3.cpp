#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[100];

    for (auto i{0}; i < n; i++) cin >> arr[i];

    for (auto i{0}; i < n; i++){

        if (arr[i]>0){
            arr[i]=1;
        } if (arr[i]<0){
            arr[i]=-1;
        }if (arr[i]==0){
            arr[i]=0;
        }
}
    for (auto i{0}; i < n; i++) cout << arr[i] << " ";

    return 0;
}
