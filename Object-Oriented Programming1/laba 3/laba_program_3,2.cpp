#include <iostream>
using namespace std;
class time
{ private:
                int hours,minutes,seconds,k;
public:
                time(){
                                hours=0;
                                minutes=0;
                                seconds=0;
                }
                
                time(int a,int b,int c)
                {   if(c>=60){
                       c=0;}
                    else {
						k=c;}
                            seconds=k;
                            
                    if(b>=60)
                        {b=0;}
                    else{
					    k=b;}
                            minutes=b;
                    if(a>=23)
                        {a=0;}
                    else{
					    k=a;}
                            hours=a;
                }
                
                void add(time t1,time t2)
                {         seconds=t1.seconds+t2.seconds;
                                while(seconds>=60)
                                {            seconds-=60;
                                                minutes+=1;     }
                                minutes=t1.minutes+t2.minutes;
                                minutes=minutes+1;
                                while(minutes>=60)
                                {            minutes-=60;
                                                hours+=1;        }
                                hours=t1.hours+t2.hours;
                                hours=hours+1;
                }
                
                void showtime()
                {    
                     cout<<"\nThe sum of both times is "<<hours<<":"<<minutes<<":"<<seconds<<".\n";
                }};
                
                
int main()
{
	int hours1, minutes1, seconds1,hours2, minutes2, seconds2;
	            cout<<"What time is it?(enter hours)"<<endl;
                cin>>hours1;
                cout<<"What time is it?(enter minutes)"<<endl;
                cin>>minutes1;
                cout<<"What time is it?(enter seconds)"<<endl;
                cin>>seconds1;
                
                cout<<"Which time do you want to add?(enter hours)"<<endl;
                cin>>hours2;
                cout<<"Which time do you want to add?(enter minutes)"<<endl;
                cin>>minutes2;
                cout<<"Which time do you want to add?(enter seconds)"<<endl;
                cin>>seconds2;
                
                time t1(hours1,minutes1,seconds1);
                time t2(hours2,minutes2,seconds2);
                time t3;
                t3.add(t1,t2);
                cout<<"Time 1 is "<<hours1<<":"<<minutes1<<":"<<seconds1<<".\n";
                cout<<"Time 2 is "<<hours2<<":"<<minutes2<<":"<<seconds2<<".\n";
                t3.showtime();
}
