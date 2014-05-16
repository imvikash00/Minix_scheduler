#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int IO_operation(int n); //does the io operation

int do_computation(int n); //does the computation


int main()
{
	time_t t[11];
	time_t final;
	int pid[11];
	t[0]=time(NULL);
	pid[0]=fork();
	if(pid[0] == 0)
	{
		IO_operation(1000);
	}
 	else
 	{
 		t[1]=time(NULL);
		pid[1]=fork();
		if(pid[1] == 0)
		{
			
			do_computation(10000);
		}
		else
		{
			t[2]=time(NULL);
			pid[2]=fork();
			if(pid[2] == 0)
			{
				IO_operation(10000);
				
			}
			else
			{
				t[3]=time(NULL);
				pid[3]=fork();
				if(pid[3] == 0)
				{
					do_computation(10000);
				}
				else
				{
					t[4]=time(NULL);
					pid[4]=fork();
					if(pid[4] == 0)
					{
						IO_operation(10000);
					}
					else
					{
						t[5]=time(NULL);
						pid[5]=fork();
						if(pid[5] == 0)
						{
							do_computation(10000);
						}
						else
						{
							t[6]=time(NULL);
							pid[6]=fork();
							if(pid[6] == 0)
							{
								IO_operation(10000);
							}
							else
							{
								t[7]=time(NULL);
								pid[7]=fork();
								if(pid[7] == 0)
								{
									do_computation(10000);
								}
								else
								{
									t[8]=time(NULL);
									pid[8]=fork();
									if(pid[8] == 0)
									{
										IO_operation(10000);
									}
									else
									{
										t[9]=time(NULL);
										pid[9]=fork();
										if(pid[9] == 0)
										{
											do_computation(10000);
										}
										else
										{
											t[10]=time(NULL);
											pid[10]=fork();
											if(pid[10] == 0)
											{
												IO_operation(10000);
											}
											else
											{
												int i;
												float avg=0;
												for(i=0;i<11;i++)
												{
													int pid1=wait(NULL);
													int j;
													for(j=0;j<11;j++)
													{
														if(pid[j] == pid1)
														{
															avg = avg+ difftime(time(NULL),t[j]);
															break;
														}
													}
												}
												printf("%f",avg/11);	
 											
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
			
	}
}
 	
int IO_operation(int n)
{
	FILE *fp=fopen("test.txt","w");
	long long int i=0;
	long long int n1=n*1000;
	for(i=0;i<n1;i++)
	{
		fprintf(fp,"Doing IO_operation\n");
	}
}
 	
int do_computation(int n)
{
	long long int i=0;
	long long int n1=n*1000;
	for(i=0;i<n1;i++);
}