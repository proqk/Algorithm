#include <stdio.h>
using namespace std;
int n, m, sum[100001];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        sum[i + 1] = sum[i] + a;
    }

    for (int i = 0; i < n; ++i) {
        int s, e;
        scanf("%d %d", &s, &e);
        printf("%d\n", sum[e] - sum[s - 1]);
    }
}
