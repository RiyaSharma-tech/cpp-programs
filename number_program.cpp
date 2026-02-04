#include<iostream>
using namespace std;
void palindrome()
{
    int n,temp,rev=0;
    cout<<"Enter the number to be checked: ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rev=(rev*10)+(temp%10);
        temp=temp/10;
    }
    if(rev==n)
    {
        cout<<n<<" is a palindrome number";
        cout<<"\nAs reverese of "<<n<<" is "<<rev;
    }
    else
    {
        cout<<n<<" is not a palindrome number";
        cout<<"\nAs reverese of "<<n<<" is "<<rev;
    }
}

void isPrime()
{
    int n,flag=0,i;
    cout<<"Enter the number to be checked: ";
    cin>>n;
    if(n==2)
    {
        cout<<n<<" is a prime number";
        flag++;
        return;    
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is a not prime number";
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n<<" is a prime number";
    }
}
void facto()
{
    int n,fact=1,a;
    cout<<"Enter the number: ";
    cin>>n;
    a=n;
    while(a>0)
    {
        fact=fact*a;
        a--;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
}
void fibo()
{
    int n,c,a=0,b=1,i=2;
    cout<<"Enter the number of terms you want: ";
    cin>>n;
    cout<<"Fibonacci series till "<<n<<" tems is\n";
    cout<<a<<"\t"<<b;
    while(i<n)
    {
        c=a+b;
        cout<<"\t"<<c;
        a=b;
        b=c;
        i++;
    }
    
}
void armstrong()
{
    int n,temp,sum=0,digits=0,digit;
    cout<<"Enter the number you want to check: ";
    cin>>n;
    temp=n;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        int power=1;
        for(int i=0;i<digits;i++)
        {
            power*=digit;
        }
        sum+=power;
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<n<<" is an armstrong number";
    }
    else
    {
        cout<<n<<" is not an armstrong number";
    }
}
int main()
{
    cout<<"WELCOME TO WORLD OF NUMBER!!!\n";
    char ch='y';
    int choice;
    while(ch=='Y'||ch=='y')
    {
    	cout<<"************MENU************\n";
    	cout<<"1. PALINDROME\t2.PRIME OR NOT\t3.FIBONACCI\t4/.FACTORIAL\t5.ARMSTRONG\t6.EXIT";
    	cout<<"\nEnter you choice: ";
    	cin>>choice;
    	switch (choice)
    	{
    	case 1:
        	palindrome();
        	break;
    	case 2:
        	isPrime();
        	break;  
    	case 3:
        	fibo();
        	break;
    	case 4:
        	facto();
        	break;
    	case 5:
            armstrong();
        	break;
    	case 6:
            ch='n';
            continue;
    	default:
        	cout<<"Enter a valid choice(1-8)";
    	}
    	cout<<"\nDO YOU WANT TO CONTINUE\nPRESS Y FOR YES OR N FOR NO\nEnter your choice: ";
    	cin>>ch;
        if(ch=='n')
        {
            cout<<"Thank you!!";
        }
	}
    return 0;
}
