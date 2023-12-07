#include <bits/stdc++.h>
using namespace std;
void findMajority(int arr[], int n) {
     
    int flag = 0; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > (n / 3)) {
            cout << arr[i] << " ";
            flag = 1;
        }
    }
    if (!flag)
        cout << "No Majority Element" << endl;
}
int main() {
    int n;
    cout<<"enter the size of the array : "<<endl;
    cin >> n;
    int arr[n];
    cout<<"nums =  ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findMajority(arr, n);
}