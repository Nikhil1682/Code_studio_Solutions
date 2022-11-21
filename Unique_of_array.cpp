int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];  // a^a results 0  so it will find unique
    }
    return ans;
}