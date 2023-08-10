
// linear search

#include<iostream>
using namespace std;

// function to search element
int linearsearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int key,n=5,arr[n];

    cout<<"\n Enter 5 Elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Enter Element to Search :";
    cin>>key;

    // function call
    n=linearsearch(arr,key,n);

    if(n == -1)cout<<"\n Element Not Found"<<endl;
    else cout<<"\nElement Found at Place : "<<n<<endl;
}
