#include <stdio.h>
int v[101];
int main()
{
	printf("Number of elements: ");
	int n;
	scanf("%d", &n);
	printf("Elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", v[i]);

	for (int i = 0; i < n-1;i++)
		for (int j = 1; j < n; j++)
		{		
			if (v[i]>v[j])
			{
				int aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	return 0;
}