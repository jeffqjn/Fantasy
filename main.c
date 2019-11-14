//
//  main.c
//  BS作业
//
//  Created by QianJiannan on 28.10.19.
//  Copyright © 2019 jn. All rights reserved.
//
//#include <stdio.h>
//#include <stdlib.h>
//#define LEN sizeof(struct students)
//struct students
//{
//    int num;
//    float score;
//    struct students *next;
//};
//int n;
//
//int main()
//{
//    struct students *create();
//    void print(struct students *head);
//
//    struct students *pt;
//    pt=create();
//
//    print(pt);
//    return 0;
//}
//struct students *create()
//{
//    struct students *head,*p1,*p2,*p3;
//    void delete(struct students *pointer);
//    p1=p2=(struct students *) malloc(LEN);
//    head=NULL;
//    scanf("%d,%f",&p1->num,&p1->score);
//    n=0;
//    while(p1->num!=0)
//    {
//        n=n+1;
//        if(n==1)head=p1;
//
//        else
//        {
//            p1=malloc(LEN);
//            p2->next=p1;
//            p2=p1;p3=head;
//            scanf("%d,%f",&p1->num,&p1->score);
//
//        }
//
//    }
//    p2->next=NULL;
//    return (head);
//
//}
//void print(struct students *head)
//{
//    struct students *p1;
//    p1=head;
//   do
//   {
//       printf("num=%d,score=%f",p1->num,p1->score);
//       p1=p1->next;
//
//   }while(p1->next!=NULL);






//}
//BS作业1
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct list_element {
//    int num;
//    struct list_element *next;//contain 2 elements,einen Num und einen Zeiger
//} list_element_t;
//
//typedef struct list {
//    struct list_element *head;
//    struct list_element *tail;// zwei Zeiger zeigen Typ list_element
//} list_t;
//
//
//
//int list_append(list_t *list, int value) {
//    struct list_element *q;
//    struct list_element *p;
//
//    if(value<0)    //ob die Nummer negativ ist
//    {
//        printf("Input Error\t");
//        return -1;
//    }
//
//
//    for(q=list->head;q!=NULL;q=q->next)      //ob die Nummer vorhanden schon
//    {
//        if(q->num==value)
//        {
//            printf("the number is existed\t");
//            return -1;
//        }
//    }
//
//
//        p=malloc(sizeof(list_element_t));       //Knode erstellen
//        p->num=value;
//        p->next=NULL;
//
//        if (list->head==NULL)                // erste Knode
//        { list->head=p;
//            list->tail=p;}
//        else
//        {list->tail->next=p;
//            list->tail=p;
//        }
//        return (p->num);
//}
//
//
//int list_pop(list_t *list) {
//
//
//    list_element_t *temp;
//    temp=malloc(sizeof(list_element_t)); // erzeugen ein Dupikat
//    temp->num=list->head->num;
//    temp=list->head;
//    list->head->next=temp->next;
//    free(temp);
//    list->head=list->head->next;
//    return (temp->num);
//
//
//}
//
//int main (int argc, char* argv[])
//    {
//        list_t list; //TODO: initialize Am ANFANG IST DIE ADRESSE NULL
//
//        printf("insert -10:%d\n",list_append(&list, -10));
//        printf("insert 47: %d\n", list_append(&list, 47));
//        printf("insert 11: %d\n", list_append(&list, 11));
//        printf("insert 47: %d\n", list_append(&list, 47));
//        printf("insert 23: %d\n", list_append(&list, 23));
//        printf("insert 11: %d\n", list_append(&list, 11));
//
//        printf("remove: %d\n", list_pop(&list));
//        printf("remove: %d\n", list_pop(&list));
//        exit(EXIT_SUCCESS);
//}
//




//两数相加
//#include <stdio.h>
//#include <stdlib.h>
// typedef struct list_element//建立一个结构用来存储加法结果
//{
//    int num;
//    struct list_element *next;
//
//}list_element_t;
//
// struct list_element* inputtwonumber(struct list_element* l1, struct list_element* l2)
//{
//    list_element_t *current;
//    list_element_t *head;  //指向element指针，把这个element当成head
//    list_element_t *pre;
//    int x,y,carry=0,sum=0;
//    current=malloc(sizeof(list_element_t));// 建立第一个和节点
//    head=current;
//    for(;l1!=NULL||l2!=NULL;l1=l1->next,l2=l2->next)// 计算直到两个数均为0
//    {
//        if(l1==NULL)x=0;else x=l1->num;
//        if(l2==NULL)y=0;else y=l2->num;
//        sum=x+y+carry;
//        carry=sum/10;
//        if(sum>9)sum=sum%10;
//        current->num=sum;
//        current=malloc(sizeof(list_element_t));
//        current->next=NULL;
//        if(head->next==NULL)
//            head->next=current;
//        else
//        {
//            current->next=current;
//            current=current->next;
//        }
//    }
//    if(carry!=0)   //若最高位仍存在进位
//
//    {
//        pre=malloc(sizeof(list_element_t));
//        pre->num=carry;
//        pre->next=NULL;
//    }
//    return head;
//
//    }


    
    //给定一个链表，删除倒数第几个节点,扫描两次，第一次计数，第二次删除节点
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct  list_element
//{
//    int num;
//    struct list_element *next;
//    struct list_element *head;
//}list_a;
//
//list_a * removeNthFromEnd(list_a * head, int n)
//{
//    int count=0;
//    int sum;
//    list_a *p;
//    list_a *temp;
//    list_a *q;
//    if(head->next==NULL)
//        count=1;
//    p=head;
//    while(p!=NULL)
//    {
//        p=p->next;
//        count++;
//    }
//    sum=count-n;
//    if(sum<0)printf("output error");
//    else if(sum==0)
//    {
//        temp=malloc(sizeof(list_a));
//        head->next=temp;
//        temp->next=head->next;
//        head=temp->next;
//        free(temp);
//    }
//    else
//    {
//        for(p=head,count=0;count<=sum;p=p->next,count++)
//            q=p->next;
//            p->next=q->next;
//            free(q);
//
//
//    }
//    return head;
//
//
//}


// 利用两个指针遍历删除倒数第n个节点
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
//
//  struct ListNode *p,*q,*temp;
//   p=head;
//   q=head;
//   for(;n>0;n--)
//       p=p->next;
//   for(;p->next!=NULL;p=p->next,q=q->next)
//       temp=malloc(sizeof(struct ListNode));
//       temp=q->next;
//       q->next=temp->next;
//       free(temp);
//
//   return head;
//       }

    
#include "halde.h"
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdint.h>

/// Magic value for occupied memory chunks.
#define MAGIC ((void*)0xbaadf00d)

/// Size of the heap (in bytes).
#define SIZE (1024*1024*1)

/// Memory-chunk structure.
struct mblock {
    struct mblock *next;
    size_t size;
    char memory[];
};

/// Heap-memory area.
char memory[SIZE];

/// Pointer to the first element of the free-memory list.
static struct mblock *head;

/// Helper function to visualise the current state of the free-memory list.
void halde_print(void) {
    struct mblock* lauf = head;

    // Empty list
    if ( head == NULL ) {
        fprintf(stderr, "(empty)\n");
        return;
    }

    // Print each element in the list
    fprintf(stderr, "HEAD:  ");
    while ( lauf ) {
        fprintf(stderr, "(addr: 0x%08zx, off: %7zu, ", (uintptr_t) lauf, (uintptr_t)lauf - (uintptr_t)memory); //offset output
        fflush(stderr);
        fprintf(stderr, "size: %7zu)", lauf->size);
        fflush(stderr);

        if ( lauf->next != NULL ) {
            fprintf(stderr, "\n  -->  ");
            fflush(stderr);
        }
        lauf = lauf->next;
    }
    fprintf(stderr, "\n");
    fflush(stderr);
}

void *halde_malloc (size_t size) {
    //MALLOC_NOT_IMPLEMENTED_MARKER: remove this line to activate free related test cases
    // TODO: implement me!
    return NULL;
}

void halde_free (void *ptr) {
    //FREE_NOT_IMPLEMENTED_MARKER: remove this line to activate free related test cases

    //MERGE_NOT_IMPLEMENTED_MARKER: remove this line to activate merge related test cases

    // TODO: implement me!
    return;
}

    
    
    
    
    
    

