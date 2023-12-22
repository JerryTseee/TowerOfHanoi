#include<iostream>
using namespace std;

//n: number of disk, src: source, aux: auxiliary, dest: destination.
void ToH(int n, char src, char aux, char dest)
{
	//when only one disk in the game (base case)
	if (n == 1)
	{
		cout << "Move disk " << n << " from " << src << " to " << dest << endl;
		return;
	}
	//when more than one disk, we treat the auxilary one as destination (from source to auxiliary by passing destination)
	ToH(n - 1, src, dest, aux);
	cout << "Move disk " << n << " from " << src << " to " << dest << endl;

	// (then we finally move the disk from auxiliary to the destination by passing source)
	ToH(n - 1, aux, src, dest);
	

}

int main()
{
	int n;
	cout << "Enter number of disk: " << endl;
	cin >> n;
	ToH(n, 'A', 'B', 'C');//call the function
	return 0;

}
