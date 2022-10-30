#include<bits/stdc++.h>
using namespace std;
void nhapmang(int **a,int x,int y)
{
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
			
}
void xuatmang(int **a,int x,int y)
{	
	int k=0;
	for(int i=0;i<y;i++)
		for(int j=0;j<x;j++)
		{
			k+=1;
			cout<<a[i][j]<<"\t";
			if(k%y==0)
			{
				cout<<"\n";
				k=0;
			}
		}		
}
int main()
{
	int x,y;
	int **a; int **b;
	cout<<"Nhap ma tran A: "<<endl;
	cout<<"nhap so hang ma tran: ";cin>>x;
	cout<<"nhap so cot ma tran: ";cin>>y;
	a=new int*[x];
	for(int i=0;i<x;i++)
	{
		a[i]=new int[y];
	}
	nhapmang(a,x,y);
	cout<<"Nhap ma tran B: "<<endl;
	cout<<"nhap so hang ma tran: ";cin>>x;
	cout<<"nhap so cot ma tran: ";cin>>y;
	b=new int*[x];
	for(int i=0;i<x;i++)
	{
		b[i]=new int[y];
	}
	nhapmang(b,x,y);
	cout<<"Ma tran A: "<<endl;
	xuatmang(a,x,y);
	cout<<"Ma tran B: "<<endl;
	xuatmang(b,x,y);
}
