#include <iostream>
#include <string>

int main()
{
  std::string name;

int even=1,odd=1,sum=0;
    while(even<4000000)
    {
    even=odd+even;
    odd=even-odd;
    if(even%2==0)
    sum+=even;
    }
  std::cout << "sum  " << sum;
}
