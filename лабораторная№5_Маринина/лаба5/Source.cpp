#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int size1;
	cout << "������� ������ ������� A: " << " ";
	cin >> size1;
	while (!(cin) || (cin.get() != '\n')) //������ �� ������������� ����� ��������
	{

		cout << "������!!" << endl;

		cin.clear();

		cin.sync();

		cin.ignore();

		cout << "���������� ��� ���: ";

		cin >> size1;
	}

	cout << "-------------------------------" << endl;
	cout << "������ A: " << endl;
	int *A = new int[size1];

	for (int i = 0; i < size1; ++i)
	{
		cin >> A[i];
		while (!(cin) || (cin.get() != '\n')) //������ �� ������������� ����� ��������
		{

			cout << "������!!" << endl;

			cin.clear();

			cin.sync();

			cin.ignore();

			cout << "���������� ��� ���: ";

			cin >> A[i];
		}

	}
	//���������� ������� �
	for (int j = 1; j < size1; j++)
		for (int k = 0; k < size1 - 1; k++)
			if (A[k] > A[k + 1])
			{
				int temp = A[k];
				A[k] = A[k + 1];
				A[k + 1] = temp;
			}
	//������� �� ����� ��������������� ������ �
	cout << "-------------------------------" << endl;
	cout << "���������� ������� �: " << endl;
	for (int l = 0; l < size1; l++)
		cout << A[l] << " ";
	cout << endl;
	cout << "-------------------------------" << endl;

	int size2;
	cout << "������� ������ ������� �: " << " ";
	cin >> size2;
	while (!(cin) || (cin.get() != '\n')) //������ �� ������������� ����� ��������
	{

		cout << "������!!" << endl;

		cin.clear();

		cin.sync();

		cin.ignore();

		cout << "���������� ��� ���: ";

		cin >> size2;
	}
	cout << "-------------------------------" << endl;
	cout << "������ B: " << endl;
	int *B = new int[size2];
	for (int i = 0; i < size2; ++i)
	{
		cin >> B[i];
		while (!(cin) || (cin.get() != '\n')) //������ �� ������������� ����� ��������
		{

			cout << "������!!" << endl;

			cin.clear();

			cin.sync();

			cin.ignore();

			cout << "���������� ��� ���: ";

			cin >> B[i];
		}
	}
	cout << endl;
	cout << "-------------------------------" << endl;
	//���������� ������� �
	for (int j = 1; j < size2; j++)
		for (int k = 0; k < size2 - 1; k++)
			if (B[k] > B[k + 1])
			{
				int temp = B[k];
				B[k] = B[k + 1];
				B[k + 1] = temp;
			}
	//������� �� ����� ��������������� ������
	cout << "���������� ������� �: " << endl;
	for (int l = 0; l < size2; l++)
		cout << B[l] << " ";
	cout << endl;
	cout << "-------------------------------" << endl;

	int size3 = size1 + size2; //������ ������� �
	int *C = new int[size3];
	//������� ������� (����������������)
	for (int i = 0; i <= size3; ++i)
	{

		if (i < size1)
			C[i] = A[i];
		else
			C[i] = B[i - size1];
	}

	cout << "������ �: " << endl;
	//���������� ������� �
	for (int j = 1; j < size3; j++)
		for (int k = 0; k < size3 - 1; k++)
			if (C[k] > C[k + 1])
			{
				int temp = C[k];
				C[k] = C[k + 1];
				C[k + 1] = temp;
			}


	//������� �� ����� ��������������� ������
	for (int l = 0; l < size3; l++)
		cout << C[l] << " ";
	cout << endl;
	delete[] A;
	delete[] B;
	delete[] C;
	system("pause");
	return 0;
}