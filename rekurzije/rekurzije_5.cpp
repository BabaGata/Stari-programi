#include<iostream>

using namespace std;

int fib(int n)
{
    if(n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2); //rekurzivni poziv funkcije
}

int main()
{
    int x;
    cout<<"Unesi broj x: ";
    cin>>x;

    cout<<fib(x);
}
