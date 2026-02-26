#include <iostream>
using namespace std;

int NumMayor (int a[], int n){
    if (n==0){
        return a[0];
    }

    int m = NumMayor (a, n-1);

    if (m>a[n-1]){
        return m;
    }
    else {
        return a[n-1];
    }

}


int main(){

    int array[5] = {3,5,2,6,8};

    int num = NumMayor(array, 5);

    cout << num;
    return 0;
}