#include <stdio.h>
int LCM(int x, int y, int max);

int main() {
	int x, y, max;
	printf ("Enter two positive integers: ");
	scanf ("%d %d", &x, &y);

	max = (x > y) ? x : y;
	int ans = LCM(x, y, max);
	printf ("\nThe LCM of %d and %d = %d. ", x, y, ans);

	return 0;
}

int LCM ( int x, int y, int max) {

	while (1) {
		if (max % x == 0 && max % y == 0) {
			return max;
			break;
		} else {
			++max;
		}
	}
	}
