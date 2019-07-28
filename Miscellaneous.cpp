/*
    This File Contains the non-recursive implementation of BFS and DFS.

    On any confusion in the datatype names or macros, refer to "template.cpp".
*/

/*Kth Smallest in an Unsorted Array*/

//s:    starting Index
//e:    ending Index
ll kele(vector<ll> &a,ll s,ll e,ll k)
{
	if((k<0)||(k>e-s+1))
		return INT_MAX;
	ll cs=s+1,piel=a[s];
	rep(i,s+1,e+1)
		if(a[i]<a[s])
			swap(a[i],a[cs++]);
	swap(a[s],a[cs-1]);
	if(cs-s==k)
		return a[cs-1];
	if(cs-s>k)
		return kele(a,s,cs-2,k);
	return kele(a,cs,e,k-cs+s);
}

/*PRINT BINARY FORM OF A NUMBER*/

void printbin(llu x)
{
	bool start=false;
	llu y=(((llu)1)<<63);
	urep(i,63,0)
	{
		if((start)||(x/y))
			cout<<x/y;
		if(x/y)
			start=true;
		x%=y;
		y>>=1;
	}
	if(!start)
		cout<<0;
	cout<<endl;
}
