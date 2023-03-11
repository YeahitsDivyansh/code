#include<stdio.h>
struct info{
	int id;
	char name[20];
	int salary;
	char fav_food[20];
};
int main(){
	int i,n;
	struct info x;
	printf("enter number of entries you want : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Enter ID : ");
	
	}
	for(i=0;i<n;i++){
		printf("%d\t%s\t%d\t%s\n",x.id,x.name,x.salary,x.fav_food);
	}
	return 0;
}
