#include<time.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

int data[50],banyak,atas;
int pilihan;
using namespace std;
bubble()
{	
//Bubble Sort	
  cout << "Bubble sort"<<endl;
		cout << "=============="<<endl;
		cout <<" 1. Ascending "<<endl;//Ascending = Mengurutkan angka dari yg terkecil hingga ke yg terbesar
		cout <<" 2. Descending "<<endl;//Descending = Mengurutkan angka dari yg terbesar hingga ke yg terkecil
		cout <<" Pilih = ";
		cin>>pilihan;
		
					
}

void tukar(int a,int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
	
}
//Exchange Sort
exchange()
{
	cout << "Exchange sort"<<endl;
		cout << "=============="<<endl;
		cout <<" 1. Ascending "<<endl;
		cout <<" 2. Descending "<<endl;
		cout <<" Pilih = ";
		cin>>pilihan;
		if(pilihan==1)
		{
			system("cls");
	int t7,t8;

 	t7=GetTickCount();
	cout<<"Sebelum di sortir = ";

			for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
 
		 	cout<<endl;
//	proses sort
	for (int i=0; i<banyak-1; i++)
	{
		for(int j = (i+1); j<banyak; j++)
		{	
			if (data [i] > data[j]) tukar(i,j);
		}
		for(int i=0;i<banyak;i++)
		{
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
//	
			cout<<endl;
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<banyak; i++) 
		{
  			cout<<data[i]<<"  ";
 		}
	    cout<<endl;

	
	t8=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t8 - t7) << " ms";
 		cout<<endl;
		}
		else if(pilihan==2)
		{
		system("cls");
	int t7,t8;

 	t7=GetTickCount();
	cout<<"Sebelum di sortir = ";

			for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
 
		 	cout<<endl;
//	proses sort
	for (int i=0; i<banyak-1; i++)
	{
		for(int j = (i+1); j<banyak; j++)
		{	
			if (data [i] < data[j]) tukar(i,j);
		}
		for(int i=0;i<banyak;i++)
		{
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
//	
			cout<<endl;
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<banyak; i++) 
		{
  			cout<<data[i]<<"  ";
 		}
	    cout<<endl;

	
	t8=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t8 - t7) << " ms";
 		cout<<endl;
		}
		else
		cout<<"Data Kosong";
}
//Selection Sort
selection()
{
	
	system("cls");
 cout << "Selection sort";
cout << "=============="<<endl;
		cout <<" 1. Ascending "<<endl;
		cout <<" 2. Descending "<<endl;
		cout <<" Pilih = ";
		cin>>pilihan;
		
		if(pilihan==1)
		{
			int t5,t6;
int mini,temp;


t5=GetTickCount();
	cout<<"Sebelum di sortir = ";

			for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
 
		 	cout<<endl;
//proses sort
for(int r1=0;r1<banyak-1;r1++) {
 mini=r1;
 for(int r2=r1+1; r2<banyak; r2++)
   if(data[r2]<data[mini])
   mini=r2;
    if(mini !=r1) {
     temp=data[r1];
     data[r1]=data[mini];
     data[mini]=temp;
    }
    for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
			cout<<endl;
}
//	
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<banyak; i++) 
		{
  			cout<<data[i]<<"  ";
 		}
	    cout<<endl;
cout<<endl;
cout<<endl;

t6=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t6 - t5) << " ms";
 cout<<endl;


		}
		else if(pilihan==2)
		{
			int t5,t6;
int mini,temp;


t5=GetTickCount();
	cout<<"Sebelum di sortir = ";

			for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
 
		 	cout<<endl;
//proses sort
for(int r1=0;r1<banyak-1;r1++) {
 mini=r1;
 for(int r2=r1+1; r2<banyak; r2++)
   if(data[r2]>data[mini])
   mini=r2;
    if(mini !=r1) {
     temp=data[r1];
     data[r1]=data[mini];
     data[mini]=temp;
    }
    for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
			cout<<endl;
}
//	
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<banyak; i++) 
		{
  			cout<<data[i]<<"  ";
 		}
	    cout<<endl;
cout<<endl;
cout<<endl;

t6=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t6 - t5) << " ms";
 cout<<endl;


		}
		else
		cout<<"Data Kosong";
 }
//Insertion Sort
insertion()
{
	system("cls");
 cout << "Insertion sort";
 cout <<endl<<"============="<<endl;
 		cout <<" 1. Ascending "<<endl;
		cout <<" 2. Descending "<<endl;
		cout <<" Pilih = ";
		cin>>pilihan;
		if(pilihan==1)
		{
				system("cls");
			cout<<endl;
 int t3,t4,Key;
 
cout<<endl;
t3=GetTickCount();
	cout<<"Sebelum di sortir = ";

			for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
 
		 	cout<<endl;
//proses sort
cout<<endl<< "Data proses "<<endl;
for(int j=1 ; j < banyak ; j++) {
 Key = data[j];              
 int i = j-1;                  
 while(i >= 0 && data[i] > Key) {
  data[i + 1] = data[i];
  i = i - 1;
 }
 data[i + 1] = Key;
 
 for(int l=0; l<banyak; l++) {
  cout<<data[l]<<"  ";
  
 }
 cout<<endl;
}
//	end
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<banyak; i++) 
		{
  			cout<<data[i]<<"  ";
 		}
	    cout<<endl;
cout<<endl;
cout<<endl;
t4=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t4 - t3) << " ms";
 cout<<endl;
		}
		else if(pilihan==2)
		{
				system("cls");
			cout<<endl;
 int t3,t4,Key;
 
cout<<endl;
t3=GetTickCount();
	cout<<"Sebelum di sortir = ";

			for(int i=0; i<banyak; i++) 
			{
				cout<<data[i];
				cout<<"  ";
			}
 
		 	cout<<endl;
//proses sort
cout<<endl<< "Data proses "<<endl;
for(int j=1 ; j < banyak ; j++) {
 Key = data[j];              
 int i = j-1;                  
 while(i >= 0 && data[i] < Key) {
  data[i + 1] = data[i];
  i = i - 1;
 }
 data[i + 1] = Key;
 
 for(int l=0; l<banyak; l++) {
  cout<<data[l]<<"  ";
  
 }
 cout<<endl;
}
//	end
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<banyak; i++) 
		{
  			cout<<data[i]<<"  ";
 		}
	    cout<<endl;
cout<<endl;
cout<<endl;
t4=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t4 - t3) << " ms";
 cout<<endl;
		}
		else
		cout<<"Data kosong";

}
main()
{
	int pil;
	int atas;
	
	do
	{
		system("cls");
		cout<<" Program Pengurutan Kode Pos"<<endl;
		cout<<" ============================="<<endl;
		cout<<" 1. Masukan Data "<<endl;
		cout<<" 2. Bubble Sort "<<endl;
		cout<<" 3. Exchange Sort "<<endl;
		cout<<" 4. Selection Sort "<<endl;
		cout<<" 5. Insertion Sort "<<endl;
		cout<<" 6. Keluar "<<endl;
		cout<<" Masukan Pilihan Anda : "<<endl;
	
		cin>>pil;
		
		switch(pil)
		{
			case 1:
				system("cls");
				cout<<" Masukan Banyak Data = ";
				cin>>banyak;
				
				for(int i=0; i<banyak; i++)
				{
					cout<<" Masukan Data " <<i+1 << " = ";
				cin>>data[i];
				}
				break;
			
			case 2:
				system("cls");
				bubble();
				break;
			case 3:				
				system("cls");
				exchange();
				break;
			case 4:
				system("cls");
				selection();				
				break;
			case 5:
				system("cls");
				insertion();
				break;
			case 6:
				system("cls");
				cout<<" 			Terima Kasih Tekan Enter Untuk Keluar "<<endl;
				exit(0);
		}
		getch();
	}while(pil!=6);
}
