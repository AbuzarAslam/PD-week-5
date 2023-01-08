#include<iostream>
using namespace std;
void meter(float length,float width,float height);
void centiMeter(float length,float width,float height);
void milliMeter(float length,float width,float height);
void kiloMeter(float length,float width,float height);
main()
{
   float length;
   float width;
   float height;
   string unit;
   cout<<"Enter length .....";
   cin>>length;
   cout<<"Enter width ......";
   cin>>width;
   cout<<"Enter height...... ";
   cin>>height;
   cout<<"Enter unit of...... ";
   cin>>unit;
   if(unit=="meter")
   {
       meter(length,width,height);
       
   }

   if(unit=="centimeter")
   {
       centiMeter(length,width,height);
       
   }

   if(unit=="millimeter")
   {
       milliMeter(length,width,height);
       
   }

   if(unit=="kilometer")
   {
       kiloMeter(length,width,height);
       
   }


}

     void meter(float length,float width,float height)
     {
        int result;
        result = (length*width*height);
        cout<<"Volume..... "<<result<<" meter cube "<<endl;
     }

     void centiMeter(float length,float width,float height)
     {
        int result;
        result = (length*width*height*(1000000));
        cout<<"Volume..... "<<result<<" centimeter cube"<<endl;
     }

     void milliMeter(float length,float width,float height)
     {
        int result;
        result = (length*width*height*(1000000000));
        cout<<"Volume..... "<<result<<" millimeter cube"<<endl;
     }

     void kiloMeter(float length,float width,float height)
     {
        int result;
        result = ((length*width*height)/(1000000000));
        cout<<"Volume....."<<result<<" kilometer cube"<<endl;
     }
