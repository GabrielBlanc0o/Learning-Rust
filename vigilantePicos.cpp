#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int array[100];

    for (auto i{0};i < n; i++){
        cin >> array[i];
    }

  for(int i = 1; i < n - 1; i++){
    if (array[i] > array[i-1] && array[i] > array[i+1]){
        cout << i << " " ;
  }
}
return 0;
}
