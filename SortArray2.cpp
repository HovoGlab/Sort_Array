#include <iostream>

int * sort(int[], int[], int, int);


int main() {
	int arr1[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22 };
	int arr2[] = { 1, 3, 5, 7, 9 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int* result = sort(arr1, arr2, size1, size2);

	for (int i = 0; i < size1 + size2; ++i) {
		std::cout << result[i] << std::endl;
	}
}

int * sort(int arr1[], int arr2[], int size1, int size2) {
	int size3 = size1 + size2;
	int * res = new int[size3];
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1 && j < size2) {
		if (arr1[i] < arr2[j]) {
			res[k++] = arr1[i++];
		}
		else {
			res[k++] = arr2[j++];
		}
	}
	while (i < size1) {
		res[k++] = arr1[i++];
	}
	while (j < size2) {
		res[k++] = arr2[j++];
	}
	
	return res;
}

