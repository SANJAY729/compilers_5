void func2(int temp, int elements);
int func(int int_var, int elements,int value);
int main();

void func2(int temp, int elements)
{
  temp = elements;
  temp = temp+1;
  return;
}

int func(int int_var, int elements,int value)
{
  int i ,passes = 0 ;
  if(int_var>= value)
    passes++;
  return(passes);
}

int main()
{
  int n=3;
  int i;
  for(i=0;i<n;i++)
    i=i+1;
  if(n>=0)
  {
    int int_var=3;
    int result;
    func2(int_var,3);
    result = func(int_var,4,3);
  }
  else
  {
    int int_var=11;
    int result;
    func2(int_var,11);
  }
  return 0;
}
