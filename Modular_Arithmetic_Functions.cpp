/*
    This File Contains Functions pertaining to Modular Arithmetic.
    It also contains some combinatorial functions that give modular output as the values can be huge.

    On any confusion in the datatype names or macros, refer to "template.cpp".
*/

/*MODULAR EXPONENTIATION*/

long long po(long long _x_, unsigned long long _y_, unsigned long long _mod_) {
	if (_y_ == 0)
		return 1;
	long long _p_ = po(_x_, _y_ / 2, _mod_) % _mod_;
	_p_ = (_p_ * _p_) % _mod_;
	return ((_y_ & 1) ? (_x_ * _p_) % _mod_ : _p_);
}

/*MODULAR INVERSE*/

long long mi(long long _a_, long long _mod_) {
	return po(_a_, (unsigned long long)(_mod_ - 2), (unsigned long long)_mod_);
}

/*MODULAR BINOMIAL COEFFICIENTS nCr % (10e9+7)*/

#define fu 2005
#define MOD 1000000007
long long C[fu][fu] = {0};
void co()
{
	C[0][0]=1;
	rep(i,1,2000)
	{
		C[i][0]=1;
		C[i][i]=1;
		rep(j,1,i)
			C[i][j]=(C[i-1][j-1]+C[i-1][j])%MOD;
	}
}
