vector<int> Solution::findPerm(const string A, int B) 
{
    vector<int>ans;
    int start=1;
    for(int i=0;i<=A.size();i++)
    {
        if(A[i]=='I')
        {
            ans.push_back(start);
            start++;
            
        }
        else
        {
            ans.push_back(B);
            B--;
            
        }
        
    }
    return ans;
}
