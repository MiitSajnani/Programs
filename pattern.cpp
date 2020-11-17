#include <iostream>
using namespace std;

int main() {
	// your code goes here
	for(int i=0;i<7;i++)
	{
	    for(int j=0;j<i;j++)
	        cout<<" ";
	    for(int j=i+1;j<=7;j++)
	        cout<<j<<" ";
	    cout<<endl;
	}
	for(int i=5;i>=0;i--)
	{
	    for(int j=0;j<i;j++)
	        cout<<" ";
	    for(int j=i+1;j<=7;j++)
	        cout<<j<<" ";
	    cout<<endl;
	}
	return 0;
}
