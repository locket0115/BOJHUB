#include <bits/stdc++.h>
using namespace std;

int arr[305];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a+100]++;
    }
    
    int a;
    cin >> a;
    cout << arr[a+100];
}