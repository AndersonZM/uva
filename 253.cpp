//Anderson Zudio de Moraes
//Victor Cracel Messner
//AC em 24/03/2014


#include <iostream>

using namespace std;

string n;

int compara()
{
	if(n[0] == n[6] && n[1] == n[7] && n[2] == n[8] && n[3] == n[9] && n[4] == n[10] && n[5] == n[11])
	{
		return 1;
	}
	if(n[0] == n[6] && n[3] == n[7] && n[1] == n[8] && n[4] == n[9] && n[2] == n[10] && n[5] == n[11])
	{
		return 1;
	}
	if(n[0] == n[6] && n[4] == n[7] && n[3] == n[8] && n[2] == n[9] && n[1] == n[10] && n[5] == n[11])
	{
		return 1;
	}
	if(n[0] == n[6] && n[2] == n[7] && n[4] == n[8] && n[1] == n[9] && n[3] == n[10] && n[5] == n[11])
	{
		return 1;
	}
	
	
		if(n[1] == n[6] && n[2] == n[7] && n[0] == n[8] && n[5] == n[9] && n[3] == n[10] && n[4] == n[11])
	{
		return 1;
	}
	if(n[1] == n[6] && n[5] == n[7] && n[2] == n[8] && n[3] == n[9] && n[0] == n[10] && n[4] == n[11])
	{
		return 1;
	}
	if(n[1] == n[6] && n[3] == n[7] && n[5] == n[8] && n[0] == n[9] && n[2] == n[10] && n[4] == n[11])
	{
		return 1;
	}
	if(n[1] == n[6] && n[0] == n[7] && n[3] == n[8] && n[4] == n[9] && n[5] == n[10] && n[4] == n[11])
	{
		return 1;
	}
	
			if(n[2] == n[6] && n[0] == n[7] && n[1] == n[8] && n[4] == n[9] && n[5] == n[10] && n[3] == n[11])
	{
		return 1;
	}
	if(n[2] == n[6] && n[1] == n[7] && n[5] == n[8] && n[0] == n[9] && n[4] == n[10] && n[3] == n[11])
	{
		return 1;
	}
	if(n[2] == n[6] && n[5] == n[7] && n[4] == n[8] && n[1] == n[9] && n[0] == n[10] && n[3] == n[11])
	{
		return 1;
	}
	if(n[2] == n[6] && n[4] == n[7] && n[0] == n[8] && n[5] == n[9] && n[1] == n[10] && n[3] == n[11])
	{
		return 1;
	}
	
			if(n[3] == n[6] && n[4] == n[7] && n[5] == n[8] && n[0] == n[9] && n[1] == n[10] && n[2] == n[11])
	{
		return 1;
	}
	if(n[3] == n[6] && n[0] == n[7] && n[4] == n[8] && n[1] == n[9] && n[5] == n[10] && n[2] == n[11])
	{
		return 1;
	}
	if(n[3] == n[6] && n[1] == n[7] && n[0] == n[8] && n[5] == n[9] && n[4] == n[10] && n[2] == n[11])
	{
		return 1;
	}
	if(n[3] == n[6] && n[5] == n[7] && n[1] == n[8] && n[4] == n[9] && n[0] == n[10] && n[2] == n[11])
	{
		return 1;
	}
	
			if(n[4] == n[6] && n[5] == n[7] && n[3] == n[8] && n[2] == n[9] && n[0] == n[10] && n[1] == n[11])
	{
		return 1;
	}
	if(n[4] == n[6] && n[2] == n[7] && n[5] == n[8] && n[0] == n[9] && n[3] == n[10] && n[1] == n[11])
	{
		return 1;
	}
	if(n[4] == n[6] && n[0] == n[7] && n[2] == n[8] && n[3] == n[9] && n[5] == n[10] && n[1] == n[11])
	{
		return 1;
	}
	if(n[4] == n[6] && n[3] == n[7] && n[0] == n[8] && n[5] == n[9] && n[2] == n[10] && n[1] == n[11])
	{
		return 1;
	}
	
			if(n[5] == n[6] && n[4] == n[7] && n[2] == n[8] && n[3] == n[9] && n[1] == n[10] && n[0] == n[11])
	{
		return 1;
	}
	if(n[5] == n[6] && n[3] == n[7] && n[4] == n[8] && n[1] == n[9] && n[2] == n[10] && n[0] == n[11])
	{
		return 1;
	}
	if(n[5] == n[6] && n[1] == n[7] && n[3] == n[8] && n[2] == n[9] && n[4] == n[10] && n[0] == n[11])
	{
		return 1;
	}
	if(n[5] == n[6] && n[2] == n[7] && n[1] == n[8] && n[4] == n[9] && n[3] == n[10] && n[0] == n[11])
	{
		return 1;
	}
	
	
	return 0;
	
	
}

int main()
{
    int r;
    while(cin >> n)
    {
      r = compara();
    if(r)  cout << "TRUE" << endl;
    else   cout << "FALSE" << endl;
    }
    return 0;
}