#include <iostream>
#include <stack>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	cin.ignore();
	while(t-- ) {
		string str;
		getline(cin, str);
		str += "\n";
		stack<char> s;
		for(int i=0;i<str.length();i++) {
			if(str[i] == ' ' || str[i] == '\n') {
				while(!s.empty()) {
					cout<<s.top();
					s.pop();
				}
				cout<<str[i];
			} else{
				s.push(str[i]);
			}
		}
	}
	return 0;
}
