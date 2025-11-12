#include <iostream>
using namespace std;
int conversion(int decnum){
    int ans=0,pow=1;
    while (decnum>0){
        int rem= decnum%2;
        decnum= decnum/2;
        ans+=(rem*pow);
        pow+=10;
    
    }
}
int main()
{
   int decnum=50;
   conversion(decnum);
   return 0; 
}