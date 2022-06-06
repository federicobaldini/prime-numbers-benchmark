// C prime number checker
int is_prime(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      return 0;
    }
  }
  return (number != 1 && number != 0) ? 1 : 0;
};

