#include <unistd.h>
#include <string.h>
[>77;20709;0c]10;rgb:bfbf/bfbf/bfbf\]11;rgb:0000/0000/0000\
int rand()
{
	static int ct = -1;

	ct++;
	if (ct == 0)
		return 8;
	if (ct == 1)
		return 8;
	if (ct == 2)
		return 7;
	if (ct == 3)
		return 9;
	if (ct == 4)
		return 23;
	if (ct == 5)
		return 74;
	return ct * ct % 30000;
}
