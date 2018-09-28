//#include<stdio.h>
//#include <stdlib.h>
////输出乘法口诀
//int main(){
//    int i=1;
//	for (;i<=9;i++)
//	{
//		int j=1;
//		for (;j<=i;j++)
//		{
//			printf("%d*%d=%d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	system("pause");                                
//	return 0;
//}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//i*j

////判断1000年-200年之间的闰年
//int main(){
//	int leapYear=1000;
//	for (;leapYear<=2000;leapYear++)
//	{
//		/*if (leapYear%100==0)
//		{
//			if (leapYear%400==0)
//			{
//				printf("%d ",leapYear);
//			}
//		}else if (leapYear%4==0)
//		{
//			 printf("%d ",leapYear);
//		}*/
//
//		if (leapYear%4==0)
//		{
//			if (leapYear%100!=0)
//			{
//               printf("%d ",leapYear);
//			}
//		}
//		if (leapYear%400==0)
//		{
//			printf("%d ",leapYear);
//		}
//	}
//    system("pause");
//	return 0;
//}





//#include <math.h>
////找出100到200之间的素数
//int main(){
//     int i=0;
//	 int count=0;
//	 for (i=100;i<=200;i++)
//	 {
//		 int j=0;
//		 for (j=2;j<=sqrt(i);j++)
//		 { 
//			 if (i%j==0)
//			 {
//				 break;//如果有一个数能被i整除，则退出对于j的循环
//			 }	
//			
//		 }
//		 if(j>sqrt(i))
//		 {   
//			 count++;
//			 printf("%d ",i);
//		 }
//		 
//	 }
//	printf("\n%d ",count);
//	system("pause");
//	return 0;
//
//}




//extern用来声明外部符号
//extern int g_val;
//extern int Add(int,int);
//int main(){
//     //printf("%d\n",g_val);
//
//
//	 int a=10;
//	 int b=20;
//	 int sum=Add(a,b);
//	 printf("sum=%d\n",sum);
//	return 0;
//}




//void test(){
//
//	static int i=1;//static修饰局部变量，改变了局部变量的生命周期
//	i++;
//	printf("%d ",i);
//}
//
//int main(){
//    int i=0;
//	for (i=0;i<5;i++)
//	{
//		 test();
//	}
//
//	return 0;
//}






//typedef unsigned int u_int;
//int main(){
//
//        u_int num1=2018;//相当于unsigned int num1=2018;
//		return 0;
//}






      //register int a=10;//建议放在寄存器中，只是一个建议
	  //return 0;



	//{
    //  auto int a=10;//所有的局部变量都是auto的，一般省略，局部变量进入这个范围自动创建，出了这个范围自动销毁，所以叫auto变量
	//}
	// return 0;


     /* int a=0;
	  a=(int)3.14;//强制转换类型
	  printf("%d\n",a);*/
	  
     //int num=0;
	////00000000000000000000000000000000
	////按位取反变为11111111111111111111111111111111（在电脑中中为补码）
	////求其原码，负数补码求原码方法为：减 1，符号位不变，其它位取反
	//printf("%d\n",~num);//结果为-1
	//system("pause");   //一个整数占四个字节
	//return 0;
//}


//int main(){
//void print_arr(int arr[],int sz)//定义一个输出数组值的函数，是这样定义的
//{
//	int i=0;
//
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//   
//  system("pause");
//  return 0;
//}




//
//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	print_arr(arr,10);
//
//   /* int line=0;
//	while (line<=30000)
//	{
//		line++;
//	}
//	if(line>3000)
//	{
//	   printf("找工作\n");
//	}*/
//	system("pause");
//	return 0;
//}