#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	string s;
	cin >> s;
	int l = s.length();
	stack<char> stk;
	
	for(int i=0;i<l;i++)
	{
		// +�� -�϶� 
		if(s[i] == '+' || s[i] == '-')
		{
			while(!stk.empty() && stk.top()!= '(')
			{
				printf("%c", stk.top());
				stk.pop();
			}
			stk.push(s[i]);
		}
		// *�� /�϶� 
		else if(s[i] == '*' || s[i] == '/')
		{
			 
			while(!stk.empty() && (stk.top() == '*' || stk.top()== '/'))
			{
				printf("%c",stk.top());
				stk.pop();
			}
			
			stk.push(s[i]);
		}
		// ( �ް�ȣ �϶� 
		else if(s[i] == '(') stk.push(s[i]);
		// ) ���ȣ �϶� 
		else if(s[i] == ')')
		{
			while(!stk.empty() && stk.top()!= '(')
			{
				printf("%c", stk.top());
				stk.pop();
			}
			stk.pop();
		}
		//���ĺ��϶�  
		else printf("%c", s[i]);
	}
	
	// �� ������ ���� �ʾ����� 
	while(!stk.empty())
	{
		// ���ʴ�� top���� �����ֱ� 
		printf("%c", stk.top());
		stk.pop();
	}
	
	return 0;
}


 
