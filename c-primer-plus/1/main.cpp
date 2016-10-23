using namespace std;
#include <iostream>
#include <cstring>
int main()
{
    char a[100];
    int sum=0;
    cout<<"Enter words (to stop,type the word done):\n";
    cin>>a;
    while(strcmp(a,"done"))
    {
        sum++;
        cin>>a;
    }
    cout<<"You entered a total of "<<sum<<" words.\n";
    return 0;
}