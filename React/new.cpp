#include<iostream>
using namespace std ;

int main()
{
    int array1[4]={1,3,4,5};
    int array[4]={6,7,4,2};
    int sum1= 0 ;

    for(int i = 0 ; i < 4 ; i++)
    {
        if(array1[i]==array[i] && array1[i+1]<array[i+1])
        {
            cout<<"Number is added "<<array[i];
            sum1+=array[i];
        }
        sum1+=array1[i];
    }
    
    cout<<"shortest path is :"<<sum1;


    return 0;
}