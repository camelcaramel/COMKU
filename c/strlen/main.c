# include <stdio.h>

int kn_strlen(char* str);

int main(void)
{
	char *testdata[3] = {"hello", "world", "camelcaramel"};
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", kn_strlen(testdata[i]));
	}
	return (0);
}
