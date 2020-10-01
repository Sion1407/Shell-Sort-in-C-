#include <iostream>

using namespace std;

void insertion(float [], int );
void shell(float [], int );

int main()
{

int n,i,op;
float a[30];

do
{

cout<<"\n 1)Insertion Sort \n 2)Shell Sort \n 3)exit \n";
cout<<"\n Enter your choice";
cin>>op;


if(op==1)
{
	cout<<"\nInsertion sort";
	cout<<"\netotal number of students";
	cin>>n;

	cout<<"\nEnter percentage array elements: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<endl;

	insertion(a,n);

	cout<<"\n sorted percentage array is";

	 for (i = 0; i < n; i++)

        cout << "\t"<< a[i] ;


	cout<<"with top 5 percentage :";
	for(i=n-1;i>=n-5;i--)
	cout<<"\t"<<a[i];



}// if for Insertion sort


if(op==2)
{
	cout<<"\nShell sort";
	cout<<"\nenter total number of students";
	cin>>n;

	cout<<"\nEnter percentage array element: ";
	for(i=0;i<n;i++)
	cin>>a[i];

	shell(a,n);

	cout<<"\n sorted percentage array is";

	for ( i = 0; i < n; i++)
          cout<<"\t"<< a[i];

	cout<<"\nwith top 5 percentage :";
	for(i=n-1;i>=n-5;i--)
	  cout<<"\t"<<a[i];

} // if for shell sort

}while(op!=3);
return 0;
}



void insertion(float a[],int n)
{


	int i,j;
	float temp;

      for (i = 1; i < n; i++)
         {
             temp = a[i];
	for(j=i-1;j>=0&&a[j]>temp;j--)
            a[j+1] = a[j];
            a[j + 1] = temp;
          }
}

void shell(float a[],int n)
{


	int i,j,step;
	float temp;

	for(step=n/2;step>0;step=step/2)

	 for ( i = step; i < n; i++)
      		{

			temp=a[i];
			for(j=i;j>=step;j=j-step)
			if(temp<a[j-step])
			a[j]=a[j-step];
			else
			break;
			a[j]=temp;

		}



}
