#include<time.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

int data[5];

void tukar(int a,int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
	
}

using namespace std;
int main() {
cout<<"Exchange sort";
 cout<<endl<< "================="<<endl<<endl;
 	int t7,t8;

cout<<"Masukan 5 angka : "<<endl;

	  for(int i=0;i<5;i++)
	{
	cout<<"Masukkan data ke-"<<(i+1)<<" = ";cin>>data[i];
	}
	
	cout<<endl;
 	t7=GetTickCount();
	cout<<endl;		
	for(int i=0;i<5;i++)
	{
	cout<<data[i]<<" ";
	}
	cout<<endl;
	
	for (int i=0; i<5-1; i++)
	{
		for(int j = (i+1); j<5; j++)
		{	
			if (data [i] > data[j]) tukar(i,j);
		}
		for(int i=0;i<5;i++)
		{
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
 
 	cout<<"Data yg telah di urutkan dengan Exchange Sort	: \n";
   	for(int i=0;i<5;i++)
   {
       cout<<data[i]<<" ";
   }
	
	t8=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t8 - t7) << " ms";
 		cout<<endl;
}
