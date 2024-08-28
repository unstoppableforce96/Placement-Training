# Question 1 - Student Registration
## Implementations

<details>

<summary> C </summary>

```c
#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m, k, s;
        scanf("%d%d%d",&n, &m, &k);
        remaining_seats = m - k;
        if(n <= remainig_seats) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}
```

</details>

<details>

<summary> C++ </summary>

```c++
#include <iostream>
using namespace std;
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    cout << (n <= (m - k) ? "YES\n" : "NO\n");
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;
public class StudentRegistration {
    static boolean canRegister(int seatsRequired, int availableSeats) {
        return seatsRequired <= availableSeats;
    }
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int testCases = read.nextInt();
        for (int currentTestCase = 1; currentTestCase <= testCases; currentTestCase++) {
            int n = read.nextInt();
            int m = read.nextInt();
            int k = read.nextInt();
            System.out.println(canRegister(n, m - k) ? "YES" : "NO");    
        }
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
for _ in range(int(input())):
    n, m, k = map(int, input().split())
    print("YES" if n <= m - k else "NO")
```

</details>

<br><br>

# Question 2 - PDA
## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int pfs = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            pfs += i;
        }
    }
    if (pfs == n) {
        printf("PERFECT");
    }
    else if (pfs < n) {
        printf("DEFICIENT");
    }
    else {
        printf("ABUNDANT");
    }
}
```

</details>

<details>

<summary> C++ </summary>

```c++
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int pfs = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            pfs += i;   
        }
    }
    cout << (pfs < n ? "DEFICIENT" : pfs > n ? "ABUNDANT" : "PERFECT");
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;
public class PDA {
    public static int getProperFactorSum(int n) {
        int properFactorSum = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                properFactorSum = properFactorSum + i;
            }
        }
        return properFactorSum;
    }
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int n = read.nextInt();
        int pfs = getProperFactorSum(n);
        if (pfs > n) {
            System.out.println("ABUNDANT");
        }
        else if (pfs < n) {
            System.out.println("DEFICIENT");
        }
        else {
            System.out.println("PERFECT");
        }
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
def get_proper_factor_sum(n: int) -> int:
    proper_factors = [i for i in range(1, n // 2 + 1) if n % i == 0]
    return sum(proper_factors)
    
n = int(input())
pfs = get_proper_factor_sum(n)
if pfs == n:
    print("PERFECT")
elif pfs < n:
    print("DEFICIENT")
else:
    print("ABUNDANT")
```

</details>
