
 
int a(int (*b)()); 
int f () { return 1; }

main()
{
	a(f);
}
