#include<iostream>
using namespace std;
 int main()
 {
 	int i,j;
 	char A[]="Palindrome";
 	char B[]="Painting";
 	for(int i=0,j=0;A[i]!='\0'&& B[j]!='\0';i++,j++)
 	if (A[i]!=B[j])
 	break;
 	if (A[i]==B[j])
 	cout<<"match";
 	else if (A[i]<B[j])
 	cout<<"smaller";
 	else 
 	cout<<"greater";
  }
