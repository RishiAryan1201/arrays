#include <iostream>

using namespace std;
int main()
{
	int score;
	cout<<"write your score out of 100 "<<endl;
	cin>>score;
	if(score > 90)
	{
		cout<<"congrats! you get faster wifi and a new smartphone";
	}else if(score >= 80)
	{
		cout<<"you studied very hard so you get a better wifi";
	}else if(score < 60)
	{
		cout<<"you are not getting anything study hard";
	}else
	{
		cout<<"you can do better and for appreciation you got a choclate"<<endl;
	}

	return 0;
}