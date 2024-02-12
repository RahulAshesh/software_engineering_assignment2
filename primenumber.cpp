#include <iostream>
#include <cmath> // Include cmath for using sqrt function
using namespace std;

int main() {

  int n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n <= 1) {
    is_prime = false;
  } else {
    // loop to check if n is prime
    for (int i = 2; i <= sqrt(n); ++i) {
      if (n % i == 0) {
        is_prime = false;
        break;
      }
    }
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
