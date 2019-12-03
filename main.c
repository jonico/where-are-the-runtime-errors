int where_are_the_runtime_errors (int input) 
{

  int x, y, k;
  
  k = input / 100;
  x = 2;
  y = k + 5;
  
  while (x < 10)
  {
    x++;
    y = y +3;
  }
  
  if ((3*k + 100) > 43)
  {
    y++;
    x = x / (x -y);
  }
  
  return x;
  
}

int main(int argc, char *argv[])
{
  return where_are_the_runtime_errors (argc); 
}
