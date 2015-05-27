#include <iostream>
#include <locale.h>
using namespace std;
void obh (int node, int n, int *aa) // функция получает в качестве аргумента номер узла
{
	int *c=new int[n];
   int *b=new int[n];
   for (int i=0; i<n; i++)
	   b[i]=0;
   for (int i=0; i<n; i++)
	   if (aa[i]==node+1)
		   b[i]=aa[i];
	for (int i=0; i<n; i++) 
	   if (b[i]!=0) obh(i,n,aa);
	int k=0;
	for (int i=0; i<n; i++)
		if (aa[i]==node+1) k++;
		if (k==0)
	cout<<node+1<<" ";
	if ((aa[node-1]!=aa[node])&(aa[node]!=0))
	cout<<aa[node]<<" ";
	return;
}
int main(void)
{
	setlocale(0, "Russian");
	int n;
	cout<<"введите кол-во узлов:";
	cin>>n;
	int *c=new int[2*n];
	cout<<"\n";
	int *a=new int[n];
	cout<<"введите эл-ты:: ";
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"\n прямой обход \n";
	obh(0,n,a);
	system("pause");
}
