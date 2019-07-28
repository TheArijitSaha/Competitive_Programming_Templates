/*
    This File Contains Functions pertaining to Prime Number Sieves:
		--	Sieve of Eratosthenes
		--	Linear implementation of Sieve of Eratosthenes
		--	Euler's Sieve
			--	with an example function how to use the seive to print prime factors of a number.

    On any confusion in the datatype names or macros, refer to "template.cpp".
*/

/*SEIVE OF ERATOSTHENES*/

#define fu 1000000
bool p[fu];
void se()
{
	rep(i,2,fu)
		p[i]=true;
	p[0]=p[1]=false;
	rep(i,2,fu)
	{
		ll j=2;
		if(!p[i])
			continue;
		while(j*i<fu)
			p[i*j++]=false;
	}
}

/*LINEAR IMPLEMENTATION OF SEIVE OF ERATOSTHENES*/

#define fu 1000000
bool p[fu];
vll pri;
void se()
{
	rep(i,2,fu)
		p[i]=true;
	for(int i=2;i<=fu;++i)
	{
		if(p[i])
			pri.eb(i);
		for(int j=0;i*pri[j]<=fu;++j)
		{
			p[i*pri[j]]=false;
			if(i%pri[j]==0)
				break;
		}
	}
}

/*EULER'S SEIVE FOR PRIME FACTORISATION*/

#define fu 15000000
ll fac[fu];
vll pri;
void se()
{
	rep(i,2,fu)
	{
		if(!fac[i])
			fac[i]=i,pri.eb(i);
		for(ll j=0;i*pri[j]<fu;++j)
		{
			fac[i*pri[j]]=pri[j];
			if(i%pri[j]==0)
				break;
		}
	}
}
void prifact(ll num)
{
	while(num>1)
	{
		ll x=fac[num];
		cout<<x<<' ';
		while(fac[num]==x)
			num/=x;
	}
}
