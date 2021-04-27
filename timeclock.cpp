/* C++ program to read time in HH.MM.SS and convert it into Total seconds.*/
#include<iostream>
using namespace std;

class Time
{
    private:
    int seconds;
    int hh,mm,ss;

    public:
    void GetTime(void);
    void ConvertIntoSeconds(void);
    void DisplayTime(void);
};

void Time ::GetTime(void)
{
    cout<<"Enter Time = "<<endl;
    cout<<"hours ? ";
    cin>> hh;
    cout<<"minutes ? ";
    cin>> mm;
    cout<<"seconds ? ";
    cin>> ss;
}
void Time ::ConvertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
void Time ::DisplayTime(void)
{
    cout<<"The time is = "<< hh << ":"
                          << mm << ":"
                          << ss << endl;

    cout<<"Total Time in seconds : "<< seconds;                     
}
int main()
{
    Time T;
    T.GetTime();
    T.ConvertIntoSeconds();
    T.DisplayTime();

    return 0;
}
