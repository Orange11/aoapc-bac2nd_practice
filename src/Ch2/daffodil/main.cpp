#include <iostream>

using namespace std;

int main()
{
    for(int i=100;i<=999;i++){
        int a,b,c;
        a=i/100;
        b=i/10%10;
        c=i%10;
//        if(n == pow(n/100,3) + pow(n/10%10,3) + pow(n%10,3) );

        int sum;
        sum=a*a*a+b*b*b+c*c*c;
        if(sum==i)
            cout<<i<<endl;
    }
}
