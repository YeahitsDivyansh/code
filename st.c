#include<stdio.h>
struct person
{
	char name[50];
	int sal;
	int age;
};
struct person p1,p2;
int main()
{
	printf("Enter deatils of the two persons \n");
	scanf("%s",&p1.name);
	scanf("%d",&p1.sal);
	scanf("%d",&p1.age);
	
	scanf("%s",&p2.name);
	scanf("%d",&p2.sal);
	scanf("%d",&p2.age);
	
	printf("The name of the first person is : %s \n",p1.name);
	printf("The age of the second person is : %d \n",p2.age);
	return 0;	
}
