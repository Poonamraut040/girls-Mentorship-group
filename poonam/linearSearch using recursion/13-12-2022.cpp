#include<iostream>
using namespace std;

void print(int arr[],int size){
cout<<"size of array is "<<size<<endl;
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
  
}
cout<<endl;
}

bool linearSearch(int arr[],int size,int key){
print(arr,size);
//base case
     if(size == 0)
       return false;
     if(arr[0]==key){
       return true;
     }
 else{
 bool remainingPart = linearSearch(arr+1,size-1,key);
 return remainingPart;
 }
}
int main()
{
    int arr[6] = {2,3,4,5,6,7};
    int size =6;
    int key = 5;
    bool ans = linearSearch(arr,size,key);
    if(ans){
    cout<<"present"<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }
}


output:

size of array is 6
2 3 4 5 6 7 
size of array is 5
3 4 5 6 7 
size of array is 4
4 5 6 7 
size of array is 3
5 6 7 
present
