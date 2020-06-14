//Сивцев Илья, ИВТ-19-3, k=18.

#include<iostream>
using namespace std;
int main() {
    int* a, k = 1, n, i, b = 0;
    cin >> n;
    a = new int[n];
    for (i = 0;i < n;i++)
        cin >> a[i];
    for (i = 0;i < n - 1;i++)
        if (a[i] > a[i + 1]) k++;
        else if (k > 1) { b++;k = 1; }
    cout << k;
}