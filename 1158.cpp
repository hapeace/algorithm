#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char** argv) {
	int n, k;
	scanf("%d %d", &n, &k);
	queue<int> q;
	for(int i=1;i<=n;i++)
		q.push(i);
	int cnt = 0;
	printf("<");
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		cnt++;
		if(cnt == k)
		{
			cnt = 0;
			if(q.size() != n-1) printf(", ");
			printf("%d", x);
		}
		else q.push(x);
	}
	printf(">");
	
	return 0;
}
