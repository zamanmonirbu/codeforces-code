/*
n=str.length();//string length/size
n=sizeof(arr)/sizeof(array1[0]);//arry length/size
sort(str.begin(),str.end());//string sorting
sort(arr,arr+n);//array sorting
transform(str.begin(), str.end(), str.begin(), ::toupper); //lower to upper case
transform(str.begin(), str.end(), str.begin(), ::tolower);//upper to lower
cout<<setprecision(n)<<fixed;//fixed value after decimal point
*max_element(arr, arr + n);//max value from arry
*min_element(arr, arr + n);//min value from arry
min(a,b);
max(a,b);
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,m,n,t,c1=0,c2=0,c3=0,c4=0,sum1=0,sum2=0,x=0,y,z;
    int arr[10000],arr1[10000],arr2[10000];
    string str,str1,str2;
    while(n!=1000){
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a==1)
            c1++;
        if(a==2)
            c2++;
        if(a==3)
            c3++;
        if(a==4)
            c4++;
    }
    cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;

    x=c4+c3;
    c1-=c3;
            cout<<"zero:"<<x<<" ";

    if(c1>c2*2&&c2>0){
       c2*=2;
        if(c2%4==0){
        x+=(c2/4);
        cout<<"first:"<<x<<" ";
    }
    else{
      x+=(c2/4);
        x++;
                cout<<"second:"<<x<<" ";

    }

    }
      else{
            c2+=c1;
               if(c2%4==0){
        x+=(c2/4);
                cout<<"third:"<<x<<" ";

    }
//    else{
//      x+=(c2/4);
//        x++;
//        cout<<"fouth:"<<x<<" ";

    }
    if(c1%4==0){
         x+=(c1/4);
                 cout<<"fifth:"<<x<<" ";

    }
    else if(c1>0){
             x+=(c1/4);
        x++;
                cout<<"seven:"<<x<<" ";

    }


    cout<<endl<<x<<endl;
      c1=0;
     c2=0;
     c3=0;
     c4=0;
    }



}

