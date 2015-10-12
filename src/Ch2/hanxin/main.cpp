#include <iostream>

using namespace std;

int main()
{   int i;
    int a,b,c;
    int n=1;
    while(cin>>a>>b>>c){

        for(i=10;i<=100;i++){
        if(i%3==a&&i%5==b&&i%7==c){
            cout<<"Case "<<n<<": "<<i<<endl;
            break;
            }
        }
        if(i==101){
        cout<<"Case "<<n<<": "<<"No answer"<<endl;
        }
        n++;
    }
    return 0;
}
