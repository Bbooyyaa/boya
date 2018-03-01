#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"Enter the student grade: ";
    cin>>m;
    if (m>=90)
        cout<<"A\n";
    else if (m>=80)
        cout<<"B\n";
    else if (m>=70)
        cout<<"C\n";
    else if (m>=60)
        cout<<"D\n";
    else
        cout<<"F\n";
    return 0;
}