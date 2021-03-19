#include<iostream>
using namespace std;

int main()
{
    // defining integer
    int arr[10009];
    int i;
    // input
    cin >> i;
    // defining an integer array
    // int arr[i];
    for (int j=0; j < i; j++) cin>>arr[j];
    for (int a=i; a>=0;a--) {
        if (a==i) {
            continue;
        }
        else {
        cout << arr[a] << " ";
        }
    }

    
}
