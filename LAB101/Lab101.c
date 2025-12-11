#include <stdio.h>
#include <Windows.h>
#define MAX_N 10

void Task_1_static() {
	printf("<Task 1 static>\n");

	int arr[MAX_N];
	int n;

	printf("n=");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	printf("Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	{
		int x;
		scanf_s("%d", &x);
	}
}

void Task_1_dynamic() {
	printf("<Task 1 dynamic>\n");
	int n;
	int* arr;

	printf("n=");
	scanf_s("%d", &n);

	arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	{
		int x;
		scanf_s("%d", &x);
	}
	free(arr);
}
//
//void Task_2() {
//	printf("<Task 2>\n");
//	int n;
//	int* arr;
//
//	printf("n=");
//	scanf_s("%d", &n);
//
//	arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	int n2 = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] % 2 == 0) {
//			n2++;
//		}
//	}
//
//	printf("Array: ");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	int* arr2;
//	arr2 = (int*)malloc(n2 * sizeof(int));
//	for (int i = 0, j = 0; i < n; i++) {
//		if (arr[i] % 2 == 0) {
//			arr2[j++] = arr[i];
//		}
//	}
//
//	printf("Array2: ");
//	for (int i = 0; i < n2; i++) {
//		printf("%d ", arr2[i]);
//	}
//	free(arr);
//	free(arr2);
//	printf("\n");
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}
//
//void Task_3() {
//	printf("<Task 3>\n");
//	int n;
//	int* arr;
//
//	printf("n=");
//	scanf_s("%d", &n);
//
//	arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("Array: ");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	int* arr2;
//
//	int min = arr[0];
//	int imin = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//			imin = i;
//		}
//	}
//
//	int n2 = 0;
//	for (int i = imin + 1; i < n; i++) {
//		if (arr[i] % 2 != 0) {
//			n2++;
//		}
//	}
//
//	arr2 = (int*)malloc(n2 * sizeof(int));
//
//	for (int i = imin + 1, j = 0; i < n; i++) {
//		if (arr[i] % 2 != 0) {
//			arr2[j++] = arr[i];
//		}
//	}
//
//	printf("Array2: ");
//	for (int i = 0; i < n2; i++) {
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	free(arr);
//	free(arr2);
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}
//
//void Task_5() {
//	printf("<Task 5>\n");
//	int n;
//	int* arr;
//
//	printf("n=");
//	scanf_s("%d", &n);
//
//	arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	printf("Array: ");
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	int* arr2;
//	int n2 = n * 2;
//	arr2 = (int*)malloc(n2 * sizeof(int));
//	
//	for (int i = 0, j = 0; i < n; i++) {
//		arr2[j++] = arr[i];
//		arr2[j++] = arr[i];
//	}
//
//	printf("Array2: ");
//	for (int i = 0; i < n2; i++) {
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	free(arr);
//	free(arr2);
//	{
//		int x;
//		scanf_s("%d", &x);
//	}
//}
//
//main() {
//	Task_1_static();
//	Task_1_dynamic();
//	Task_2();
//	Task_3();
//	Task_5();
//}

int* arr = NULL;
int n;
void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf(">\n");
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	if (arr != NULL) {
		free(arr);
	}
	arr = (int*)malloc(n * sizeof(int));

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}

int findMin() {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int countlarger10() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 10) {
			cnt++;
		}
	}
	return cnt;
}

int findlastEven() {
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			return i;
		}
	}
	return -1;
}

int FindIndexMin() {
	int min = arr[0];
	int indexMin = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			indexMin = i;
		}
	}
	return indexMin;
}

int FindIndexMax() {
	int max = arr[0];
	int indexMax = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			indexMax = i;
		}
	}
	return indexMax;
}

void addRand0_10() {
	int* new_arr = (int*)malloc((n + 1) * sizeof(int));
	for (int i = 0; i < n; i++) {
		new_arr[i] = arr[i];
	}
	
	if (arr != NULL) {
		free(arr);
	}
	arr = new_arr;
	arr[n++] = rand() % 11;
}

void deleteElement(int delIndex) {
	if (delIndex >= 0 && delIndex < n) {
		for (int i = delIndex; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		n--;
	}

	int* new_arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		new_arr[i] = arr[i];
	}

	free(arr);
	arr = new_arr;
}

void clearArray() {
	if (arr != NULL) {
		free(arr);
		arr = NULL;
	}
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number, even, index, IndexMin;
	do {
		printf("\n");
		printf("Лабораторная №7\n");
		printf("------------------------------------------\n");
		printf("Содержимое массива: ");
		printElements();
		printf("Выбериет нужную вам операцию:\n");
		printf("------------------------------------------\n");
		printf("1: Ввести с клавиатуры массив\n");
		printf("2: x10 для всех нечетных элементов\n");
		printf("3: Найти минимальный элемент\n");
		printf("4: Сколько элементов > 10\n");
		printf("5: x2 для последнего четного\n");
		printf("6: Сколько четных левее минимального\n");
		printf("7: x10 для нечётных правее минимального\n");
		printf("8: Переставить местами min и max\n");
		printf("9: В конец вставить случайно число (от 0 до 10)\n");
		printf("10: Удалить заданный элемент\n");
		
		printf("0:Выйти из программы\n");
		printf("------------------------------------------\n");
		printf("Выбранная операция --> ");

		scanf_s("%d", &number);
		switch (number) {
		case 1:
			keyboardInput();
			break;
		case 2:
			oddsX10();
			break;
		case 3:
		{
			int min = findMin();
			printf("min = %d\n", min);
		}
		break;
		case 4:
		{
			int cnt = countlarger10();
			printf("%d элеметов больше чем 10\n", cnt);
		}
		break;
		case 5:
		{
			int index = findlastEven();
			if (index >= 0) {
				arr[index] *= 2;
			}
		}
		break;
		case 6:
		{
			int index = FindIndexMin();
			printf("Индекс минимального элемента = %d\n", index);

			int cnt = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					cnt++;
				}
			}
			printf("Левее минимального %d четных лементов\n", cnt);
		}
		break;
		case 7:
		{
			int index = FindIndexMin();
			printf("Индекс минимального элемента = %d\n", index);

			for (int i = 0; i < n; i++) {
				if ((arr[i] % 2 == 1) && (i > index)) {
					arr[i] *= 10;
				}
			}
		}
		break;
		case 8:
		{
			int IndexMin = FindIndexMin();
			printf("Индекс минимального элемента = %d\n", IndexMin);
			int IndexMax = FindIndexMax();
			printf("Индекс максимального элемента = %d\n", IndexMax);

			int tmp = arr[IndexMin];
			arr[IndexMin] = arr[IndexMax];
			arr[IndexMax] = tmp;
		}
		break;
		case 9:
			addRand0_10();
			break;
		case 10:
		{
			printf("Индекс удаляемого элемента = ");
			int index;
			scanf_s("%d", &index);

			deleteElement(index);
		}
		break;
		}
	} while (number != 0);
	clearArray();
}