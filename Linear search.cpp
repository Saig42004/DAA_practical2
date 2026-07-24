#include<iostream>
using namespace std;

int main()
{
    int arr[50], n, i, key;

    cout<<"Enter the Size: ";
    cin>>n;

    cout<<"Enter "<<n<<" Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Enter the Element to Search: ";
    cin>>key;

    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"\nElement found at index "<<i;
            return 0;
        }
    }

    cout<<"\nElement Not Found";

    return 0;
}
