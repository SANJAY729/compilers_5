int hello(int a, int b);
int hi(int a,int b,int c);
int testing(int a,int b, int c);
float some_func(int a,int b,int c,int d);
int main();
int main()
{
	int a=1,b=2,c=3,d=4;
	some_func(a,b,c,d);
	return 0;
}
float some_func(int a,int b,int c,int d)
{
	hi(a,b,c);
	hello(a,b);
	testing(a,b,c);
	return 6*7.0;
}
int testing(int a,int b, int c)
{
	hi(a,b,c);
	hello(a,b);
	return 1+10;
}
int hi(int a,int b,int c)
{
	hello(a,b);
	return 4+12;
}
int hello(int a,int b)
{
	return 1;
}
