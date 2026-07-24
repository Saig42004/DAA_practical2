#include<iostream>
using namespace std;

int main()
{
    int arr[50], n, i, key;
    int low, high, mid;

    cout<<"Enter the Size: ";
    cin>>n;

    cout<<"Enter "<<n<<" Sorted Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Enter the Element to Search: ";
    cin>>key;

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout<<"\nElement found at index "<<mid;
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout<<"\nElement Not Found";

    return 0;
}
