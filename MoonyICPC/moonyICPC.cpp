# include <iostream>
# include <bits/stdc++.h>

unsigned int optimise (unsigned int scores[], unsigned int N)
{
	 unsigned int cum_scores[N];
	 
	 for (unsigned int i=0; i < N; i++)
	 {
			cum_scores[i] = scores[i%N] + scores[(i+1)%N] + scores[(i+2)%N];
	 }

	 return *std::max_element(cum_scores, cum_scores + N-1);

}

int main () {
	 unsigned int T;
	 std::cin >> T;
	 unsigned int output[T];

	 for (unsigned int i=0; i<T; i++)
	 {
			unsigned int N;
			std::cin >> N;
			unsigned int scores[N];
			
			for (unsigned int j=0; j < N; j++)
			{
				 std::cin >> scores[j];
			}
			
			output[i] = optimise (scores, N);
	 }

	 for (unsigned int i=0; i < T; i++)
	 {
			std::cout << output[i] << "\n";
	 }

	 return 0;
}
