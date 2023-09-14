#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	
	std::vector<int> A(n);
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
	}
	
	int count = 0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] == A[j])
			{
				count ++;
			}
		}
	}
	
	std::cout << count;
	
	return 0;
}

