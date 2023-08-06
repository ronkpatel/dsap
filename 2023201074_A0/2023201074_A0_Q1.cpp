#include <iostream>

using namespace std; 

int findlen( string input )
{
    int ans=0 , i = 0 ; 
    while(input[i] != '\0')
    {
        ans++ ; 
        i++ ; 
    }
    return ans;
}
int chartoint( char n )
{
    //a = 97 , z = 122
    return (int(n)-97);
}
int checkanagram(string str1 , string str2 )
{
    int len1 = findlen(str1) ;
    int len2 = findlen(str2) ;
    int arr[26]={};
    if(len1 != len2) 
    {
        return 0 ; 
    }
    else 
    {
       for( int i = 0 ; i < len1 ; i++ )
        {
           arr[chartoint(str1[i])]++ ; 
        }
        for( int j = 0 ; j < len2 ; j++ )
        {
            arr[chartoint(str2[j])]--; 
        }
        for( int k = 0  ; k < 26 ; k++ )
        {
            if( arr[k]!=0 ) 
            {
                return 0;   
            }
        }
        return 1; 
    }       
}
int main()
{
    int t , flag = 0 ; 
    cin>>t ; 
    string ans[t];
    for ( int x = 0 ; x < t ; x++ )
    {
        string str1, str2  ; 
        cin >> str1 >> str2  ;
        if(checkanagram(str1 , str2) == 1 )
        {
            ans[x]="YES";
        }
        else 
        {
            ans[x]= "NO";
        }
    }
    for (int q = 0 ; q < t ; q++ )
    {
        cout<<ans[q]<<endl;
    }
    return 0 ;
}