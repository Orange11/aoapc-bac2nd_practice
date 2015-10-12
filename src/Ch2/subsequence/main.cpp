#include <iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main()
{
    int n,m;
    int c=1;
    while(cin>>n>>m&&(n|m)){

        double sum=0.0;
        for(int i=n;i<=m;i++){
            sum+=1.0/i/i;
        }
        //printf("%.5lf\n",sum);
        cout<<"Case "<<c<<": "<<fixed<<setprecision(5)<<sum<<endl;
        c++;

    }
    return 0;
}
