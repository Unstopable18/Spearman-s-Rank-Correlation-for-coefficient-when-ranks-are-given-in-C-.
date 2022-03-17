#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    float xarr[50],yarr[50],d[50],d2[50],dsum=0,d2sum=0,p1,p2,spearRow;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" A Rank: \n";
    for(i=0; i<n; i++)
    {
        cin>>xarr[i];  
    }
    cout<<"\nEnter "<<n<<" B Rank: \n";
    for(i=0; i<n; i++)
    {
        cin>>yarr[i];
    }
    for(i=0; i<n; i++)
    {
        d[i]=xarr[i]-yarr[i];
        d2[i]=pow(d[i],2);
        dsum=dsum+d[i];
        d2sum=d2sum+d2[i];
    }
    p1=6*d2sum;
    p2=n*((n*n)-1);
    spearRow=1-(p1/p2);
    cout<<"*******************************************************";
    cout<<"\nSpearmans Rank is Found to be = "<<spearRow<<"\n";
    cout<<"*******************************************************";
    return 0;
}