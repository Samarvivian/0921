// void union(List &La, List Lb) {
//     La_len = ListLength(La);    // 求线性表的长度
//     Lb_len = ListLength(Lb); 
// for (i = 1;  i <= Lb_len;  i++) {
//     GetElem(Lb, i, e); // 取Lb中第i个数据元素赋给e
//     if (!LocateElem(La, e, equal( )) ) 
//        ListInsert(La, ++La_len, e);
//       // La中不存在和 e 相同的数据元素，则插入之
// }
// } // union
#include<stdio.h>
int GetElem(int *b,int i)
{
    return b[i];
}
int LocateElem(int *a,int num,int *a_len)
{
    int flag=0;
    for(int i=0;i<*a_len;i++)
    {
        if(num==a[i])
        {
            flag=1;
            break;
        }
    } 
    return flag;
}
void ListInsert(int *a,int *a_len,int num)
{
    a[*a_len]=num;
    (*a_len)++;
}
void Insert(int *a,int *b,int *a_len,int b_len)
{
    for(int i=0;i<b_len;i++)
    {
        int num=GetElem(b,i);
        if(!(LocateElem(a,num,a_len)))
        {
            ListInsert(a,a_len,num);
        }
    }
}
int main()
{
    int a[20]={1,3,7,8};
    int b[]={2,3,4,5,6,7,8};
    int a_len=4;
    int b_len=sizeof(b)/sizeof(b[0]);
    Insert(a,b,&a_len,b_len);

    for(int i=0;i<a_len;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}