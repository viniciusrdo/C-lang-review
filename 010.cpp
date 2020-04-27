#include <iostream>
using namespace std;

int fibonacci(int f);

int main(int argc, char *argv[])
{
    for(int i=1;i<=20;i++) cout<< fibonacci(i)<<"\n";

    system("PAUSE");
    return 0;
}


int fibonacci(int f){    
    if(f == 0)  return 0;
    if(f == 1)  return 1;
    
    return fibonacci(f-1) + fibonacci(f-2);
}
