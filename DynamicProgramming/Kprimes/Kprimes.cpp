# include <iostream>

int calc_kprime (int A, int B, int K)

int main ()
{
	 int T;
	 std::cin >> T;
	 int output[T];

	 for (int i=0; i<T; i++)
	 {
			int A, B, K;
			std::cin >> A >> B >> K;

			output[i] = calc_kprime(A, B, K);
	 }

	 for (int i=0; i<T; i++)
	 {
			std::cout << output[i] << "\n";
	 }
	 
	 return 0;
}
