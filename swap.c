void swap_max(int arr[], int l, int n)
{
    int max=arr[n],temp, k=n;
    for(int i=n;i<l;i++)
        if(arr[i]>max)
        {
             max=arr[i];
             k=i;
        }
    temp=arr[n];
    arr[n]=arr[k];
    arr[k]=temp;
    return;
}

void ssort(int a[], int l)
{
    for(int i=0;i<l;i++)
        swap_max(a,l,i);
}
