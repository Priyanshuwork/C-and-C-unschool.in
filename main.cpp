#include<iostream>
using namespace std;
int main()
{
    int base,radius,height,a,b,choice1,choice2;
    float area1,area2,area3;
    cout<<"What you want first? 1.Circle 2.Triangle 3.Rectangle";
    cin>>choice1;
    if(choice1==1)
    {
        cout<<"Give the RADIUS of the CIRCLE";
        cin>>radius;
        area1= 3.14*radius*radius;
        cout<<"The AREA of the CIRCLE is: "<<area1;
        cout<<"Now what you want?";
        cin>>choice2;
        if(choice2==2)
            {
                cout<<"Give the HEIGHT and BASE of TRIANGLE";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"The AREA of TRIANGLE is: "<<area2;
                cout<<"AND";
                cout<<"Give the SIDES of the RECTANGLE";
                cin>>a>>b;
                area3= a*b;
                cout<<"AREA of the SQUARE is: "<<area3;
            }
            else if(choice2==3)
                {
              cout<<"Give the SIDES of the RECTANGLE";
              cin>>a>>b;
              area3=a*b;
              cout<<"AREA of the RECTANGLE is: "<<area3;
              cout<<"AND";
              cout<<"Give the BASE and HEIGHT of the TRIANGLE";
              cin>>base>>height;
              area2=0.5*base*height;
              cout<<"AREA of TRIANGLE is: "<<area2;
            }
            else
                cout<<"Invalid";
            }
       else if(choice1==2)
       {
           cout<<"Give the HEIGHT and BASE of TRIANGLE";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"The AREA of TRIANGLE is: "<<area2;
      cout<<"What else you want?";
      cin>>choice2;
      if(choice2==1)
        {
           cout<<"RADIUS of the CIRCLE ";
           cin>>radius;
           area1=3.14*radius*radius;
           cout<<"AREA of the CIRCLE"<<area1;
           cout<<"AND";
           cout<<"SIDES of the RECTANGLE";
           cin>>a>>b;
           area3= a*b;
           cout<<"AREA of the RECTANGLE"<<area3;
       }
       else if(choice2==3)
       {
           cout<<"SIDES of the RECTANGLE is ";
           cin>>a>>b;
           area3=a*b;
           cout<<"AREA of the RECTANGLE is: "<<area3;
           cout<<"AND";
           cout<<"RADIUS of the CIRCLE ";
           cin>>radius;
           area1= 3.14*radius*radius;
           cout<<"AREA of the CIRCLE: "<<area1;
           }
           else
            cout<<"Invalid";
       }
    else if(choice1==3)
    {
           cout<<"SIDES of the RECTANGLE is ";
           cin>>a>>b;
           area3=a*b;
           cout<<"AREA of the RECTANGLE is: "<<area3;
           cout<<"What next you want?";
           cin>>choice2;
           if(choice2==2)
           {
                cout<<"Give the HEIGHT and BASE of TRIANGLE";
                cin>>height>>base;
                area2= 0.5*base*height;
                cout<<"The AREA of TRIANGLE is: "<<area2;
                cout<<"AND";
                cout<<"RADIUS of the CIRCLE ";
                cin>>radius;
                area1= 3.14*radius*radius;
                cout<<"AREA of the CIRCLE is "<<area1;
           }
           else
            cout<<"Invalid";
           }
           else
            cout<<"INVALID";
           return 0;
}
