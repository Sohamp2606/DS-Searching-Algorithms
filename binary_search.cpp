

// binary search

#include<iostream>
using namespace std;

// function to search element
int linearsearch(int arr[],int key,int low,int high)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            low = mid+1;
        else
            high = mid -1;
    }
    return -1;
}

int main()
{
    int key,n=5,arr[n],temp;

    cout<<"\n Enter 5 Elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Enter Element to Search :";
    cin>>key;

    // sorting the array
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // function call
    n=linearsearch(arr,key,0,n-1);

    if(n == -1)cout<<"\n Element Not Found"<<endl;
    else cout<<"\nElement Found at Place : "<<n<<endl;
}
