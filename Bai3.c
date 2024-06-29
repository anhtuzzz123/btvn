#include<stdio.h>
#include<math.h>
int scs(long long n)
{
	int cnt = 0;
	while(n)
	{
		cnt++;
		n /= 10;
	}
	return cnt;
}
int UCLN(long long a, long long b)
{
	int r = a % b;
	while(r != 0)
	{
		a = b;
		b = r;
		if(b == 0)
		{
			return b;
		}
		r = a % b;
	}
	return b;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	long long t, d;
	if(scs(n) % 2 == 0)
	{
		int k = scs(n) / 2;
		int l = pow(10, k);
		t = n / l;
		d = n % l;
	}
	else // lay nua ben phai nhieu hon 1 chu so
	{
		int k = scs(n) - scs(n) / 2;

		int p = pow(10, k);
		t = n / p;
		d = n % p;
	}
	printf("%d", UCLN(t, d));
}
