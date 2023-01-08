#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int hours,days,workers;
    int workhour;
    cout<<"Enter hours..... ";
    cin>>hours;
    cout<<"Enter days......";
    cin>>days;
    cout<<"Enter workers.....";
    cin>>workers;
    int realdays = days - (days*0.1);
    
    int overtime =workers*(realdays*10);
    workhour = floor(overtime);
    int difference = workhour - hours;
    if(workhour>hours)
    {
        cout<<"Yes! "<<difference<<" hours left ";
    }
    if(workhour<hours)
    {
        cout<<"Not enough time "<<(-1*difference)<<" hours needed ";
    }




}
