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
cout<< "Insertion sort";
 cout<<endl<<"============="<<endl;
 cout<<endl;
 int t3,t4;
 
 int Key;
 int array1[5];

 cout<<"Masukan 5 angka : "<<endl;

for(int i=0; i<5; i++)  {
 cout<<"Masukkan data ke- "<<i+1<<" = ";cin>>array1[i];
}

cout<<endl;
t3=GetTickCount();
cout<<"Angka sebelum di urutkan = ";

for(int j=0; j<5; j++) {
 cout<<array1[j]<<"  ";
 
}

cout<<endl;
cout<<endl<< "Data proses "<<endl;
for(int j=1 ; j<5 ; j++) {
 Key = array1[j];              
 int i = j-1;                  
 while(i >= 0 && array1[i] < Key) {
  array1[i + 1] = array1[i];
  i = i - 1;
 }
 array1[i + 1] = Key;
 
 for(int l=0; l<5; l++) {
  cout<<array1[l]<<"  ";
  
 }
 cout<<endl;
}
cout<<endl<<"Data yg telah di urutkan dengan Insertion Sort = ";

for(int i=0; i<5; i++) {
 cout<<array1[i]<<"  ";
 
}
t4=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t4 - t3) << " ms";
 cout<<endl;
}
