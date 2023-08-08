#include<stdio.h>

struct student{
	int roll;
	char name[100];
	int maths;
	int phy;
	int chem;
	float pr;
	
};

main()

{
	struct student s[100];
	int i,n,sum=0;
	printf("How Many Student Data Entery = ");
	scanf("%d",&n);
	printf("\n~~~~~Enter Student Data~~~~~\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter Student Roll No. = ");
		scanf("%d",&s[i].roll);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].name);
		printf("Enter Maths Mark = ");
		scanf("%d",&s[i].maths);
		printf("Enter Phy Mark = ");
		scanf("%d",&s[i].phy);
		printf("Enter Chem mark = ");
		scanf("%d",&s[i].chem);
		
		sum += s[i].chem + s[i].maths + s[i].phy ;
		
		s[i].pr = sum*100/300;
		
	}
	printf("\n*****Student Data With PR*****\n");
	for(i=0;i<n;i++)
	{
		printf("Student Roll No. = %d\n",s[i].roll);
		printf("Student Name = %s\n",s[i].name);
		printf("Maths Mark = %d\n",s[i].maths);
		printf("Phy Mark = %d\n",s[i].phy);
		printf("Chem Mark = %d\n",s[i].chem);
		printf("Student PR = %.2f\n",s[i].pr);
	}
}
