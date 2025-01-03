//Write a c++ program to accept two numbers and print the sum of given two numbers by using pointers

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int c = *(&a) + *(&b);
    cout<<c;
    return 0;
}
