#include<iostream>
#include<string>
using namespace std;

struct student{
	string name;
	int roll;
	char grade;
};

int main()
{ 
student s;
	cout<<" Enter the name of the student : ";
	cin>>s.name;
	
	cout<<" Enter the roll no : ";
	cin>>s.roll;
	
	cout <<"Enter the grade of the student : ";
	cin >>s.grade;
	
	cout<< " Name of the student is "<<s.name<<endl;
	cout<<" Roll no : "<<s.roll<<endl;
	cout<<" Grade of the student : "<<s.grade<<endl;
	
	return 0;
}
