#include<iostream>
using namespace std;
 int main()
 {
 	char A[]="how are     you";
 	int count;
 	for(int i=0;i<A[i]!='\0';i++)
 	{
 		//if( A[i]=='a' || A[i]=='e'||A[i]=='i' ||A[i]=='o' ||A[i]=='u')
 		if(A[i]==' '&& A[i-1]!=' ')
 		count++;
	 }
	 count =count+1;
	 cout<<count;
 }
