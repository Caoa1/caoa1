#include <iostream>

using namespace std;

int main()
{
	int searchNum, input, size;
	int *array;
	cout << "Please enter the desired size of array: " << \n;
	cin >> size;

	if (size <= 0)
	{
		cout << "You must enter a value greater than 0. Please try again." << \n;
		cin >> size;
	}

	array = new int[size];
	cout << "Please begin entering your array values: " << \n;

	for (int i = 0; i < size; i++)
	{
		cin >> input;
		array[i] = input;
	}
	sort(array, size);
	cout << "Please enter a number to search for: " << \n;
	cin >> searchNum;

	if (result >= 0)
	{
		cout << "The number " << [result] << "was found at the" "element with index" << result \n;
	}
	else
	{
		cout << "The number" << userValue << "was not found" << \n;
	}

	search(arr, size, searchNum);
	delete[] arr;
	system("pause");

	return 0;
}

int binarySearch(int array[], int size, int searchValue)
{
	int low = 0;
	int high = size - 1;

	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (search Value == array[mid])
		{
		return mid;
		}
		else if (searchValue > array)
		{
		low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return 0;
}
