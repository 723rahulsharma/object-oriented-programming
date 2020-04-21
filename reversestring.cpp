#include<iostream>
using namespace std;
 int main()
 {
 	char A[]="WELCOME";
 	char t;
 	int i,j;
 	for(i=0;A[i]!='\0';i++)
 	{
	}
	i=i-1;
	for(j=0;j<i;j++,i--)
	{
		t=A[j];
		A[j]=A[i];
		A[i]=t;
	}
    cout<<A;
}
