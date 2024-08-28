# Question 1 - Student Registration

## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);
        if (M - K >= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
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
    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        if (M - K >= N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;

public class StudentRegistration {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for (int i = 0; i < T; i++) {
            int N = scanner.nextInt();
            int M = scanner.nextInt();
            int K = scanner.nextInt();
            if (M - K >= N) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
# Read the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    # Read N, M, K
    N, M, K = map(int, input().split())

    # Calculate remaining capacity
    remaining_capacity = M - K

    # Determine if the group can register
    if remaining_capacity >= N:
        print("YES")
    else:
        print("NO")
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
    int N, sum = 0;
    scanf("%d", &N);

    // Calculate the sum of proper factors
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }

    // Determine the type of number
    if (sum == N) {
        printf("PERFECT\n");
    } else if (sum < N) {
        printf("DEFICIENT\n");
    } else {
        printf("ABUNDANT\n");
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
    int N, sum = 0;
    cin >> N;

    // Calculate the sum of proper factors
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }

    // Determine the type of number
    if (sum == N) {
        cout << "PERFECT" << endl;
    } else if (sum < N) {
        cout << "DEFICIENT" << endl;
    } else {
        cout << "ABUNDANT" << endl;
    }

    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;

public class NumberType {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int sum = 0;

        // Calculate the sum of proper factors
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                sum += i;
            }
        }

        // Determine the type of number
        if (sum == N) {
            System.out.println("PERFECT");
        } else if (sum < N) {
            System.out.println("DEFICIENT");
        } else {
            System.out.println("ABUNDANT");
        }

        scanner.close();
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
# Read the input number
N = int(input())

# Calculate the sum of proper factors
sum_of_factors = sum(i for i in range(1, N) if N % i == 0)

# Determine the type of number
if sum_of_factors == N:
    print("PERFECT")
elif sum_of_factors < N:
    print("DEFICIENT")
else:
    print("ABUNDANT")
```

</details>
