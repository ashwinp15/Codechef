# include <iostream>
# include <string>

int main () {
	 int N;
	 std::cin >> N;
	 std::string chefStr[N];

	 for (int i=0; i < N; i++)
	 {
			std::cin >> chefStr[i];
	 }

	 int memo[N][20][26];
	 

	 for (int i=0; i < N; i++)
	 {
			for (int j=0; j < 20; j++)
			{
				 for (int k=0; k < 26; k++)
				 {
						memo[i][j][k] = 0;

				 }
			}
	 }

	 for (int j=0; j < 20; j++)
	 {
			for (int k=0; k < 26; k++)
			{
				 for (int i=0; i < N; i++)
				 {
						if (chefStr[i].length() > j)
							 {
									if (k == chefStr[i].at(j) - 'a')
										 memo[i][j][k] += 1;
							 }

						if (i > 0)
							 memo[i][j][k] += memo[i-1][j][k];
				 }
			}
	 }

	 int Q;
	 std::cin >> Q;
	 int output[Q];
	 int s = Q;
	 
	 int l, r, c;
	 char p;
	 int i = 0;
	 while (s--)
	 {
			std::cin >> l >> r >> c >> p;
			int temp = p - 'a'; 
			int res = memo[r-1][c-1][temp] - memo[l-2][c-1][temp];
			output[i] = res;
			i += 1;
	 }

	 int j = 0;
	 while (j < Q)
	 { 			
	  	std::cout << output[j] << "\n";
			j++;
	 }
	 return 0;
}
