//#include <stdio.h>
//int main()
//{
//	int num1,num2,sum;
//	scanf("%d%d",&num1,&num2);
//	sum = num1+ num2;
//    printf("%d",sum);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char arr1[] = "a,b,c";
//	char arr2[] = { 'a','b','c' };
//	printf(" % d\n", strlen(arr1));
//	printf(" % d\n", strlen(arr2));
//	return 0;
//}


#include<stdio.h>
int main()
{
	int m,n,k=0,y=0,i;
	char strb[100],stra[100];
	gets(stra);
	scanf("%d%d",&m,&n);
	while(stra[k]!=0)k++;
	if(m+n<k)
		{
			for(i=m;i<n+m;i++)
		{
			strb[y]=stra[i];
			y++;
		}
		
		for(i=0;i<y;i++)
			printf("%c",strb[i]);
		}
return 0;
}