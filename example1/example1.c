int add(int, int);

int main()
{
	// Declare the type of vriables 
	int a, b, c;
	a=10;
	b=12;

	// Call function "add"

	c=add(a,b);

	// Set "c" as answer return
	return c;
}

int add(int a, int b)
{
	return a+b;
}
