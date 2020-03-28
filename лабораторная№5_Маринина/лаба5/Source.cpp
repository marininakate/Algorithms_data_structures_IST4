#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int size1;
	cout << "Введите размер массива A: " << " ";
	cin >> size1;
	while (!(cin) || (cin.get() != '\n')) //защита от некорректного ввода значения
	{

		cout << "Ошибка!!" << endl;

		cin.clear();

		cin.sync();

		cin.ignore();

		cout << "Попробуйте еще раз: ";

		cin >> size1;
	}

	cout << "-------------------------------" << endl;
	cout << "Массив A: " << endl;
	int *A = new int[size1];

	for (int i = 0; i < size1; ++i)
	{
		cin >> A[i];
		while (!(cin) || (cin.get() != '\n')) //защита от некорректного ввода значения
		{

			cout << "Ошибка!!" << endl;

			cin.clear();

			cin.sync();

			cin.ignore();

			cout << "Попробуйте еще раз: ";

			cin >> A[i];
		}

	}
	//сортировка массива а
	for (int j = 1; j < size1; j++)
		for (int k = 0; k < size1 - 1; k++)
			if (A[k] > A[k + 1])
			{
				int temp = A[k];
				A[k] = A[k + 1];
				A[k + 1] = temp;
			}
	//выводим на экран отсортированный массив а
	cout << "-------------------------------" << endl;
	cout << "Сортировка массива А: " << endl;
	for (int l = 0; l < size1; l++)
		cout << A[l] << " ";
	cout << endl;
	cout << "-------------------------------" << endl;

	int size2;
	cout << "Введите размер массива В: " << " ";
	cin >> size2;
	while (!(cin) || (cin.get() != '\n')) //защита от некорректного ввода значения
	{

		cout << "Ошибка!!" << endl;

		cin.clear();

		cin.sync();

		cin.ignore();

		cout << "Попробуйте еще раз: ";

		cin >> size2;
	}
	cout << "-------------------------------" << endl;
	cout << "Массив B: " << endl;
	int *B = new int[size2];
	for (int i = 0; i < size2; ++i)
	{
		cin >> B[i];
		while (!(cin) || (cin.get() != '\n')) //защита от некорректного ввода значения
		{

			cout << "Ошибка!!" << endl;

			cin.clear();

			cin.sync();

			cin.ignore();

			cout << "Попробуйте еще раз: ";

			cin >> B[i];
		}
	}
	cout << endl;
	cout << "-------------------------------" << endl;
	//сортировка массива в
	for (int j = 1; j < size2; j++)
		for (int k = 0; k < size2 - 1; k++)
			if (B[k] > B[k + 1])
			{
				int temp = B[k];
				B[k] = B[k + 1];
				B[k + 1] = temp;
			}
	//выводим на экран отсортированный массив
	cout << "Сортировка массива В: " << endl;
	for (int l = 0; l < size2; l++)
		cout << B[l] << " ";
	cout << endl;
	cout << "-------------------------------" << endl;

	int size3 = size1 + size2; //размер массива с
	int *C = new int[size3];
	//функция слияния (неупорядоченного)
	for (int i = 0; i <= size3; ++i)
	{

		if (i < size1)
			C[i] = A[i];
		else
			C[i] = B[i - size1];
	}

	cout << "Массив С: " << endl;
	//сортировка массива С
	for (int j = 1; j < size3; j++)
		for (int k = 0; k < size3 - 1; k++)
			if (C[k] > C[k + 1])
			{
				int temp = C[k];
				C[k] = C[k + 1];
				C[k + 1] = temp;
			}


	//выводим на экран отсортированный массив
	for (int l = 0; l < size3; l++)
		cout << C[l] << " ";
	cout << endl;
	delete[] A;
	delete[] B;
	delete[] C;
	system("pause");
	return 0;
}