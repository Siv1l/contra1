//Сивцев Илья, ИВТ-19-3, k = 15.
#include<iostream>
using namespace std;
int main() {
	int a, k = 0;
	cin >> a;
	while (a != -1)
	{
		if (a % 2 == -1) k++;
		cin >> a;
	}
	cout << k;
}