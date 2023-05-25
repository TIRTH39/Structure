#include<stdio.h>

/*
 stu_id
 stu_name
 stu_age
 stu_course
 stu_city
 stu_std
 stu_school
*/

struct students
{
	int stu_id,stu_age,stu_std;
	char stu_name[100],stu_course[100],stu_city[100],stu_school[100];
	
}s[100];

main()
{
	int n,i;
	printf("Enter Size of students array=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter students ID:-");
		scanf("%d",&s[i].stu_id);
		
		printf("Enter students NAME:-");
		scanf("%s",&s[i].stu_name);
		
		printf("Enter students AGE:-");
		scanf("%d",&s[i].stu_age);
		
		printf("Enter students COURSE:-");
		scanf("%s",&s[i].stu_course);
		
		printf("Enter students CITY:-");
		scanf("%s",&s[i].stu_city);
		
		printf("Enter students STD:-");
		scanf("%d",&s[i].stu_std);
		
		printf("Enter students SCHOOL:-");
		scanf("%s",&s[i].stu_school);
	}
	
	printf("\n-----------------------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("students ID:-%d\n",    s[i].stu_id);
		printf("students NAME:-%s\n",  s[i].stu_name);
		printf("students AGE:-%d\n",   s[i].stu_age);
		printf("students COURSE:-%s\n",s[i].stu_course);
		printf("students CITY:-%s\n",  s[i].stu_city);
		printf("students STD:-%d\n",   s[i].stu_std);
		printf("students SCHOOL:-%s\n",s[i].stu_school);
	}
}
