#include<bits/stdc++.h>
vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int>answer;
	stack<int>s;
	
	for(int i=arr.size()-1;i>=0;--i)
	{
		if(s.empty())answer.push_back(-1);
		else
		{
			while(!s.empty() and s.top()<=arr[i])s.pop();
			if(s.empty())answer.push_back(-1);
			else answer.push_back(s.top());
		}
		s.push(arr[i]);
	}
	reverse(answer.begin(),answer.end());
	return answer;
}