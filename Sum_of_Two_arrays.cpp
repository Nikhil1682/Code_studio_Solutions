#include <bits/stdc++.h> //
//function to reverse result
vector<int>reverse(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s++],v[e--]);
    }
    return v;
    
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int i=n-1;  // as we point last element
    int j=m-1;
    vector<int>ans;    
    int carry=0;
    
    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];
        int sum= val1+val2+carry;
        
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    //first case   when 1st array is greater
    
    while(i>=0){
        int sum=a[i]+carry;
         carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;      
    }
    
    // second case  when 2nd array is greater
    
    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;      
    }
    
    // when carry is remaining
    
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    // to get desire output we use reverse 
    return reverse(ans); 
    
}