# Question 1 - Rock and the orders

## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>

int main() {
    int D, C;
    int A1, A2, A3, B1, B2, B3;
    
    // Read D and C
    scanf("%d %d", &D, &C);
    
    // Read costs of items on the first day
    scanf("%d %d %d", &A1, &A2, &A3);
    
    // Read costs of items on the second day
    scanf("%d %d %d", &B1, &B2, &B3);
    
    // Calculate total cost on the first day and the second day
    int day1_total = A1 + A2 + A3;
    int day2_total = B1 + B2 + B3;
    
    // Calculate total cost without the coupon
    int without_coupon = day1_total + day2_total + 2 * D;
    
    // Calculate total cost with the coupon
    int with_coupon = day1_total + day2_total + C;
    if (day1_total < 150) with_coupon += D;
    if (day2_total < 150) with_coupon += D;
    
    // Check if buying the coupon is beneficial
    if (with_coupon < without_coupon)
        printf("YES\n");
    else
        printf("NO\n");
    
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
    int D, C;
    int A1, A2, A3, B1, B2, B3;
    
    // Read D and C
    cin >> D >> C;
    
    // Read costs of items on the first day
    cin >> A1 >> A2 >> A3;
    
    // Read costs of items on the second day
    cin >> B1 >> B2 >> B3;
    
    // Calculate total cost on the first day and the second day
    int day1_total = A1 + A2 + A3;
    int day2_total = B1 + B2 + B3;
    
    // Calculate total cost without the coupon
    int without_coupon = day1_total + day2_total + 2 * D;
    
    // Calculate total cost with the coupon
    int with_coupon = day1_total + day2_total + C;
    if (day1_total < 150) with_coupon += D;
    if (day2_total < 150) with_coupon += D;
    
    // Check if buying the coupon is beneficial
    if (with_coupon < without_coupon)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;

public class RockOrders {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read D and C
        int D = scanner.nextInt();
        int C = scanner.nextInt();
        
        // Read costs of items on the first day
        int A1 = scanner.nextInt();
        int A2 = scanner.nextInt();
        int A3 = scanner.nextInt();
        
        // Read costs of items on the second day
        int B1 = scanner.nextInt();
        int B2 = scanner.nextInt();
        int B3 = scanner.nextInt();
        
        // Calculate total cost on the first day and the second day
        int day1_total = A1 + A2 + A3;
        int day2_total = B1 + B2 + B3;
        
        // Calculate total cost without the coupon
        int without_coupon = day1_total + day2_total + 2 * D;
        
        // Calculate total cost with the coupon
        int with_coupon = day1_total + day2_total + C;
        if (day1_total < 150) with_coupon += D;
        if (day2_total < 150) with_coupon += D;
        
        // Check if buying the coupon is beneficial
        if (with_coupon < without_coupon)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
# Read D and C
D, C = map(int, input().split())

# Read costs of items on the first day
A1, A2, A3 = map(int, input().split())

# Read costs of items on the second day
B1, B2, B3 = map(int, input().split())

# Calculate total cost on the first day and the second day
day1_total = A1 + A2 + A3
day2_total = B1 + B2 + B3

# Calculate total cost without the coupon
without_coupon = day1_total + day2_total + 2 * D

# Calculate total cost with the coupon
with_coupon = day1_total + day2_total + C
if day1_total < 150:
    with_coupon += D
if day2_total < 150:
    with_coupon += D

# Check if buying the coupon is beneficial
if with_coupon < without_coupon:
    print("YES")
else:
    print("NO")
```

</details>

<br><br>

# Question 2 - Pole

## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>

int main() {
    int N;
    
    // Read the number of poles
    scanf("%d", &N);
    
    int poles[N];
    
    // Read the height of each pole
    for (int i = 0; i < N; i++) {
        scanf("%d", &poles[i]);
    }
    
    int first_pole_height = poles[0];
    int position = -1;
    
    // Check for the first pole taller than the first one from the left
    for (int i = 1; i < N; i++) {
        if (poles[i] > first_pole_height) {
            position = i + 1; // Adding 1 to make it 1-based index
            break;
        }
    }
    
    // Output the position or -1 if no such pole exists
    printf("%d\n", position);
    
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
    int N;
    
    // Read the number of poles
    cin >> N;
    
    int poles[N];
    
    // Read the height of each pole
    for (int i = 0; i < N; i++) {
        cin >> poles[i];
    }
    
    int first_pole_height = poles[0];
    int position = -1;
    
    // Check for the first pole taller than the first one from the left
    for (int i = 1; i < N; i++) {
        if (poles[i] > first_pole_height) {
            position = i + 1; // Adding 1 to make it 1-based index
            break;
        }
    }
    
    // Output the position or -1 if no such pole exists
    cout << position << endl;
    
    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.Scanner;

public class PoleHeight {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of poles
        int N = scanner.nextInt();
        
        int[] poles = new int[N];
        
        // Read the height of each pole
        for (int i = 0; i < N; i++) {
            poles[i] = scanner.nextInt();
        }
        
        int firstPoleHeight = poles[0];
        int position = -1;
        
        // Check for the first pole taller than the first one from the left
        for (int i = 1; i < N; i++) {
            if (poles[i] > firstPoleHeight) {
                position = i + 1; // Adding 1 to make it 1-based index
                break;
            }
        }
        
        // Output the position or -1 if no such pole exists
        System.out.println(position);
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
# Read the number of poles
N = int(input())

# Read the heights of the poles
poles = list(map(int, input().split()))

first_pole_height = poles[0]
position = -1

# Check for the first pole that is taller than the first one
for i in range(1, N):
    if poles[i] > first_pole_height:
        position = i + 1  # Convert 0-based index to 1-based index
        break

# Print the result
print(position)
```

</details>
