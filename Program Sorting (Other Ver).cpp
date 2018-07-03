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
 
 int pil;
 
	cout << "======= Program Sorting =========="<<endl<<endl;
	cout << "1. Bubble sort" <<endl;
	cout << "2. Insertion sort" <<endl;
	cout << "3. Selection sort" <<endl;
	cout << "4. Exchange Sort "<<endl;
	cout << "5. Shell Sort "<<endl<<endl;
	cout << "==============================="<<endl<<endl;

	cout << "Masukan pilihan anda = "; cin >> pil;

	switch(pil) {
		////////////////////////////////////
		
		////  Bubble start /////////////
		
		////////////////////////
		
		case 1:
		system("cls");
		cout << endl;
		cout << "Bubble sort"<<endl;
		cout << "=============="<<endl;
		 
		int t1,t2;
    	int hold;
 		int array[5];

 		cout<<"Masukan 5 angka :"<<endl;
		for(int i=0; i<5; i++) 
		{
  			cout << "  angka ke " <<i+1 <<" = ";cin>>array[i];
 		}
			cout<<endl;
			cout<<endl;
			t1=GetTickCount();
			cout<<"Sebelum di sortir = ";

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
 		cout<<"Setelah di sortir = ";

		for(int i=0; i<5; i++) 
		{
  			cout<<array[i]<<"  ";
 		}
	    cout<<endl;
 		t2=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t2 - t1) << " ms";
 		cout<<endl;
 break;


//////////////////////////////////////////////////////////

///////     Insertion start               /////////

////////////////////////////////////////////////


 
 case 2:
 system("cls");
 cout << "Insertion sort";
 cout <<endl<<"============="<<endl;
 cout<<endl;
 int t3,t4;
 
 int Key;
 int array1[5];

 cout<<"Masukan 5 angka : "<<endl;

for(int i=0; i<5; i++)  {
 cout << "  angka ke " <<i+1 <<" = ";cin>>array1[i];
}

cout<<endl;
t3=GetTickCount();
cout<<"Angka sebelum di sortir = ";

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
cout<<endl<<"Angka setelah disortir = ";

for(int i=0; i<5; i++) {
 cout<<array1[i]<<"  ";
 
}
t4=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t4 - t3) << " ms";
 cout<<endl;

 break;
 
 
 
////////////////////////////////////////////////////////

//////////////   Selection start /////////////////////

///////////////////////////////////// 
 
 
 case 3:
 system("cls");
 cout << "Selection sort";
 cout <<endl<< "================="<<endl<<endl;
 int t5,t6;
 int arr[5];
int mini,temp;

cout<<"masukan 5 angka ="<<endl;

for(int i=0; i<5; i++) {
 cout << "  angka ke " <<i+1 <<" = ";cin>>arr[i];
}
t5=GetTickCount();
cout<<endl;
cout<<"Angka sebelum di sortir = ";

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
cout<<"Setelah di sortir = ";
for(int q=0; q<5; q++) {
 cout<<arr[q]<< "  " ;
 
}
t6=GetTickCount();
cout << endl<<endl <<"Lama proses = " << (int)(t6 - t5) << " ms";
 cout<<endl;
 break;
 
 ////////////////////////////////////////////////////////

//////////////   Exchange start /////////////////////

///////////////////////////////////// 
 
 case 4:
 	system("cls");
	int t7,t8;
      	
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
	
	t8=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t8 - t7) << " ms";
 		cout<<endl;
break;

////////////////////////////////////////////////////////

//////////////  Shell start /////////////////////

///////////////////////////////////// 

case 5:
	system("cls");
	//Deklarasi variabel
   int val[5];
   int i, n, t,t9,t10;

   //Input

   for(i = 0; i < 5; i++)
   {
       cout<<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
   }
	cout<<endl;
	t9=GetTickCount();
   //Shell Sort
    for(int w = 5/2; w > 0;w=w/2)
    {
       for(int x = w; x < 5; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(val[y+w] < val[y]) //Rumus Shell Sort
            {
                t=val[y+w];
               val[y+w]=val[y];
               val[y]=t;
            }
         }
          for(i = 0; i < 5; i++)
   			{
       			cout<<val[i]<<" ";
   			}
   			cout<<endl;
      }
   }

   //Mencetak data setelah diurutkan
   cout<<" DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
   for(i = 0; i < 5; i++)
   {
       cout<<val[i]<<" ";
   }
   
   t10=GetTickCount();
 		cout << endl <<"Lama proses = " << (int)(t10 - t9) << " ms";
 		cout<<endl;
 		break;
//////////////////////////////////////////

//////           PILIHAN TIDAK ADA   /////////

////////////////////////////////////////// 
 default:
 system("cls");
 cout << "Pilihan tidak ada";
 break;
}
 getch();   
}
