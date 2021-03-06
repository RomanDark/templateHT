// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#pragma region 1.	Напишите шаблон функции, которая вычисляет корень линейного уравнения.

template<typename type0>

type0 xy(type0 x, type0 y) {

	return x / y;

}

#pragma endregion

#pragma region 2.	Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.

int arrX(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return (double)sum / size;
}

#pragma endregion

#pragma region 3.	Написать шаблонную функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.

template<typename type1>

void arrZ(type1 a[], int size) {
	int z = 0, m = 0, p = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 0) z++; else if (a[i] < 0) m++; else p++;
	}
	cout << "Nylevyh = " << z << endl;
	cout << "otricatel'nyh = " << m << endl;
	cout << "polojitel'nyh = " << p << endl;

}


#pragma endregion

#pragma region 4.	Написать шаблонную функцию, определяющую минимум и максимум (значение и номер) элементов передаваемого ей массива.

template<typename type2>

void arr3(type2 a, int size) {
	int min = INT_MAX;
	int max = INT_MIN;
	int numbMin=0, numbMax=0;

	for (int i = 0; i < size; i++)
	{
		if (a[i] < min) {
			min = a[i];
			numbMin = i;
		}
		if (a[i] > max)	{
			max = a[i];
			numbMax = i;
		}
	}

	cout << "index_min = " << numbMin << "\tmin_zna4enie =	" << min << endl;
	cout << "index_max = " << numbMax << "\tmax_zna4enie = " << max << endl;


}

#pragma endregion

#pragma region 5.	Написать шаблонную функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.

template<typename type3>

void arr4(type3 a[], int size) {

	for (int i = 0; i < size / 2; i++)
	{
		swap(a[i], a[size - i - 1]);
	}

	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}

}

#pragma endregion

#pragma region 6.	Написать функцию, возвращающую количество простых чисел в передаваемом ей массиве.

bool prostoye(int x)
{
	for (int i = 2; i <= x / 2 + 1; i++)
		if (x%i == 0)return false;
	return true;
}


int prost(int arr[], int size)
{
	int res = 0;
	for (int i = 0; i < size; i++)
		if (prostoye(arr[i]))	res++;

	return res;
}

#pragma endregion



int main()
{
	//1.
	int x = 4, y = 2;
	cout << "1 = " << xy(x, y) << endl << endl;

	//2.
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	cout << "2 = " << arrX(arr, 9) << endl << endl;


	int arr2[] = { -1,2,-3,0,4,-6,0,2,3,0 };

	//3.
	cout << "3:\n";
	arrZ(arr2, 10);
	cout << endl;

	//4.
	cout << "4:\n";
	arr3(arr2, 10);
	cout << endl;

	//5.
	cout << "5:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl << endl;
	arr4(arr2, 10);
	cout << endl << endl;

	//6.
	int arr4[] = { 8,3,5,6,7,11,13,14,15,17 };

	cout << "6 = " << prost(arr4, 10) << endl;


	return 0;
}

