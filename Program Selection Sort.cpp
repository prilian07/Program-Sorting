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
cout<< "Selection sort";
 cout<<endl<< "================="<<endl<<endl;
 int t5,t6;
 int arr[5];
int mini,temp;

cout<<"Masukan 5 angka : "<<endl;

for(int i=0; i<5; i++) {
 cout<<"Masukkan data ke- "<<i+1<<" = ";cin>>arr[i];
}
t5=GetTickCount();
cout<<endl;
cout<<"Angka sebelum di urutkan = ";

for(int j=0; j<5; j++) {
 cout<<arr[j]<<"  ";
 
}

for(int r1=0;r1<4;r1++) {
 mini=r1;
 for(int r2=r1+1; r2<5; r2++)
   if(arr[r2]>arr[mini])
   mini=r2;
    if(mini !=r1) {
     temp=arr[r1];
     arr[r1]=arr[mini];
     arr[mini]=temp;
    }
}
cout<<endl;
cout<<endl;
cout<<"Data yg telah di urutkan dengan Selection Sort = ";
for(int q=0; q<5; q++) {
 cout<<arr[q]<< "  " ;
 
}
t6=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t6 - t5) << " ms";
 cout<<endl;
}
