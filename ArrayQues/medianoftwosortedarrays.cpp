// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{

vector<int> nums1 ={1,3};
vector<int> nums2 ={2};

int i =0, j=0;
int n = nums1.size();
int m = nums2.size();

vector<int> res;
while(i<n && j<m)
{
    if(nums1[i]<nums2[j])
    {
        //push nums1 and increment i 
        res.push_back(nums1[i]);
        i++;
    }
    else
    {
       // push nums2 and increment j 
       res.push_back(nums2[j]);
       j++;
    }
}

if(j==m)
{
    //then copy all the elements of nums1
    while(i<n)
    {
        res.push_back(nums1[i]);
        i++;
    }

}
else if(i==n)
{
//then copy all the elements of nums2
while(j<m)
{
    res.push_back(nums2[j]);
    j++;
}
}

for(auto x: res)
{
    cout<<x<<" ";
}

//median logic 
int new_res = res.size();  
float median = 0.0f;
if(new_res%2==0) //even
{
     median = float(res[float((new_res)/2)-1] + res[float((new_res/2)+1)-1])/2;
}
else //odd
{
     median = float(res[float(new_res/2)]);
}

cout<<"\n"<<median<<" ";

return 0;
}