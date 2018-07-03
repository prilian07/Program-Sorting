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
	cout<< "Bubble sort"<<endl;
		cout<< "=============="<<endl;
		 
		int t1,t2;
    	int hold;
 		int array[5];

 		cout<<"Masukan 5 angka :"<<endl;
		for(int i=0; i<5; i++) 
		{
  			cout << "Masukkan data ke- " <<i+1 <<" = ";cin>>array[i];
 		}
			cout<<endl;
			cout<<endl;
			t1=GetTickCount();
			cout<<"Sebelum di urutkan = ";

			for(int j=0; j<5; j++) 
			{
				cout<<array[j];
				cout<<"  ";
			}
 
		 	cout<<endl;
 
 			cout <<endl<< "Urutan program"<<endl;
 			for(int i=0; i<4; i++) 
			{
  				for(int j=0; j<4; j++) 
				{
   					if(array[j]<array[j+1])
					{
    					hold=array[j];
					    array[j]=array[j+1];
					    array[j+1]=hold;
    
    					for(int i=0; i<5; i++) 
						{
						  cout<<array[i]<<"  ";
  						}
						  cout<<endl;
   					}
  				}
  			}
	cout<<endl;
 		cout<<"Data yg telah di urutkan dengan Bubble Sort = ";

		for(int i=0; i<5; i++) 
		{
  			cout<<array[i]<<"  ";
 		}
	    cout<<endl;
 		t2=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t2 - t1) << " ms";
 		cout<<endl;
}
