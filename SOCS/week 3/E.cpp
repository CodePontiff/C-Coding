#include<stdio.h>

int main()
{
	int tc,input,output,f;
	int mtrx[100][100];
	scanf("%d",&tc);
	input=0;
	output=0;
	
	for(int i=1;i<=tc;i++)
	{
		scanf("%d",&input);
		
		for (int z=0;z<input;z++)
		{
			for(int x=0;x<input;x++)
			{
				scanf("%d",&mtrx[z][x]);
			}
		}
		f = input -1;
		
		for(int c=0;c<input;c++)
		{
			output = output+ mtrx[c][c];
			output = output + mtrx [c][f];
			
			f--;
		}
		
		if(input %2 ==1)
		{
			output =output - mtrx[input/2][input/2];
		}
		printf("%d\n",output%1000003);
		
		input=0;
		output=0;
	}
	return 0;
	
}
