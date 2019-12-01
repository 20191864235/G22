#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double root(double n, double p, double q, double r, double t);  
int main()
{
    double x, a, b, c, d;
    cout<<"Please enter coefficient of equation: ";            
    cin>>x>>a>>b>>c>>d;
    cout<<setiosflags(ios::fixed)<<setprecision(4);
    cout<<"Result: "<<root(x, a, b, c, d)<<endl;
    system("pause");
    return 0;
}

double root(double n, double p, double q, double r, double t)
{
    double f;
    f=(p*pow(n, 3)+q*pow(n, 2)+r*n+t)/(3*p*pow(n, 2)+2*q*n+r);
    for (int i=0; fabs(f)>1e-5; f=(p*pow(n, 3)+q*pow(n, 2)+r*n+t)/(3*p*pow(n, 2)+2*q*n+r), n-=f, i++);
    return n;
}
