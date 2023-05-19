#include<stdio.h>

/*
 emp_id
 emp_name
 emp_age
 emp_role
 emp_city
 emp_experience
 emp_company_name
*/

struct students
{
	int stu_id,stu_age,emp_experience;
	char stu_name[100],emp_role[100],stu_city[100],emp_company_name[100];
	
}s[100];

main()
{
	int n,i;
	printf("Enter Size of employee array=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf(" Enter employee ID:-");
		scanf("%d",&s[i].stu_id);
		
		printf(" Enter employee NAME:-");
		scanf("%s",&s[i].stu_name);
		
		printf(" Enter employee AGE:-");
		scanf("%d",&s[i].stu_age);
		
		printf(" Enter employee ROLE:-");
		scanf("%s",&s[i].emp_role);
		
		printf(" Enter employee CITY:-");
		scanf("%s",&s[i].stu_city);
		
		printf(" Enter employee EXPERIENCE:-");
		scanf("%d",&s[i].emp_experience);
		
		printf(" Enter employee COMPANY_NAME:-");
		scanf("%s",&s[i].emp_company_name);
		
	}
	printf("\n-----------------------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf(" employee ID:-%d\n",          s[i].stu_id);
		printf(" employee NAME:-%s\n",        s[i].stu_name);
		printf(" employee AGE:-%d\n",         s[i].stu_age);
		printf(" employee ROLE:-%s\n",        s[i].emp_role);
		printf(" employee CITY:-%s\n",        s[i].stu_city);
		printf(" employee EXPERIENCE:-%d\n",  s[i].emp_experience);
		printf(" employee COMPANY_NAME:-%s\n",s[i].emp_company_name);
	}
}
