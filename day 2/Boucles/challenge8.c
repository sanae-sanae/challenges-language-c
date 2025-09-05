#include <stdio.h>
int main() {
    int n, x, low, high, mid, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == x) { found = 1; break; }
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    if (found) printf("Trouve");
    else printf("Pas trouve");
    return 0;
}
