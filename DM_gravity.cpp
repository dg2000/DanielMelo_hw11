#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

float dvdt( double G, double M, double x)
{
  return -G*M/(x*x);
}


float dxdt(double G, double M, double v)
{
  return v;
}



int  main()
{

  int N = 2000000;

  double t = 0.0;

  double x = 100.0;

  double inicial = 100.0;

  double v = 0.0;

  double h = x/N;

  

  for(int i=0; i<N && x > inicial/100.0 ; i++)
    {
  
      double G = 10.0;

      double M = 1000.0;

      double k1 = dvdt(G, M, x);
      
      double k2 = dvdt(G, M, x + h*k1/2.0);
      
      double k3 = dvdt(G, M, x + h*k2/2.0);
      
      double k4 = dvdt(G, M, x + h*k3);
      
      double p1 = v;
      
      double p2 = v + h*p1/2.0;
      
      double p3 = v + h*p2/2.0;
  
      double p4 = v + h*p3/2.0;
      
      v = v + h*(k1 + 2.0*k2 + 2.0*k3 + k4)/6.0;
      
      t = t + h;
  
      x = x + h*(p1 + 2.0*p2 + 2.0*p3 + p4)/6.0;

      cout << x << " " << v << " " << t << endl;

    }
  

}
