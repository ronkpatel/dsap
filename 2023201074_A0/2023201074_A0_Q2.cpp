#include <iostream>

using namespace std;

int main()
{
    int basesize , start , jmpsize ; 
    cin >> basesize >> start >> jmpsize ;
    int basearr[basesize], jmparr[jmpsize];
    for(int i = 0 ; i < basesize ; i++ )
    {
        cin>> basearr[i];
    }
    for ( int j = 0 ; j < jmpsize ; j++ )
    {
        cin>> jmparr[j];
    }
    cout<< basearr[start]<< " ";
    for ( int k = 0 ; k < jmpsize ; k++ )
    {
        start = start + jmparr[k];
        if(start >= 5) 
        {
            start = start%5;
            cout << basearr[start];
        }
        else 
        {
            cout << basearr[start];
        }
        cout<<" ";
    };
}