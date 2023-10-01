#include <iostream>

using namespace std;

const int ARR_LENGHT = 5;

void selectionSort(int arr[ARR_LENGHT]);

int main() {
	int arr[ARR_LENGHT];

	cout << "Input " << ARR_LENGHT << "arr value" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cin >> arr[i];
	}

	selectionSort(arr);

	cout << "Arr sorted:" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void selectionSort(int arr[ARR_LENGHT]) {
	int min, tmp;

	for (int i = 0; i < ARR_LENGHT; i++) {
		min = i;
		for (int j = i; j < ARR_LENGHT; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}

		if (i != min) {
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}