#include<stdio.h>

long get_lint()
{ 
	long n =0;
	register int c = getchar_unlocked();
	while(c<'0' || c>'9') c = getchar_unlocked();
	while(c>='0' && c<='9') {
		n = n * 10 + c-'0';
		c = getchar_unlocked();
	}
	return n;
}
void put_lint (long li, char lc) 
{
	if (0 == li) 
	{
		putchar_unlocked('0'); putchar_unlocked(lc); 
		return;
	} else if (li < 0) {
		putchar_unlocked ('-'); li *= -1;
	}
	char s[24];
	auto idx =0;
	for (; li; idx++) 
	{
		s[idx] = '0' + li % 10;
		li /= 10;
	}
	for (auto jdx=idx-1; jdx>=0; jdx--)
	{
		putchar_unlocked(s[jdx]);
	}
	if(lc) putchar_unlocked(lc);
	return;
}
 
 
int main()
{
     long N = get_lint();
	 long  K = get_lint();
	 long  kOdd = K %2;
     long kMax =-1;
	if (1==N && kOdd) { put_lint(kMax, 0); return 0; }
    if (K > N) // Max of N
        for (auto ni=0; ni<N; ni++) {
            long num = get_lint();
            if (num > kMax) kMax = num;
        }
    else // Max 
        for (auto ni=0; ni<=K; ni++) {
            long num = get_lint();
            if (kOdd == ni%2) {
                if (num > kMax) kMax = num;
            }
        }
    put_lint(kMax, 0);
	return 0;
}