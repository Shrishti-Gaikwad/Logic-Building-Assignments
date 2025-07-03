// Write generic program to accept N values from user and return addition of that values.

#include <iostream>
using namespace std;

template <class T>

T AddN(T *arr,int iSize)
{
    T sum = 0;

    int i = 0;

    if(iSize <= 0)
    {
        cout<<"Invalid input\n";
        return 0;
    }

    for(i = 0;i < iSize;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iSum = AddN(arr,5);
    cout<<"Integer Addition is: "<<iSum<<"\n";

    float fSum = AddN(brr,4);
    cout<<"Float Addition is: "<<fSum<<"\n";

    return 0;
}
