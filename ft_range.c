#include <stdlib.h>

int	*ft_range(int start, int end)
{
	long int i = 0;
	long int s = start;
	long int e = end;
	long int count = s - e;
	if (count < 0)
		count *= -1;
	int *arr = (int *)malloc((count + 1) * sizeof(int));
	if (end < 0)
	{
		while (i <= count)
			arr[i++] = start--;
	}
	else
	{
		while (i<= count)
			arr[i++] = start++;
	}
	return (arr);
}

#include <stdio.h>
#include <limits.h>
int main()
{
	int *arr = ft_range(-1, 3);
	printf("%d ", arr[0]);
	printf("%d ", arr[4]);
	//printf("%d ", arr[(long long)INT_MAX+INT_MAX+1]);
	
}
