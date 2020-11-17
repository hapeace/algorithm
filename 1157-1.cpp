#include <bits/stdc++.h>
using namespace std;

int cnt[27];

int main(int argc, char** argv) {
	string s;
	cin >> s;
	 int l = s. length();
	 for(int i = 0; i<l;i++)
	 	if('a' <= s[i] && s[i] <= 'z') cnt[s[i] - 'a']++;
	 	else if('A' <= s[i] && s[i] <= 'Z') cnt[s[i] - 'A']++;
	 	
	int mx = 0, mxi = 0;
	bool flag = false;
	for(int i=0;i<26;i++)
	{
		if(mx < cnt[i])
		{
			mx = cnt[i];
			mxi = i;
			flag = false;
		}
		else if(mx == cnt[i]) flag = true;
	}
	printf("%c", flag ? '?' : 'A' + mxi);
	
	
	return 0;
}
