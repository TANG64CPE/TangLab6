#include<iostream>
using namespace std;

int main(){
    int n=100;
    int i;
    int x[n];
    while ( i < n )
    {if( x[i] != 0 ){
       cout << "Enter an integer: ";
       cin >> x[i];
    }
    }
    int j=0;
    int sum=0;
    while( j < i )
    {if ( x[i] % 2 != 1 )
    {
        sum += j;
        j++;
    }
    }
    cout << "#Even numbers = " << sum << "\n";
    cout << "#Odd numbers = ";
    return 0;
}