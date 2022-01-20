#include <iostream>
#define MAX 10

using namespace std;
struct cqueue
{
    int rear;
    int front;
    int item[MAX];
    
};typedef struct cqueue qu;

void enqueue(qu*);
void dequeue(qu*);
void display(qu*);

int main()
{
    int ch=0,d=0;
    qu *q;
    q->rear=-1;
    q->front=0;
    cout<<"menu for program:"<<endl;
    cout<<"1.enqueue\n2.dequeue\n3.display"<<endl;

    do
        {
            cout<<"enter your choice:"<<endl;
            cin>>ch;

            switch(ch)
                {
                    case 1:

                            enqueue(q);
                            break;

                                     
                    case 2:
                            
                            dequeue(q);
                            break;
                            
                    case 3:
                    
                            display(q);
                            break;
                            
                            
                    default:
                    
                            cout<<"your choice is wrong:"<<endl;
                            break;
                }
        }while(ch<4);

            

    
    

    return 0;
}

void enqueue(qu *q)
{
    int d;
    cout<<"enter the data to be inserted:"<<endl;
    cin>>d;

    if(q->rear==MAX-1)
            {
                cout<<"Queue is full:"<<endl;
            }
            
            
        else
            
            {
                q->rear++;
                q->item[q->rear]=d;
            }
}

void dequeue(qu *q)
{
    int d;

    if(q->rear<q->front)
        {
            cout<<"queue is empty:"<<endl;
        }

    else

        {
            d=q->item[q->front];
            q->front++;
            cout<<"deleted data is:"<<endl;
            cout<<d<<endl;
        }    
}

void display(qu *q)
{
    int i;
    if(q->rear<q->front)
        {
            cout<<"queue is empty:"<<endl;
        }
    else
        {
            for(int i=q->front;i<=q->rear;i++)
                {
                    cout<<q->item[i]<<endl;
                }
        }    
}
