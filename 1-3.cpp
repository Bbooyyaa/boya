#include <iostream>

using namespace std;

int main()
{
    int p=1;
    int x=1;
    for(x<10;p*=x;x+=1){
        cout<<"p="<<p<<"\n";
        cout<<"x="<<x<<endl;
    }
    return 0;
}
