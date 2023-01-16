#include <iostream>
using namespace std;

void line_column_encrypt(char vec[])
{
	int key = 3;
	char arr[5][3];
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = vec[count];
			count++;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			vec[count] = arr[j][i];
			cout << vec[count] << " ";
			count++;
		}
		cout << endl;
	}
}
int main() 
{
	char vec[] = "abcdefghijklmno";
	line_column_encrypt(vec);
}
