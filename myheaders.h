
#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void 	bubblesort(long data[], int n);
void 	mergesort(long data[], int first, int last);
void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long d1[], long d2[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
