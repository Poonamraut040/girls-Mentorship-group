#include <iostream>
using namespace std;

int getSum(int arr[],int n)
{
    int sum =0;
    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={2,3,4,5,6};
    cout<<"sum is "<<getSum(arr,5)<<endl;
    return 0;
    
}
