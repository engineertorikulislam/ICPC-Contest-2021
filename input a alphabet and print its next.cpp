#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a Alphabet=");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{ ch=ch+1;
	  printf("Next Alphabet=%c",ch);
	}
	else if(ch>=97&&ch<=122)
	{ ch=ch+1;
	  printf("Next Alphabet=%c",ch);
	}
	else
	printf("Wrong enter");
	getch();
}
