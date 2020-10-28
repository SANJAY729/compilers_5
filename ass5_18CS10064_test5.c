int hello(int a, int b);
int hi(int a,int b,int c);
int lol(int a,int b, int c);
float tempo(int a,int b,int c,int d);
int main();
int main()
{
	int a=6,b=7,c=8,d=9;
	tempo(a,b,c,d);
	return 0;
}
float tmepo(int a,int b,int c,int d)
{
	hi(a,b,c);
	hello(a,b);
	lol(a,b,c);
	return 2.0*7;
}
int lol(int a,int b, int c)
{
	hi(a,b,c);
	hello(a,b);
	return 3+4;
}
int hi(int a,int b,int c)
{
	hello(a,b);
	return 3+9;
}
int hello(int a,int b)
{
	return 1;
}
