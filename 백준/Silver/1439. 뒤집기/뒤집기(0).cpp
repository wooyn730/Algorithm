// ���� ���� �ڵ�
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string S;
	cin >> S;

	int ans = 0;
	bool toChange = false;

	do
	{
		toChange = false;
		for (int i = 1; i < S.length(); i++)
		{
			if (!toChange)
			{
				if (S[i - 1] != S[i])
				{
					toChange = true;
					S[i] = S[i - 1];
					ans++;
				}
			}
			else
			{
				if (S[i] != S[i - 1])
					S[i] = S[i - 1];
				else
					break; // for�� Ż��
			}
		}

		if (!toChange)
			break; // while�� Ż��

	} while (toChange);

	cout << ans;
	return 0;
}