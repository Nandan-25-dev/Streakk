#include <iostream>
#include <conio.h>
using namespace std;
int conversion(int decnum){
    int ans=0,pow=1;
    while (decnum>0){
        int rem= decnum%2;
        decnum= decnum/2;
        ans+=(rem*pow);
        pow+=10;
    }
    return ans;
}
int main()
{
    int decnum=50;
        cout<<conversion(decnum)<<endl;
    getch();
   return 0; 
}