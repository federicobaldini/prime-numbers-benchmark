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

// Check numbers 0 - {primes}
int check_primes(int number)
{
  int count = 0;
  for (int i = 0; i < number; i++)
  {
    if (is_prime(i))
    {
      count += 1;
    }
  }
  return count;
};
