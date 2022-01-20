#include <iostream>
#define MAX 10

using namespace std;

void enqueue();
void dequeue();
void display();
int rear=-1;
int front=0;

int item[MAX];
    


int main()
{
    int ch=0,d=0;
    cout<<"menu for program:"<<endl;
    cout<<"1.enqueue\n2.dequeue\n3.display"<<endl;

    do
        {
            cout<<"enter your choice:"<<endl;
            cin>>ch;

            switch(ch)
                {
                    case 1:

                            enqueue();
                            break;

                                     
                    case 2:
                            
                            dequeue();
                            break;
                            
                    case 3:
                    
                            display();
                            break;
                            
                            
                    default:
                    
                            cout<<"your choice is wrong:"<<endl;
                            break;
                }
        }while(ch<4);

            

    
    

    return 0;
}

void enqueue()
{
    int d;
    cout<<"enter the data to be inserted:"<<endl;
    cin>>d;

    if(rear==MAX-1)
            {
                cout<<"Queue is full:"<<endl;
            }
            
            
        else
            
            {
                rear++;
                item[rear]=d;
            }
}

void dequeue()
{
    int d;

    if(rear<front)
        {
            cout<<"queue is empty:"<<endl;
        }

    else

        {
            d=item[front];
            front++;
            cout<<"deleted data is:"<<endl;
            cout<<d<<endl;
        }    
}

void display()
{
    int i;

    if(rear<front)
        {
            cout<<"queue is empty:"<<endl;
            
        }


    else
        {
            for(i=front;i<=rear;i++)
                {
                    cout<<item[i]<<endl;
                }
        }    
}
