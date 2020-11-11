#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string s;
	cin >> s;
	int l = s.length();
	stack<char> stk;
	
	for(int i=0;i<l;i++)
	{
		// +나 -일때 
		if(s[i] == '+' || s[i] == '-')
		{
			while(!stk.empty() && stk.top()!= '(')
			{
				printf("%c", stk.top());
				stk.pop();
			}
			stk.push(s[i]);
		}
		// *나 /일때 
		else if(s[i] == '*' || s[i] == '/')
		{
			 
			while(!stk.empty() && (stk.top() == '*' || stk.top()== '/'))
			{
				printf("%c",stk.top());
				stk.pop();
			}
			
			stk.push(s[i]);
		}
		// ( 왼괄호 일때 
		else if(s[i] == '(') stk.push(s[i]);
		// ) 우괄호 일때 
		else if(s[i] == ')')
		{
			while(!stk.empty() && stk.top()!= '(')
			{
				printf("%c", stk.top());
				stk.pop();
			}
			stk.pop();
		}
		//알파벳일때  
		else printf("%c", s[i]);
	}
	
	// 다 끝나고 비지 않았으면 
	while(!stk.empty())
	{
		// 차례대로 top부터 꺼내주기 
		printf("%c", stk.top());
		stk.pop();
	}
	
	return 0;
}


 
