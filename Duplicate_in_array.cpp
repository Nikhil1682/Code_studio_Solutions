int findDuplicate(vector<int> &arr) 
{
    // Write your code here
     int ans=0;
    for(int i=0;i<arr.size();i++){
        // XOR all the elements of arr
        ans=ans^arr[i];
    }
    // xor elements from 1 to n-1 so that duplicate will display
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
	
}