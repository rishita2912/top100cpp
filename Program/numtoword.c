//Write a c++ program to accept any single digit number and print it in words.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any single digit number:";
    cin>>n;
    switch(n)
    {
        case 0: cout<<"ZERO";
        break;
        case 1: cout<<"ONE";
        break;
        case 2: cout<<"TWO";
        break;
        case 3: cout<<"THREE";
        break;
        case 4: cout<<"FOUR";
        break;
        case 5: cout<<"FIVE";
        break;
        case 6: cout<<"SIX";
        break;
        case 7: cout<<"SEVEN";
        break;
        case 8: cout<<"EIGHT";
        break;
        case 9: cout<<"NINE";
        break;
        default:
        cout<<"Please enter the numbers between 0 and 9";
    }
    return 0;
}
