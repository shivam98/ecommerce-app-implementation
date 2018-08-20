#include<iostream>

using namespace std;

int k=0;

class product
{
    public:
    string pname,category;
    int qty;
    int pdate,expdate;      //purchase and expiry dates
    float price;

                                        //submite details of a product
                         //list all products
                 //get details of a product

}s[100];


    void submit()
    {
        product o;
        cout<<"\nenter product details:";
        cout<<"\nProduct name : "; cin>>o.pname;
        cout<<"\nProduct category  : ";  cin>>o.category;
        cout<<"\nQuantity : ";  cin>>o.qty;
        cout<<"Product date(mm/dd/yyyy) : "; cin>>o.pdate;
        cout<<"\nExpiry date((mm/dd/yyyy)) : "; cin>>o.expdate;
        cout<<"\nPrice : "; cin>>o.price;

       // cin>>o.pname>>o.category>>o.qty>>o.pdate>>o.expdate>>o.price;

        s[k++]=o;

    }

void listAll()
{
for(int i=0;i<k;i++)
        {

                cout<<"all products \n";

                cout<<s[i].pname<<"\n";
        cout<<s[i].category<<"\n";
        cout<<s[i].qty<<"\n";
        cout<<s[i].pdate<<"\n";
        cout<<s[i].expdate<<"\n";
        cout<<s[i].price<<"\n";



        }

}

void get(string name)
    {   //product o;
    int f=0;
    cout<<"\n product queried for :"<<name<<"\n";
        for(int i=0;i<k;i++)
        {
            if(s[i].pname == name)
            {f=1;
        cout<<"product name "<<s[i].pname<<"\n";
        cout<<"category "<<s[i].category<<"\n";
        cout<<"Quantity "<<s[i].qty<<"\n";
        cout<<"Product date "<<s[i].pdate<<"\n";
        cout<<"expiry date "<<s[i].expdate<<"\n";
        cout<<"price "<<s[i].price<<"\n";

            }

        }
        if (f==0)
        cout<<"\nnot found";

    }

int main()
{

    int n=1;
    //product p;
    string name;
    cout<<"\n\nChoose\n1:enter new product\n2:query for product\n3:List all products\n4:filter\n5:exit\n\n";
    cin>>n;
    while(n!=5)
    {
        switch(n)
        {
        case 1: submit();
            break;
        case 2:
            {

                    cout<<"Enter product name ";
                    cin>>name;
                    get(name);
            }
            break;
        case 3: listAll();
        break;

        case 4:

        case 5: break;


        }


    cout<<"\n\nChoose\n1:enter new product\n2:query for product\n3:List all products\n4:filter\n5:exit";
    cin>>n;


    }
    return 0;
}
