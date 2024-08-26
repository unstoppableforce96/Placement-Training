# Question 1 - Sharing is Caring
## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>
int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    printf("%s", n >= x * (x + 1) / 2 ? "YES" : "NO");
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
    int n, x;
    cin >> n >> x;
    if (n >= x * (x + 1) / 2) {
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
public class SharingIsCaring {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int n = read.nextInt();
        int x = read.nextInt();
        if (n >= x * (x + 1) / 2) {
            System.out.print("YES");
        }
        else {
            System.out.print("NO");
        }
    }
}
```

</details>

<details>

<summary> Python </summary>

```python
n, x = map(int, input().split())
if n >= x * (x + 1) // 2:
    print("YES")
else:
    print("NO");
```

</details>

<br><br>

# Question 2 - First and Last Pair
## Implementations

<details>

<summary> C </summary>

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        printf("%d %d ", arr[i], arr[j]);
    }
    
    if (n % 2 != 0) {
        printf("%d %d", arr[n / 2], 0);
    }
    return 0;
}
```

</details>

<details>

<summary> C++ </summary>

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int x[n];
    for(i = 0; i < n; i++) {
      cin >> x[i];
    }
      
    for(i = 0; i < n / 2; i++)
    {
        cout << x[i] << " "<< x[n - i - 1] <<" ";
    }
    if(n % 2 == 1)
    {
        cout << x[n / 2]<< " " << 0;
    }
    return 0;
}
```

</details>

<details>

<summary> Java </summary>

```java
import java.util.*;
public class FirstandLastpair {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            System.out.print(arr[i] + " " + arr[j] + " ");
        }
        if (n % 2 == 1) {
            System.out.print(arr[n / 2] + " " + 0);
        }
	}
}
```

</details>

<details>

<summary> Python </summary>

```python
n = int(input())
d = list(map(int,input().split()))
i, j = 0, n - 1
while i < j:
    print(d[i], d[j], end=" ")
    i += 1
    j -= 1
if n % 2:
    print(d[i],0)
```

</details>
