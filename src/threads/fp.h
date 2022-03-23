#define F_NUM (1<<14)
#define INT_MIN (-(1 << 31))
#define INT_MAX ((1 << 31)-1)

static int n_to_fp(int n){
	int fp = F_NUM * n;
	return fp;
}

static int fp_to_n(int f){
	int n = f / F_NUM;
	return n;
}

static int fp_to_n_rounding(int f){
	int n;
	if (f >= 0)
		n = (f + F_NUM / 2) / F_NUM;
	else
		n = (f - F_NUM / 2) / F_NUM;
	return n;
}

static int add_fp(int x, int y){
	return x + y;
}

static int sub_fp(int x, int y){
	return x - y;
}

static int add_fp_n(int f, int n){
	return f + F_NUM * n;
}

static int sub_fp_n(int f, int n){
	return f - F_NUM * n;
}

static int mul_fp(int x, int y){
	return ((int64_t) x ) * y / F_NUM;
}

static int mul_fp_n(int f, int n){
	return f * n;
}

static int div_fp(int x, int y){
	return ((int64_t) x) * F_NUM / y;
}

static int div_fp_n(int f, int n){
	return f / n;
}
