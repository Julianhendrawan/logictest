// C++ program to count maximum consecutive
// 1's in a binary array.
#include<bits/stdc++.h>
using namespace std;

// Function count of maximum consecutive 1's
// in binary array arr[0..n-1]
int panjMaxArr(bool arr[], int n)
{
	int hitung = 0; //init var hitung
	int hasil = 0; //init var max

	for (int i = 0; i < n; i++)
	{
		// Jika bertemu angka 0, reset var hitung
		if (arr[i] == 0)
			hitung = 0;

		// Jika bertemu angka 1, var hitung++
		// dan simpan di var hasil
		else
		{
			hitung++;
			hasil = max(hasil, hitung);
		}
	}

	return hasil;
}

// main code
int main()
{
	bool arr[] = {1, 1, 0, 1, 1, 1}; //insert input
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << panjMaxArr(arr, n) << endl; //Function count
	return 0;
}

