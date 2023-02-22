#include<iostream>
#include<string>
using namespace std;
main()
{
	string s1;
	cout<<"Enter the string : ";
	getline(cin,s1);
	cout<<"Entered string is : "<<s1;
	for(int i=0;i<s1.length();i++)
	{
		s1[i]=tolower(s1[i]);
		
	}
	cout<<"\nString in lowercase is : "<<s1;
	return 0;
}