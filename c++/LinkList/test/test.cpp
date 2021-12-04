#include<cstdio>
int d_g(int n)
{
	if(n==1||n==0)  return 1;
	return d_g(n-1)+d_g(n-2);
}
int main()
{
	int x;
	while(scanf("%d",&x)!=-1)
	    printf("%d\n",d_g(x));
}
