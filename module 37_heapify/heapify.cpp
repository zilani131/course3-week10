#include<bits/stdc++.h>
using namespace std;

void printA(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
    cout<<endl;

}
void maxHeapify(int a[],int n,int current)
{

    int largest=current;
    int left=2*current+1;
    int right=2*current+2;
    if(left<n&&a[left]>a[largest])
    {
        largest=left;
    }
    if(right<n&&a[right]>a[largest])
    {
        largest=right;
    }
    if(largest!=current)
    {
        swap(a[largest],a[current]);
        maxHeapify(a,n,largest);
    }


}
////minHeapify
void minHeapify(int a[],int n,int current)
{

    int small=current;
    int left=2*current+1;
    int right=2*current+2;
    if(left<n&&a[left]<a[small])
    {
        small=left;
    }
    if(right<n&&a[right]<a[small])
    {
        small=right;
    }
    if(small!=current)
    {
        swap(a[small],a[current]);
        minHeapify(a,n,small);
    }


}
void ascendingHeapSort(int a[],int n)
{
;
    for(int i=n-1; i>=0; i--)
    {

        swap(a[0],a[i]);
        maxHeapify(a,i,0);
    }


}
void decendingHeapSort(int a[],int n)
{
int j=0;
    for(int i=n-1; i>=0; i--)
    {
         cout<<j<<endl;
        swap(a[0],a[i]);
        minHeapify(a,i,0);
         printA(a,n);
        j++;
    }


}
int main()
{
    int n;
    cin>>n;
    int largest=(n/2)-1;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    printA(a,n);
    for(int i=largest; i>=1; i--)
    {
        minHeapify(a,n,i);

    }
    printA(a,n);
    decendingHeapSort(a,n );
    printA(a,n);
}
