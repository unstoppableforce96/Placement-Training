# Question 1 - Measuring the Object
## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>
int main() {
    int w, a, b, c;
    scanf("%d%d%d%d", &w, &a, &b, &c);
    int z = a + b + c;
    if (w == a || w == b || w == c || w == z || w == z - a || w == z - b || w == z - c) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
```

</details>

<details>

<summary> C++ </summary>

```c++
#include <iostream>
using namespace std;
int main() {
    int w, a, b, c;
    cin >> w >> a >> b >> c;
    if (w == a || w == b || w == c || w == a + b || w == b + c || w == a + c || w == a + b + c) {
        cout << "YES";
    } 
    else {
        cout << "NO";
    }
    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;
public class MeasuringTheObject {
    public static boolean isPossible(int[] possibleWeights, int weight) {
        for (int i = 0; i < possibleWeights.length; i++) {
            if (possibleWeights[i] == weight) {
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int w = read.nextInt();
        int a = read.nextInt();
        int b = read.nextInt();
        int c = read.nextInt();
        int[] totalPossibleWeights = {a, b, c, a + b, b + c, a + c, a + b + c};
        System.out.print(isPossible(totalPossibleWeights, w) ? "YES" : "NO");
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
w, a, b, c = map(int, input().split())
x = a + b + c
pos_weights = [a, b, c, x - a, x - b, x - c, x]
if w in pos_weights:
    print('YES')
else:
    print('NO')
```

</details>

<br><br>

# Question 2 - Greatest Common Divisor
## Implementations

<details>

<summary> C </summary>

```c
// Normal Apporach
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int gcd = 1;
	for (int i = 1; i <= a; i++) {
	    if (a % i == 0 && b % i == 0) {
	        gcd = i;
	    }
	}
	printf("%d", gcd);
	return 0;
}
```

</details>

<details>

<summary> C++ </summary>

```c++
// Euclid's Approach using Subtraction
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    while (a && b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    cout << (a == 0 ? b : a);
    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
// Euclid's Approach using Modulo Division
import java.util.Scanner;
public class GCD {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int a = read.nextInt();
        int b = read.nextInt();
        while (b != 0) {
            int c = a % b;
            a = b;
            b = c;
        }
        System.out.print(a);
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
# Using Euclid + Recursion
def GCD_using_euclid_rec(a, b):
    if not b:
        return a
    return GCD_using_euclid_rec(b, a % b)
    
    
a, b = map(int, input().split())
print(GCD_using_euclid_rec(a, b))
```

</details>
