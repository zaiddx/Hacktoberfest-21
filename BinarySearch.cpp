#include <iostream>
using namespace std;

template<class T>
int bSearch(T arr[],int l, int r,T ele)
{
    int mid = (l+r)/2;
    if(l<r)
    {
        if(arr[mid] > ele)
            bSearch(arr,l,mid-1,ele);
        else if(arr[mid] < ele)
            bSearch(arr,mid+1,r,ele);
        else
            return mid;
    }
    
}

int main()
{
    int pos,n,key,i;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be found : ";
    cin>>key;
    pos = bSearch(arr,0,n-1,key);
    if(pos != -1)
        cout<<"Element is present at "<<pos<<" position";
    else
        cout<<"Element is not present";

    return 0;
}
