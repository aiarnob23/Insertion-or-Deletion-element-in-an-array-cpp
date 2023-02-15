#include<bits/stdc++.h>
using namespace std;

void sortedInsertion(int arr[],int size,int pos,int num);
void sortedDeletion(int arr[],int size,int pos);


//main function
int main()
{
    int choice,arr[10000],size,i,pos,num;
    cout<<"This code is for sorted array\nEnter your choice\n1.For insertion\n2.For deletion\n3.For exit"<<endl;
    cin>>choice;
    cout<<"Enter the size of the arary"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    while (choice!=3)
    {
        cout<<"Enter the position of operation"<<endl;
        cin>>pos;
        if(pos<=0 || pos>size)
        {
            cout<<"Invalid Position"<<endl;
        }
        else
        {
            if(choice==1)
            {
                cout<<"Enter the number"<<endl;
                cin>>num;
                sortedInsertion(arr,size,pos,num);
                size++;
            }

            if(choice==2)
            {
                sortedDeletion(arr,size,pos);
                size--;

            }

            cout<<"Enter your choice\n1.For insertion\n2.For deletion\n3.For exit"<<endl;
            cin>>choice;
            if(choice==3)
            {
                break;
            }

        }


    }


    return 0;
}




//function for insertion
void sortedInsertion(int arr[],int size,int pos,int num)
{
    int temp;
    temp=num;

    for(int i=size; i>pos-1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;

    cout<<"After insertion\n"<<endl;
    for(int i=0; i<=size; i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<"\nThe element is inserted : "<<temp<<"\tAt position : "<<pos<<"\n\n";

}



//function for deletion
void sortedDeletion(int arr[],int size,int pos)
{
    int temp;
    temp=arr[pos-1];

    for(int i=pos-1; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }

    cout<<"After deletion"<<endl;

    for(int i=0; i<size-1; i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<"\nThe element is deleted : "<<temp<<"\tFrom position : "<<pos<<"\n\n";

}
