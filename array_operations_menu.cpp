#include<iostream>
using namespace std;
int n;
void display(int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void insert_arr(int arr[])
{
    int ele,pos,i;
    cout<<"Enter the element to be inserted: ";
    cin>>ele;
    cout<<"Enter the position: ";
    cin>>pos;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    n++;
}
void delete_arr(int arr[])
{
    int ele,i=0,j;
    cout<<"Enter the element to be deleted: ";
    cin>>ele;
    while(i<n && arr[i]!=ele)
    {
        i=i+1;
    }
    for(j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    if(i==n)
    {
        cout<<"Element not found!!";
    }
}
void sort(int arr[])
{
    int temp,i,j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void search(int arr[])
{
    int i,key,flag=0;
    cout<<"Enter the element to search: ";
    cin>>key;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout<<"Element found!!!\nFound at index: "<<i;
            flag=flag+1;
        }
    }
    if(flag==0)
    {
        cout<<"ELEMENT NOT FOUND";
    }
}
void min_max(int arr[])
{
    int minv = arr[0], maxv = arr[0],i;

    for(i=1;i<n;i++)
    {
        if(arr[i] < minv) minv = arr[i];
        if(arr[i] > maxv) maxv = arr[i];
    }
    cout<<"Smallest element is: "<<minv;
    cout<<"\nLargest element is: "<<maxv;
}
void reverse(int arr[])
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    cout<<"Enter the number of elements you want in your array: ";
    cin>>n;
    int arr[n],i,choice;
    char ch='y';
    cout<<"Enter the elements in your array: \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(ch=='Y'||ch=='y')
    {
    	cout<<"************MENU************\n";
    	cout<<"1. INSERT\t2.DELETE\t3.DISPLAY\t4/.SEARCH\t5.SORT\t6.MINIMUM AND MAXIMUM\t7.REVERSE\t8.EXIT";
    	cout<<"\nEnter you choice: ";
    	cin>>choice;
    	switch (choice)
    	{
    	case 1:
        	insert_arr(arr);
        	break;
    	case 2:
        	delete_arr(arr);
        	break;  
    	case 3:
        	display(arr);
        	break;
    	case 4:
        	search(arr);
        	break;
    	case 5:
        	sort(arr);
            cout<<"Sorted array is:  \n";
            display(arr);
        	break;
    	case 6:
        	min_max(arr);
        	break;
    	case 7:
        	reverse(arr);
            cout<<"Reveresed array is \n";
            display(arr);
        	break;
    	case 8:
        	ch='n';
            cout<<"Thank you!!!";
            break;
    	default:
        	cout<<"Enter a valid choice(1-8)";
    	}
    	cout<<"\nDO YOU WANT TO CONTINUE\nPRESS Y FOR YES OR N FOR NO\nEnter your choice: ";
    	cin>>ws>>ch;
	}
    return 0;
}



