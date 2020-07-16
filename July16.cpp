class Solution {
public:
    long double myPow(long double x, long long int n) {
        if(n==0)
            return 1;
        if(x==0)
            return 0;
        if(n==1)
            return x;
        if(n==-1)
            return 1/x;
long double temp=myPow(x,abs(n/2));
        if(n>=0&&n%2==0)
            return (double)temp*temp;
        else if(n>=0&&n%2!=0)
        {
          return (double)temp*temp*x;  
            
        }
        if(n<0&&abs(n)%2==0)
        {//cout<<"hi"<<" "<<temp<<endl;
         //long double t=temp*temp;
            return (double)1/(temp*temp);
        }
        else
        { //cout<<"yo"<<" "<<temp<<endl;
            return (double)(1/(temp*temp*x));
        }
        
       
    }
};