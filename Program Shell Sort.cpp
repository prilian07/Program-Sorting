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
cout<<"Shell sort";
 cout<<endl<< "================="<<endl<<endl;
   int val[5];
   int i, n, t,t9,t10;

cout<<"Masukan 5 angka : "<<endl;

   for(i = 0; i < 5; i++)
   {
       cout<<"Masukkan data ke-"<<1+i<<"  : ";cin>>val[i];
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
             if(val[y+w] < val[y])
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

   cout<<"\nData yg telah di urutkan dengan Shell Sort	: \n";
   for(i = 0; i < 5; i++)
   {
       cout<<val[i]<<" ";
   }
   
   t10=GetTickCount();
 		cout<<endl<<"Lama proses = "<<(int)(t10 - t9)<<"ms";
 		cout<<endl;
}
