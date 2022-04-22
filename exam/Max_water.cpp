void max_water(int ht[],int n)
{
    int Max=0,water=0;
    int i=0,j=n-1;
    while(i<=j)
    {
        water=min(ht[i],ht[j])*(j-i);
        if(Max<water)
            Max=water;
        if(ht[i]>ht[j])
            j--;
        else
            i++;
    }
    cout<<"Max water:"<<Max<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<endl<<"Enter heights:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max_water(a,n);
}
