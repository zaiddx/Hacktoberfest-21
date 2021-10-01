#include<bits/stdc++.h>
using namespace std;

class Triplet{
public: 
	int x;
	int y;
	int gcd;
};

Triplet extendedEuclid(int a, int b)
{

	//base case
	if(b==0)
	{
		Triplet ans;
		ans.gcd =  a;
		ans.x = 1;
		ans.y = 0;
		return ans;
	}

	//extended euclid alogrithm 
	Triplet smallAns =  extendedEuclid(b, a%b);
	Triplet ans;
	ans.gcd = smallAns.gcd;
	ans.x = smallAns.y;
	ans.y = smallAns.x -  (a/b)*smallAns.y;
	return ans;
}

int main()
{
	int a, b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	cout<<"\nGCD of "<<a<<" and "<<b<<" numbers are :- \n";
	Triplet ans = extendedEuclid(a, b);
	 cout<<ans.gcd<<"\n";
	 cout<<ans.x<<"\n";
	 cout<<ans.y<<"\n";
	return 0;
}