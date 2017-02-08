
using a = void (*) (char*,int&);
typedef a* b;
using c = void (*) (b);
using d = b (*)();

main()
{	
}
