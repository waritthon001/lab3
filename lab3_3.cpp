#include<iostream>
using namespace std;
int main()
{
   
   double x=6,y=19,sum;
   
    while(1/x>=1/y){
        sum +=1/x;
        x+=1;
    }
    
     cout<<"The answer is "<<sum;
}
