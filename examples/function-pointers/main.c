#include <stdio.h>
#include <stdlib.h>

struct Shop {
	char *name;
	float score; // 0 to 5.0
};

typedef struct Shop Shop;

int compare_shop (const Shop *a, const Shop *b) {
	if (a->score > b->score) {
		return -1;
	} else if (a->score < b->score) {
		return 1;
	}

	return 0;
}

int main () {
	Shop shops[3];

	shops[0].name = "Shop A";
	shops[0].score = 3.2;

	shops[1].name = "Shop B";
	shops[1].score = 4.5;

	shops[2].name = "Shop C";
	shops[2].score = 4.3;

	// Cast `compare_shop` to a pointer that point to a function with
	// the declaration `int function_name (const void *, const void *)`.
	qsort(shops, 3, sizeof(Shop), (int (*) (const void *, const void *)) compare_shop);

	printf("Shops rank by score:\n");

	for (int i = 0; i < 3; ++i) {
		printf("%d. %s (%.2f)\n", (i + 1), shops[i].name, shops[i].score);
	}

	return 0;
}
