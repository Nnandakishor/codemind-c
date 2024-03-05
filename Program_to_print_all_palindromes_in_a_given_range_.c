#include <stdio.h>
int isPalindrome(int num) 
{
    int ori = num;
    int rev = 0;

    while (num > 0) 
	{
        int r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }

    return ori == rev;
}

void printPalindromesInRange(int a, int b) 
{
	int i;
    for (i =a; i <=b; i++)
	 {
        if (isPalindrome(i)) 
		{
            printf("%d ", i);
        }
    }
}

int main() 
{
    int start, end;
    scanf("%d %d", &start, &end);
    if (start > end) 
	{
        printf("Invalid
");
    } else 
	{
        printPalindromesInRange(start, end);
    }

    return 0;
}
