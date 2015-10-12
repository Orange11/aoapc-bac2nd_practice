#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
     double a,b,c;
    int n=1;
    while(cin>>a>>b>>c&&(a!=0||b!=0||c!=0)){

        //printf("%.5lf\n",sum);
        cout<<"Case "<<n<<": "<<fixed<<setprecision(c)<<a/b/1.0<<endl;
        n++;

    }
    return 0;
}
