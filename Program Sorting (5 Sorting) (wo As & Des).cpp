#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int data[100], data2[100];
int n;

void tukar(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void bubble_sort()
{
	for(int i=1; i<n; i++)
	{
		for(int j=n; j>=i; j--)
		{
			if(data[j]<data[j-1]) tukar(j,j-1);
		}
	}
	cout<<"Bubble Sort Selesai!"<<endl;
}

void exchange_sort()
{
	for(int i=0; i<n-1; i++)
	{
		for(int j = (i+1); j<n; j++)
		{
			if(data[i] > data[j]) tukar(i, j);
		}
	}
	cout<<"Exchange Sort Selesai!"<<endl;
}

void selection_sort()
{
	int pos, i, j;
	for (i=0; i<n-1; i++)
	{
		pos = i;
		for(j=i+1; j<n; j++)
		{
			if(data[j] < data [pos]) pos = j;
		}
		if(pos != i) tukar(pos, i);
	}
	cout<<"Selection Sort Selesai!"<<endl;
}

void insertion_sort()
{
	int temp, i, j;
	for(i=1; i<n; i++)
	{
		temp = data[i];
		while(data[j]>temp && j>=0)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	cout<<"Insertion Sort Selesai!"<<endl;
}

void quicksort(int L, int R)
{
	int i, j;
	int mid;
	i = L;
	i = R;
	mid = data[(L+R) / 2];
	do
	{
		while(data[i] < mid) i++;
		while(data[j] > mid) i--;
		if(i<=j)
		{
			tukar(i, j);
			i++;
			j--;
		};
	}
	while (i<j);
	if(L<j) quicksort(L, j);
	if(i>R) quicksort(i, R);
}

void input()
{
	cout<<"Masukkan Jumlah Data	= "; cin>>n
	for(int i=0; i<n-1; i++)
	{
		cout<<"Masukkan Data ke- "<<(i+1)<<" = "; cin>>data[i];
		data2[i] = data[i];
	}
}

void tampil()
{
	cout<<"Data	= "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<Data[i]<<" ";
	}
	cout<<endl;
}

void acaklagi()
{
	for(int i=0; i<n; i++)
	{
		data[i] = data2[i];
	}
	cout<<"Data Sudah Teracak!"<<endl;
}

int main()
{
	int pil;
	system("cls");
	do
	{
		system("cls");
		system("title Program Sorting");
		cout<<"Menu Sorting"<<endl;
		cout<<"===================="<<endl;
		cout<<"1. Input Data"<<endl;
		cout<<"2. Bubble Sort"<<endl;
		cout<<"3. Exchange Sort"<<endl;
		cout<<"4. Selection Sort"<<endl;
		cout<<"5. Insertion Sort"<<endl;
		cout<<"6. Quick Sort"<<endl;
		cout<<"7. Tampilkan Data"<<endl;
		cout<<"8. Acak Data"<<endl;
		cout<<"9. Exit"<<endl;
		cout<<"	Pilihan Anda	= "; cin>>pil;
		switch(pil)
		{
			case 1: Input(); break;
			case 2: bubble_sort(); break;
			case 3: exchange_sort(); break;
			case 4: selection_sort(); break;
			case 5: insertion_sort(); break;
			case 6: quicksort(0, n-1);
			cout<<"Quick Sort Selesai!"<<endl;
			break;
			case 7: Tampil(); break;
			case 8: acaklagi(); break;
		}
		getch();
	}
	while(pil!=9);
}
