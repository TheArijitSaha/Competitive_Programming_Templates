/*
    This File Contains functions related to Segment Trees.
	More will be added in the future ;).

    On any confusion in the datatype names or macros, refer to "template.cpp".
*/

/*GCD SEGMENT TREE*/

vll tree(1000000),a(100005);
ll Create(ll s,ll e,ll i)
{
	if(s==e)
	{
		tree[i]=a[s];
		return tree[i];
	}
	tree[i]=__gcd(Create(s,(s+e)/2,i*2+1),Create((s+e)/2+1,e,i*2+2));
	return tree[i];
}
ll Query(ll s,ll e,ll l,ll r,ll i)
{
	if((s>r)||(e<l))return 0;
	if((l<=s)&&(r>=e))return tree[i];
	return __gcd(Query(s,(e+s)/2,l,r,i*2+1),Query((e+s)/2+1,e,l,r,i*2+2));
}
