#include<bits/stdc++.h>
using namespace std;
void nhap(int *a, int n)
{
    cout << "-----Nhap mang-----"<<endl;
    for (int i = 0; i < n; i++) 
	{
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuat(int *a, int n)
{
	cout << "-----mang vua nhap-----"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
void timax(int *a, int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=max)
			max=a[i];
	}
	cout<<"gia tri lon nhat trong mang la: "<<max<<"\n";
}
int main()
{
	int *a;
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    a=new int[n];
    nhap(a,n);
    xuat(a,n);
    timax(a,n);
}
