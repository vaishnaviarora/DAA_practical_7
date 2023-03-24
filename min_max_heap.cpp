#include<bits/stdc++.h>
using namespace std;
#define ll long long
void minHeap(int arr[] ,int i ,int n)
{
    int lt=2*i+1;
    int rt=2*i+2;
    int smallest=i;
    if(lt<n && arr[lt]<arr[i])
        smallest=lt;
    if(rt<n && arr[rt]<arr[smallest])
        smallest=rt;
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        minHeap(arr,smallest,n);
    }
}
void maxHeap(int arr[],int i,int n)
{
    int lt=2*i+1;
    int rt=2*i+2;
    int largest=i;
    if(lt<n && arr[lt]>arr[i])
        largest=lt;
    if(rt<n && arr[rt]>arr[largest])
        largest=rt;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        maxHeap(arr,largest,n);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"MinHeap"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    minHeap(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"MaxHeap"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    maxHeap(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}