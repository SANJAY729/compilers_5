/*void time_pass2(int temp, int elements);
int time_pass(int int_var, int elements,int value);
int main();

void time_pass2(int temp, int elements)
{
  temp = elements;
  temp = temp+1;
  return;
}

int time_pass(int int_var, int elements,int value)
{
  int i ,passes = 0 ;
  if(int_var>= value)
    passes++;
  return(passes);
}

int main()
{
  int n=3;
  for(int i=0;i<n;i++)
    i=i+1;
  if(n>=0)
  {
    int int_var=3;
    int result;
    time_pass2(int_var,3);
    result = time_pass(int_var,4,3);
  }
  else
  {
    int int_var=11;
    int result;
    time_pass2(int_var,11);
  }
}
*/
int main();
int main(){
  int a = 10;
  int b = 5;
  if(a>b){
    a = a+1;
  }
  else{
    b = b+1;
  }
}
