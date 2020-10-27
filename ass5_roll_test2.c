int a=9;
int b=10;
int sum(int a,int b);
int mod(int a, int b);
int mod2(int a,int b);
int divide(int a,int b);
int main();
int main()
{
	int ar1[5][10];
	float ar2[10];
	float y;
	int z;
	int x,y,z,w;
	x = sum(a,b);
	y = mod(a,b);
	z = divide(a,b);
	w = mod2(a,b);
}
int sum(int a,int b)
{
	float ar2[10];
	int ans=a+b;
	return ans;
}

int mod(int a,int b)
{
	float armod[3];
	float ans=a%b;
	return ans;
}

int divide(int a,int b)
{
	int ans;
	if(b!=0)
		ans=a/b;
	else
		ans=-1;
	return ans;
}
int mod2(int a,int b)
{
	int ans;
	if(a>b)
		ans=a-divide(a,b);
	else
		ans=b-divide(a,b);
	return ans;
}
