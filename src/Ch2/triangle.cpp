#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=n;i>0;i--){
    for(int j=0;j<2*n-1;j++){
        if(j>=0&&j<n-i){
            cout<<" ";
        }else if(j>=n-i&&j<n-1+i){
            cout<<"#";
        }

    }
    cout<<endl;
   }
}
