#include <stdio.h> 
#include <malloc.h> 

#define stu struct student 
stu
{

    char name;

    int age;

    int wage;

    stu* next;

};
struct student  * creat(void)
{
    int i;
    struct student * p, * head, * s;
    p = head = (struct student *)malloc(sizeof(stu));//����ͷ
                                     //��ֹδ�����ɹ�
    p = NULL;
    for (i = 0; i < 3; i++)
    {
        s = (struct student*)malloc(sizeof(stu));  //�����½ڵ�(β�巨����)
       
        s->name = 'L';
        s->age = 18;
        s->wage = 1000;
        s->next = p->next;
        p->next = s;
    }

    return head;
}
void output(struct student * p)
{

    while (p != NULL)

    {

        printf("%c: ", p->name);

        printf("age=%d wage=%d\n", p->age, p->wage);

        p = p->next;

    }

}
int main()
{

    stu* p;

    p = creat();

    output(p);

}