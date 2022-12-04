#include <iostream>
using namespace std;
int main()
{
    int num =5;
    cout<<num<<endl; //normal value print hogi
    
    //address of num//
    cout<<"address of num is "<<&num<<endl;   //&num se adress print hoga
    
    int *ptr = &num;
    cout<<"value is "<<*ptr<<endl; //*ptr me value print hogi jo likhi hai
    cout<<"adress is : "<<ptr<<endl;  //only ptr likhege to adress print hoga
    
    double d = 4.2;
    double *pt =&d;
    cout<<"value is "<<*pt<<endl; 
    cout<<"adress is : "<<pt<<endl;
    
    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is "<<sizeof(pt)<<endl;
    return 0;
}

output: 

5
address of num is 0x7ffffeb6a0ac
value is 5
adress is : 0x7ffffeb6a0ac
value is 4.2
adress is : 0x7ffffeb6a0b0
size of integer is 4
size of pointer is 8
size of pointer is 8
