#include<stdio.h>
main()
{ int math,phy,chem,total;
printf("\n eligibility criteria:");
printf("marks in math>=65");
printf("marks in phy>=55");
printf("marks in chem>=50");
printf("total in all three subject>=180");
printf("input the marks in math:");
scanf("%d",&math);
printf("input the marks in phy:");
scanf("%d",&phy);
printf("input the marks in chem:");
scanf("%d",&chem);
total=math+phy+chem;
printf("total marks of math,phy,chem:%d",math+phy+chem);
}
if (math>=65)
if (phy>=55)
if (chem>=50)
if (math+phy+chem)>=180

{
	printf("\n the candidate is eligible for admission");
}
else
{ 
printf("\n the candidate is not eligible");

}
else
{ 
printf("\n the candidate is not eligible");

}	
else
{ 
printf("\n the candidate is not eligible");

}

}



