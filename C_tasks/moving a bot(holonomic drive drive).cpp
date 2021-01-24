#include <iostream>
using namespace std;
#include <math.h>

void wheelspeeds(double speed,double angle,double omega)
{
double v1,v2,v3,v4,vx,vy;
double pi = 3.141592653589793238;
vx=speed*sin((pi/180)*angle);
vy=speed*cos((pi/180)*angle);
v1=vx*sin(pi/4)+vy*cos(pi/4);
v2=vx*sin((pi)*3/4)+vy*cos((pi)*3/4);
v3=vx*sin((pi)*5/4)+vy*cos((pi)*5/4);
v4=vx*sin((pi)*7/4)+vy*cos((pi)*7/4);


cout<<"V1="<<v1+omega<<"\n";
cout<<"V2="<<v2+omega<<"\n";
cout<<"V3="<<v3+omega<<"\n";
cout<<"V4="<<v4+omega<<"\n";
}
int main()
{
double speed,angle,omega;
cout<<"Enter speed\n";
cin>>speed;
cout<<"Enter angle\n";
cin>>angle;
cout<<"Enter omega\n";
cin>>omega;
wheelspeeds(speed,angle,omega);
}
