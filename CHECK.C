#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,X,Y,M,N;
    printf("请输入十三位条形码：");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d\n",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m);
    X=a+c+e+g+i+k;
    Y=b+d+f+h+j+l;
    M=Y*3+X;
    N=9-((M-1)%10); 
    if (N==m)
    {
    	printf("TURE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}
