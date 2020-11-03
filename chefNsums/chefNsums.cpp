# include <iostream>

int optSum (int arr[], int N)
{
	 // Prefix sum 
	 int prefixMemo[N];
	 for (int i=0; i < N; i++)
	 {
			prefixMemo[i] = -1;
	 }
	 
	 int temp = 0;
	 for (int i=0; i < N; i++)
	 {
			if (arr[i] > arr[i+1])
			{
				 temp = arr[i];
				 arr[i] = arr[i+1];
				 arr[i+1] = temp;
			}

	 }

	 return a


}

int prefix(int arr[], int memo[], int i)
{
	 if (i==1)
			return arr[i-1];

	 if (memo[i-1] != -1)
			return memo[i-1];

	 return prefix(arr, memo, i-1) + arr[i-1];
	 
}


int suffix(int arr[], int memo[], int i, int grandSum)
{
	 return grandSum - prefix(arr, memo, i-1);
}


int main ()
{
	 int T;
	 std::cin >> T;
	 int output[T];

	 for (int i=0; i < T; i++)
	 {
			int N;
			std::cin >> N;
			int arr[N];

			for (int i=0; i < T; i++)
			{
				 std::cin >> arr[i];
			}

			output[i] = optSum (arr, N);
	 }

	 for (int i=0; i < T; i++)
	 {
			std::cout << output[i] << "\n";
	 }

}
