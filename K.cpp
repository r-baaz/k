#include<iostream.h>
#include<conio.h>
int size,val;
void sort(int size);
void reverse(int size);
void search(int val,int size);
int arr[20];	
int main()
{
   int i,ch;
   cout<<"Enter the size of array : ";
   cin>>size;
   cout<<"Enter array elements: ";
   for(i=0;i<size;i++)
   {
 
   	cin>>arr[i];
   }
   do
   {
   	cout<<"\n****Main Menu****\n";
   	cout<<"1.Sorting\n";
   	cout<<"2.Reverse\n";
           cout<<"3.search\n";
            cout<<"Enter your Choice : ";
            cin>>ch;
   	switch(ch)
   	{
   	    case 1:sort(size);
   		break;
   		case 2:reverse(size);
   		break;
   		case 3:cout<<"Enter value to be search : ";
   		cin>>val;
   		search(val,size);
		   break;
	   }
   }
   while(ch!=3);
getch ();
return 0;
}
void search(int val,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	 if(arr[i]==val)
	 {
	 	cout<<"Value is found at"<<i<<"position.";
	 	break;
               }
	}
	if(i==size)
	{
		cout<<"Value is not found.";
	}
}
void sort(int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Array : \n";
	for(i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
}
void reverse(int size)
{
	int i,j,temp;
	j=size-1;
	i=0;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Reverse order : \n";
		for(i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
}
