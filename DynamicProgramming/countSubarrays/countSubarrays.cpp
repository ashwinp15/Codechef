# include <iostream>
# include <vector>

unsigned long long int nonDecSubarrays (int arr[], int N)
{
	 std::vector<int> nonDecDivisions;
	 
	 int s = 1;

	 for (int i=0; i < N-1; i++)
	 {
			if (arr[i] > arr[i+1])
			{
				 nonDecDivisions.push_back(s);
				 s = 0;
			}
			s++;
	 }

	 if (s==0)
	 {
			nonDecDivisions.push_back(1);
	 }

	 else 
	 {
			nonDecDivisions.push_back(s);
	 }


	 unsigned long long int n_subarrays = 0;
	 for (int i=0; i < nonDecDivisions.size(); i++)
	 {
			n_subarrays += (nonDecDivisions[i]+1)*nonDecDivisions[i]/2;

	 }

	 return n_subarrays;

}

int main()
{
	 int T;
	 std::cin >> T;
	 unsigned long long int output[T];

	 for (int i=0; i < T; i++)
	 {
			int N; 
			std::cin >> N;
			int arr[N];

			for (int j=0; j < N; j++)
			{
				 std::cin >> arr[j];
			}

			if (N==1)
			{
				 output[i] = 1;
			}

			else
			{
				 output[i] = nonDecSubarrays(arr, N);
			}
	 }
	 
	 for (int i=0; i < T; i++)
	 {
			std::cout << output[i] << "\n";
	 }
	 return 0;
}
