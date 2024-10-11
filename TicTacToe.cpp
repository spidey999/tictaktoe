#include <iostream>
//#include <ctime>
using namespace std;

class player
{
string name;
int c,d,e;
public:
char arr[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
int arr1[3][3]={{11,12,13},{21,22,23},{31,32,33}};
int arr2[9]={0,0,0,0,0,0,0,0,0};

    void inputx(int l)
    { //system("cls");
        int z=0;
        do{
        cout<<"X 's chance Select Index and Hit Enter\n";
        cin>>e;
        z=sch(e,l,'X');
        if(z==0)
        { //system("cls");
            cout<<"Invalid Choice\n";
            cin.clear();
            cin.ignore(100,'\n');
        }
        z==1;
    }while(z!=1);//e!=11 && e!=12 && e!=13 && e!=21 && e!=22 && e!=23 && e!=31 && e!=32 && e!=33 && z!=1);
    }

    void inputo(int l)
    { //system("cls");
        int z=0;
        do{
        cout<<"O 's chance Select Index and Hit Enter\n";
        cin>>e;
        z=sch(e,l,'O');
        if(z==0)
        { //system("cls");
            cout<<"Invalid Choice\n";
            cin.clear();
            cin.ignore(100,'\n');
        }
    }while(z!=1);//e!=11 && e!=12 && e!=13 && e!=21 && e!=22 && e!=23 && e!=31 && e!=32 && e!=33 && z!=1);
    }

    void pnt()
    {cout<<endl;cout<<endl;
        for(int i=0;i<3;i++)
        {    
            for(int j=0;j<3;j++)
            {
                cout<<arr1[i][j]<<'\t';
            }
            cout<<endl;
        }
    }


    void print()
    {
     //for(int i=0;i<3;i++)
       // {    
        // for(int j=0;j<3;j++)
         //{
            cout<<"     |     |     \n";
            cout<<"  "<<arr[0][0]<<"  |"<<"  "<<arr[0][1]<<"  |"<<"  "<<arr[0][2];
            cout<<"\n_____|_____|_____\n";

            cout<<"     |     |     \n";
            cout<<"  "<<arr[1][0]<<"  |"<<"  "<<arr[1][1]<<"  |"<<"  "<<arr[1][2];
            cout<<"\n_____|_____|_____\n";

            cout<<"     |     |     \n";
            cout<<"  "<<arr[2][0]<<"  |"<<"  "<<arr[2][1]<<"  |"<<"  "<<arr[2][2];
            cout<<"\n     |     |     \n";
     }

    int winner(int a, char ch)
    {
        for(int j=0;j<3;j++)
        {
            if((arr[j][0]==arr[j][1] && arr[j][1]==arr[j][2] && (arr[j][2]=='X' || arr[j][2]=='O')) ||
               (arr[0][j]==arr[1][j] && arr[1][j]==arr[2][j] && (arr[2][j]=='X' || arr[2][j]=='O')) || 
               (arr[j][j]==arr[j+1][j+1] && arr[j+1][j+1]==arr[j+2][j+2] && (arr[j+2][j+2]=='X' || arr[j+2][j+2]=='O')) || 
               (arr[j][j+2]==arr[j+1][j+1] && arr[j+1][j+1]==arr[j+2][j] && (arr[j+2][j]=='X' || arr[j+2][j+2]=='O')))
              {
                cout<<"***** Winner is "<<ch<<" *****"<<endl;
                a=1;
                return a;
              }
        }
          
return 0;
    }

    int sch(int e,int l,char choice)
    {   int n=9,i=0;
        while(i<n)
        {
            if(e==arr2[i])
                {
                    cout<<"Cheating Mat Kar BKL\n";
                    return 0;
                }
            else
                    i++;
        }

        if(e==11 || e==12|| e==13|| e==21|| e==22|| e==23|| e==31|| e==32|| e==33)
        {   c=e/10;
            d=e%10;
            arr[c-1][d-1]=choice;
            arr2[l]=e;
            return 1;
        }
        return 0;
    }

};


int main()
{
    system("cls");
    player p1,p2;
    
    
    int a=0;
    int l=0;

do{     p1.print();
cout<<endl;
        p1.pnt();
    cout<<endl;
        p1.inputx(l);
        l++;

if(l==9)
{   system("cls");
    p1.print();
    cout<<"\n*** Its A Tie ***\n";
    break;}
system("cls");
    cout<<endl;
        a=p1.winner(a,'X');
    
    cout<<endl;
        p1.print();
    cout<<endl;
   
   if(a==1)
    {break;}
   
        p1.pnt();
    cout<<endl;
        p1.inputo(l);
        l++;
        system("cls");
    cout<<endl;
        a=p1.winner(a,'O');
       
        cout<<endl;

 }while(a!=1);// && l!=9);
   
   cout<<"Press Enter To Continue";
   getchar();getchar();
  return 0;
}