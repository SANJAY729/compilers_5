int a=91;
int b=102;
int sum(int a,int b);
int diff(int a, int b);
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
	y = diff(a,b);
	z = divide(a,b);
	return 0;
}
int sum(int a,int b)
{
	float ar2[10];
	int ans=a+b;
	return ans;
}

int diff(int a,int b)
{
	float ans=a-b;
	return ans;
}

int divide(int a,int b)
{
	int ans;
	if(b!=0)
		ans = a/b;
	else
		ans=-1;
	ans = ans - 4;
	return ans;
}
