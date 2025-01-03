//Write a c++ program to reverse a number.
#include<iostream>
using namespace std;
int main()
{
    long n, d, rev = 0;
    cout<<"Enter a number for which u want to find the reverse:";
    cin>>n;
    while(n!=0)
    {
        d = n%10;
        rev = (rev*10)+d;
        n = n/10;
    }
    cout<<"Print the reverse of the number:"<<rev;
    return 0;
    
}
