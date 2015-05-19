#include "HugeInt.h"
int main()
{
    HugeInt Huge;
    int x;
    int tempy=28825252;
    long long int tempz=314159265358979323846;
    int y=Huge.y(tempy);
  long long  int z=Huge.z(tempz);
    cin>>x;
    x=Huge.x(x);
    cout<<endl;
    Huge.result=x+y;
    cout<<x<<"+"<<y<<"="<<Huge.result<<endl;
    Huge.result=z-x;
    cout<<z<<"-"<<x<<"="<<Huge.result<<endl;
    return 0;
}
