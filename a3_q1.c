#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

long long int loop1(int n);
long long int loop2(int n);
long long int loop3(int n);
long long int loop4(int n);

int main(){
    clock_t start, finish;
	float elapsed=0;
	long long int sum = 0;
	
	/*loop1 time calculating*/
	start = clock();
	sum = loop1(10);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("First Loop:  n=10\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
	
	start = clock();
	sum = loop1(20);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("First Loop:  n=20\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop1(30);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("First Loop:  n=30\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
	
	start = clock();
	sum = loop1(50);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("First Loop:  n=50\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop1(100);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("First Loop:  n=100\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    /*loop2 time calculating*/
    start = clock();
	sum = loop2(10);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("\nSecond Loop:  n=10\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    
	start = clock();
	sum = loop2(20);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Second Loop:  n=20\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
	
	start = clock();
	sum = loop2(30);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Second Loop:  n=30\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
	
	start = clock();
	sum = loop2(50);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Second Loop:  n=50\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);

	start = clock();
	sum = loop2(100);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Second Loop:  n=100\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);

	/*loop3 time calculating*/
	start = clock();
	sum = loop3(10);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("\nThird Loop:  n=10\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    
	start = clock();
	sum = loop3(20);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Third Loop:  n=20\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
	
	start = clock();
	sum = loop3(30);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Third Loop:  n=30\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop3(50);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Third Loop:  n=50\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop3(100);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Third Loop:  n=100\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    /*loop4 time calculating*/
    start = clock();
	sum = loop4(10);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("\nFourth Loop:  n=10\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop4(20);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Fourth Loop:  n=20\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop4(30);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Fourth Loop:  n=30\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop4(50);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Fourth Loop:  n=50\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
    
    start = clock();
	sum = loop4(100);
	finish = clock();
	elapsed = (double)(finish - start) / CLOCKS_PER_SEC;	
	printf("Fourth Loop:  n=100\n");
    printf("sum = %lld \n", sum);
    printf("time = %lf \n", elapsed);
	return 0;
}

long long int loop1(int n)
{
	int i, j;
	int sum=0;
	for (i=1; i<=n; i++)
	{
		for(j=1;j<=n;j++)
		{
			sum++;
    	}
	}
	
	return sum;
}

long long int loop2(int n)
{
	int i, j;
	int sum=0;
	for (i=1; i<=n; i++)
		{
			for(j=1;j<=i;j++)
			{
				sum++;
			}
		}
	return sum;
}

long long int loop3(int n)
{
	int i, j;
	int sum=0;
	int k=0;
    for (i=1; i<=n; i++)
	{
		for(j=1;j<=(i*i*i);j++)
		{
			for(k=1;k<=j;k++)
			{
				sum++;
			}
    	}
	}
	return sum;
}


long long int loop4(int n)
{
	int i, j;
	int sum=0;
	int k=0;
    for (i=1; i<=n; i++)
	{
		for(j=1;j<=(i*i);j++)
		{
			if(j%i==0)
			{
				for(k=1;k<=j;k++)
				{
					sum++;
				}
			}
    	}
	}
	return sum;
}


/*******************************************
First Loop:  n=10
sum = 100 
time = 0.000000 
First Loop:  n=20
sum = 400 
time = 0.000000 
First Loop:  n=30
sum = 900 
time = 0.000000 
First Loop:  n=50
sum = 2500 
time = 0.000000 
First Loop:  n=100
sum = 10000 
time = 0.000000 

Second Loop:  n=10
sum = 55 
time = 0.000000 
Second Loop:  n=20
sum = 210 
time = 0.000000 
Second Loop:  n=30
sum = 465 
time = 0.000000 
Second Loop:  n=50
sum = 1275 
time = 0.000000 
Second Loop:  n=100
sum = 5050 
time = 0.000000 

Third Loop:  n=10
sum = 990715 
time = 0.000000 
Third Loop:  n=20
sum = 108249955 
time = 0.380000 
Third Loop:  n=30
sum = 1750573720 
time = 6.320000 
Third Loop:  n=50
sum = 59788748825 
time = 203.470001 
Third Loop:  n=50
sum = 59788748825 
time is too long

Fourth Loop:  n=10
sum = 1705 
time = 0.000002 
Fourth Loop:  n=20
sum = 23485 
time = 0.000232 
Fourth Loop:  n=30
sum = 112840 
time = 0.002243
Fourth Loop:  n=50
sum = 834275 
time = 0.008542
Fourth Loop:  n=50
sum = 12920425 
time = 0.070353


*/
