#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<=n;i++)
    {
        int k=n-i;
        
        for(int x=0;x<k;x++)       //Printing space before reverse sequence starts in case if i<n 
            cout<<" "<<" ";
            
        for(int j=i;j>=0;j--)       //Printing reverse sequence till 0.
            cout<<j<<" ";
            
        for(int j=1;j<=i;j++)       // Printing in sequence from 1 to i
            cout<<j<<" ";
            
        cout<<endl;                 //ending the line
    }

    return 0;
}
