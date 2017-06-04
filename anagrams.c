#include<stdio.h>
#include<string.h>


void swap(char *s, int i, int j)
{
	char temp;

	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
}

void anag(char* s, int i, int j)
{
	if(i == j){
		printf("\n%s",s);
		return;
	}

	anag(s, i+1, j);

	int k;
	for (k = i+1; k <= j; k++) {
		swap(s, i, k);
		anag(s, i+1, j);
		swap(s, i, k);
	} 


}

int main ()
{
	char s[100];
	unsigned int n;	

	printf("\nEnter the string: ");
	scanf("%s",s);

	n = strlen(s);
	
	anag(s, 0, n-1);

	return 0;
}
