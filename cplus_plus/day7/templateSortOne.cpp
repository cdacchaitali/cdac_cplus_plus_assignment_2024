
// Sorting using Template

#include <iostream>
using namespace std;

template <typename T>
class ISort
{
public:
	virtual void SortArr(T *coll, int size) = 0;
};

template <typename T, int size>
class ArrayContainer
{
	T *ar;
	ISort<T> *srt;

public:
	ArrayContainer(T *ar) : ar(ar), srt(NULL) {}
	void SetSort(ISort<T> *srt)
	{
		this->srt = srt;
	}
	void Sort()
	{
		if (srt != NULL)
		{
			this->srt->SortArr(ar, size);
		}
	}

	void Display()
	{
		cout << "-----------------------------------------------------------\n";
		for (size_t i = 0; i < size; i++)
		{
			cout << ar[i] << " ";
		}
		cout << "\n-----------------------------------------------------------\n";
	}
};

template <typename T>
class LinearSort : public ISort<T>
{
public:
	void SortArr(T *coll, int size)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			for (size_t j = i + 1; j < size; j++)
			{
				if (coll[i] >= coll[j])
					swap(coll[i], coll[j]);
			}
		}
	}
};

template <typename T>
class BubbleSort : public ISort<T>
{
	void SortArr(T *coll, int size)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			for (size_t j = size - 1; j >= i + 1; j--)
			{
				if (coll[j] <= coll[j - 1])
					swap(coll[j], coll[j - 1]);
			}
		}
	}
};

template <typename T>
class InsertionSort : public ISort<T>
{
	void SortArr(T *coll, int size)
	{
		for (size_t i = 1; i < size; i++)
		{
			int key = coll[i];
			size_t j = i - 1;
			while (j >= 0 && coll[j] > key)
			{
				coll[j + 1] = coll[j];
				j = j - 1;
			}
			coll[j + 1] = key;
		}
	}
};

template <typename T>
class SelectionSort : public ISort<T>
{
	void SortArr(T *coll, int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			int imin = i;
			for (size_t j = i + 1; j < size; j++)
			{
				if (coll[j] < coll[imin])
					imin = j;
			}
			swap(coll[i], coll[imin]);
		}
	}
};

int main()
{
	int arr[5] = {5, 2, 1, 3, 4};
	ArrayContainer<int, 5> cnt(arr);
	SelectionSort<int> selSrt;
	cnt.SetSort(&selSrt);
	cnt.Display();
	cnt.Sort();

	cnt.Display();
	return 0;
}
