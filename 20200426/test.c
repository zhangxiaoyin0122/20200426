#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//鸡兔同笼问题
int main() {
	int T;
	int m;//腿的数量
	int n;//鸡和兔的数量
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &n, &m);
		if ((m - 2 * n) >= 0 && (m - 2 * n) % 2 == 0 && (4 * n - m) > 0 && (4 * n - m) % 2 == 0)
			printf("鸡:%d 兔子:%d", (4 * n - m) / 2, (m - 2 * n) / 2);
		else
			printf("No answer\n");
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//开灯问题 
int main() {
	int n, k;//n:灯的数量 k:人的数量
	int flag[1001] = { 0 };
	scanf("%d %d", &n, &k);
	memset(flag, 0, sizeof(int) * 1001);
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (j%i == 0) {
				if (flag[j - 1] == 0)
					flag[j - 1] = 1;
				else
					flag[j - 1] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (flag[i] == 1) {
			printf("%d  ", i + 1);
		}
	}
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int ispalindrome(int i) {
	int k = i - 1;
	int arr[] = {0};
	while ((arr[i] == arr[k]) && i < k) {
		i++;
		k--;
		if (i > k)
			return 1;
		else
			return 0;
	}
}
int main() {
	int arr[6] = { 0,1,2,3,2,1 };
	int m = 0;
	for (int i = 1; i <= 3; i++) {
		if (ispalindrome(i))
			m++;
	}
	if (m == 3)
		printf("YES\n");

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, a, b;
	int sum[100] = { 0 };
	while (scanf("%d %d", &a, &b) != EOF) {//如何跳出循环
		sum[i++] = a + b;
	}
	for (int j = 0; j < i; j++) {
		printf("%d\n", sum[j]);
	}
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//
void funnc(int n) {
	for (int i = 0; n >= i; n--) {
		printf("%d\n", n);
		Sleep(100);
	}
}
int main() {
	funnc(1000000);
	system("pause");
	return 0;
}