# accumulate() in C++ STL
---
In C++, **accumulate()** function addsd (or any other binary operation) all the elements of the given range and return its sum as a result. It takes an initial value from which it starts addition

## Syntax
> **accumulate(start, end, initial_value, binary_function)**

## C++ Code

```c++                             
#include <iostream>
using namespace std;
int main()
{
  int tt;
  cin >> tt;
  cout << tt * 2;
  endl;
}
```

### Output
40

## Equation
$$ \sum_{i=0}^{n}i^2 $$

# Code

```java
public class SumofSquares {
  public static void main(String[] args) {
    int n;
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        sum += i;
      }
    }
    System.out.println(sum);
  }
}
```

> **Input:**
> 12
> **Output:**
> 500



Helo