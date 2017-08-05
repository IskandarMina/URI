#include <iostream>
#define in cin>>
#define out cout<<
using namespace std;

int main()
{
    float n;
    in n;
    if(n<0 || n>100) out "Fora de intervalo\n";
    else if(n<=25.00) out "Intervalo [0,25]\n";
    else if(n<=50.0) out "Intervalo (25,50]\n";
    else if(n<=75.0) out "Intervalo (50,75]\n";
    else if(n<=100.0) out "Intervalo (75,100]\n";
    return 0;
}
