#define _CRT_SECURE_NO_WARNINGS 

//求1000年到2000年之间闰年的个数
//#include <stdio.h>
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//			if (year % 400 == 0)
//			{
//				printf("%d ", year);
//				count++;
//			}
//		}
//	}
//	printf("\n闰年的年数为：");
//	printf("\n%d", count);
////	return 0;
////}
//
//
////# include <stdio.h>
//
////int main()
////{ 
////	printf("请输入两个整数：");
////	int a, b, c;
////	scanf("d% d%", &a, &b);
////	return 0; 
////}


//输入1000-2000之间的年份并判断是不是是闰年！！
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	int a, b;
//	printf("请输入两个数:\n");
//	scanf_s("%d %d", &a , &b);
//	//if (year >= 1000 && year <= 2000)//将年份的判断限制在1000-2000之间.
//	//{
//	//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))//闰年为能被400整除或者能被4整除且不能被100整除的年份.
//	//		printf("是\n");
//	//	else
//	//		printf("不是\n");
//	//}
//	//else
//	//	printf("请输入年份为1000到2000的数字\n");
//	return 0;
//}





//交换数据,不创建临时变量
//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4;
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}




//统计某一个数据二进制表示中比特位为1的位数
//#include <stdio.h>
//int main()
//  {
//	int count;
//	count = count_one_bits(count);
//	printf("%d", count);
//        return 0;
//        
//   }
//int  count_one_bits(unsigned int value)
//{
//	int count = 0;
//	printf("请输入一个整数：\n");
//	scanf_s("%d", &value);
//	while (value != 0)
//	{
//		if (value % 2 == 1)
//		{
//			count++;
//		}
//		value = value / 2;
//	}
//	return  count;
//}


//#include <stdio.h> 
//int count_one_bits(unsigned int value) 
//{   
//	   int count =0; 
//     while(value!=0) 
//  {    
//		 if(value%2==1) 
//    { 
//		 count++;
//	 } 
//      value=value/2; 
//   } 
//     return count; 
//}
//int main()
//{
//	unsigned int num = 0;
//	int ret = 0;
//	scanf_s("%d", &num);
//	ret = count_one_bits(num);
//	printf("count=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>  
//int main()
//{
//	int num;
//
//	int count = 0, i = 32;
//
//	printf("请输入一个数字:");
//
//	scanf_s("%d", &num);
//
//	while (i--)
//	{
//		if ((num & 1) == 1)//按位与&,同为1时出1  
//		{
//			count++;
//		}
//		num = num >> 1;//右移1位,相当于num/2  
//	}
//
//	printf("输出数字在二进制中 1 的个数:");
//
//	printf("%d\n", count);
//
//	return 0;
//}

//交换两个数的值
////#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4;
//	printf("a=%d b=%d\n", a, b);  /*采取按位异或运算符实现两个数的交换.
//			                        ^符号为二进制位异或.相异为一;相同为零.*/
//	a = a^b;          //a=0111. 具体计算:    0011   (三表示为二进制)
//                     /*                    ^ 0100   （四表示为二进制）
//	                                         0111    (相异为一;相同为零)           */
//	b = a^b;                                 // b=0011
//	a = a^b;                                //  c=0100
//	printf("a=%d b=%d", a, b);
//	return 0;
//}