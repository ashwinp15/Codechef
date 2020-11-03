# include <iostream>


int profit (int stores[], int people[], int prices[], int N)
{

}

int main ()
{
	 int T;
	 std::cin >> T;
	 int output[T];
	 
	 for (int i=0; i<T; i++)
	 {
			int N; 
			std::cin >> N;
			int stores[N];
			int prices[N];
			int people[N];

			for (int j=0; j<N; j++)
			{
				 std::cin >> stores[j] >> people[j] >> prices[j];
			}

			output[i] = profit(stores, people, prices, N);
	 }

	 for (int i=0; i<T; i++)
	 {
			std::cout << output[i] << "\n";
	 }
	 
	return 0; 
}
