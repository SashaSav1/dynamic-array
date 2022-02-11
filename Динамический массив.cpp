//Пользователь вводит размерность и элементы динамического массива из целых чисел.
//Определить минимальный четный элемент массива и вывести его на экран, если в массиве нет четных элементов,
//то вывести соответствующее сообщение.
//Создать новый динамический массив, i - й элемент которого является суммой первых i элементов исходного массива,
//и вывести новый массив на экран.
//Отсортировать оба массива сортировкой обменом по возрастанию.Все алгоритмы оформить в виде подпрограмм с параметрами.

#include <iostream>

using namespace std;

int Chet(int arr[], int razm)
{
	int Chet = 0;

	for (int i = 0; i < razm; i++)
	{
		if ((arr[i] % 2) == 0)
		{
			Chet = arr[i];
			break;
		}
	}

	if (Chet > 0)
	{
		for (int i = 0; i < razm; i++)
		{
			if (((arr[i] % 2) == 0) && (arr[i] < Chet))
			{
				Chet = arr[i];
			}
		}
		return Chet;
	}
	else
	{
		return false;
	}
}

void func(int arr[], int razm)
{
	int* arr1 = new int[razm];
	int j = 0;
	int a = 0;

	for (int i = 0; i < razm; i++)
	{
			a += arr[i];
			arr1[j] = a;
			j++;
			
	}

	for (int i = 0; i < j; i++)
	{
		cout << arr1[i] << " ";
		
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	int razm;

	cout << "Введите размерность массива: ";
	cin >> razm;
	cout << endl;

	int* arr = new int[razm];

	cout << "Введите элементы массива: " << endl;

	for (int i = 0; i < razm; i++)
	{
		cin >> arr[i];
	}

	cout << "Минимальный четный элемент массива: " << Chet(arr, razm) << endl;

	cout << "Изменненый массив: " << endl;

	for (int i = 0; i < 1; i++)
	{
		func(arr, razm);
	}
}

