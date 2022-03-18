#include<iostream>
#include<ctime>
using namespace std;
//транспонирование матрицы

void FillArray(int** arr, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void ShowArray(int** arr, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void FillArray_1(int**& arr, int SIZE) {
	int** arr_1 = new int* [SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr_1[i] = new int[SIZE];
	}
	////////////////
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr_1[i][j] = arr[j][i];
		}
		cout << endl;
	}
	delete[] arr; arr = arr_1;

}
/////////////////////////////////////////////
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int size = 5;

	int** ARR = new int* [size];
	for (int i = 0; i < size; i++) {
		ARR[i] = new int[size];
	}


	FillArray(ARR, size);
	ShowArray(ARR, size);

	FillArray_1(ARR, size);
	ShowArray(ARR, size);



	delete[] ARR;
	cin.get();
	cin.get();
}