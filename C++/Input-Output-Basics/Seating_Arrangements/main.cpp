#include<iostream>
using namespace std;
 
int main()
{
    int n,i,s,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t%12==1||t%12==0)
        {
            if(t%12==0)
            {
                s=t-11;
                cout<<s<<" WS"<<endl;
            }
            else
            {
                s=t+11;
                cout<<s<<" WS"<<endl;
            }
            
        }
        else if(t%12==6||t%12==7)
        {
            if(t%12==6)
            {
                s=t+1;
                cout<<s<<" WS"<<endl;
            }
            else
            {
                s=t-1;
                cout<<s<<" WS"<<endl;
            }
        }
        else if(t%12==5||t%12==8)
        {
            if(t%12==5)
            {
                s=t+3;
                cout<<s<<" MS"<<endl;
            }
            else
            {
                s=t-3;
                cout<<s<<" MS"<<endl;
            }
        }
        else if(t%12==2||t%12==11)
        {
            if(t%12==2)
            {
                s=t+9;
                cout<<s<<" MS"<<endl;
            }
            else
            {
                s=t-9;
                cout<<s<<" MS"<<endl;
            }
        }
        else if(t%12==3||t%12==10)
        {
            if(t%12==3)
            {
                s=t+7;
                cout<<s<<" AS"<<endl;
            }
            else
            {
                s=t-7;
                cout<<s<<" AS"<<endl;
            }
        }
        else
        {
            if(t%12==4)
            {
                s=t+5;
                cout<<s<<" AS"<<endl;
            }
            else
            {
                s=t-5;
                cout<<s<<" AS"<<endl;
            }
       }
   }
    return 0;
}
