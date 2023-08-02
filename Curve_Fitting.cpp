#include <bits/stdc++.h>
using namespace std;
int main()
{
    //float x[5]={1,2,3,4,5}, y[5]={0.6,2.4,3.5,4.8,5.7}, m=5;
    float x[4]={0,2,5,7}, y[4]={-1,5,12,20}, m=4;
    float sumx=0 , sumy=0 , sumxy=0 , sumxx=0, xb, yb, a1, a0;

    for (int i=0 ; i<5 ; i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumxx += pow(x[i],2);
        sumxy += x[i]*y[i];
        xb = sumx / m;
        yb = sumy / m;
    }
    cout<<"Sum of X: "<<sumx<<endl;
    cout<<"Sum of Y: "<<sumy<<endl;
    cout<<"Sum of X^2: "<<sumxx<<endl;
    cout<<"Sum of XY: "<<sumxy<<endl;

    a1=((m*sumxy)-(sumx*sumy))/((m*sumxx)-(pow(sumx,2)));
    cout<<"\na1: "<<a1;
    a0= yb-a1*xb;
    cout<<"\na0: "<<a0<<endl;
}
