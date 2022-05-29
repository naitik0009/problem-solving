#include <iostream>
#include <string>
using namespace std;


int leapYear(int year){
    if(year%4==0){
        return 1;
    }
    return 0;
}


//Here we create a class name Date
class Date
{
private:
    int month, day, year;
    int user_input ;
    int mc,dc,yc;

public:
    //Default constructor
    Date(){
        dc = 0;
        mc = 0;
        yc = 0;
    }
    //parametertized constructor
    Date(int day){
//
        dc = day;
//        year = y;
    }
    //store date in array to print
    string n_month[13]={" ","January","febeuary","March","April","May","June","July","August","September","October",
        "November","December"};
    void setMonth(int m)
    {
        month = m;
    }
    void setDay(int d)
    {
        day = d;
    }
    void setYear(int y)
    {
        year = y;
    }
    void setuser_input(int u){
        user_input = u;
    }
    //function to print dates in different formats
    void Format(int month, int day, int year)
    {
        cout << month << "/" << day << "/" << year << endl;
    }
    void Format1(int month, int day, int year){
        cout<< n_month[month] <<" "<< day <<", "<<year<<endl;
        
    }
    void Format2(int month,int day, int year){
        cout<< day <<" "<<n_month[month]<<" "<<year<<endl;
    }
    
//    incremented to next year;
    void Int_dec(int month,int day,int year){
        if(user_input==1){
            switch(month){
                    case 1:
                    if(day == 31){
                    ++month;
                        day = 1;
                        
                    }
                   else{
                        ++day;

                    }
                    break;
                    case 2:
                    if(year%4==0 && day == 29 ){
                        ++month;
                        day = 1;
                        
                    }
                    else if(year%4==0 && day<29 ){
                        ++day;
                    }
                    else if (!(year%4==0) && (day<28) ){
                        cout<<"we are inside else if";
                        
                            ++day;
                        
                    }
                    
                    else{
                        
                        day=1;
                        ++month;
                    }
                    break;
                    case 3:
                    if(day == 31){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 4:
                    if(day == 30){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 5:
                    if(day == 31){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 6:
                    if(day == 30){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 7:
                    if(day == 31){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 8:
                    if(day == 31){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 9:
                    if(day == 30){
                    ++month;
                day = 1;}
                    else{++day;}
                    break;
                    case 10:
                    if(day == 31){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 11:
                    if(day == 30){
                    ++month;
                        day = 1;}
                    else{++day;}
                    break;
                    case 12:
                    if(day == 31){
                    month = 1;
                    day = 1;
                        year++;}
                    else{++day;}
                    break;
                    default:
                    std::cout<<"Error value"<<std::endl;
                }
            
        }
        
        else{
            switch(month){
                    case 1:
                    if(day == 1){
                    month = 12;
                    day = 31;
                        --year;}
                    else{--day;}
                    break;
                    case 2:
//                    if(day == 1){
//                    --month;
//                        day = 28;}
//                    else{--day;}
                    if(year%4==0 && day == 29 ){
                        
                        --day ;
                        
                    }
                    else if(year%4==0 && day==1 ){
                        day=31;
                        --month;
                    }
                    else if (!(year%4==0) && (day<28 && day!=1) ){
                        
                        
                            --day;
                        
                        
                    }
                    else if (!(year%4==0) && (day==1) ){
                        
                        
                        day=31;
                        --month;
                        
                    }
                    break;
                    case 3:
                    if(day == 1){
                    --month;
                        day = 31;}
                    else{--day;}
                    break;
                    case 4:
                    if(day == 1){
                    --month;
                        day = 30;}
                    else{
                        --day;
                    }
                    break;
                    case 5:
                    if(day == 1){
                    --month;
                    day = 31;}
                    else{
                        --day;
                    }
                    break;
                    case 6:
                    if(day == 1){
                    --month;
                        day = 30;}
                    else{
                        --day;
                    }
                    break;
                    case 7:
                    if(day == 11){
                    --month;
                        day = 31;}
                    else{--day;}
                    break;
                    case 8:
                    if(day == 1){
                    --month;
                        day = 31;}
                    else{--day;}
                    break;
                    case 9:
                    if(day == 1){
                    --month;
                        day = 30;}
                    else{--day;}
                    break;
                    case 10:
                    if(day == 1){
                    --month;
                        day = 31;}
                    else{--day;}
                    break;
                    case 11:
                    if(day == 1){
                    --month;
                        day = 30;}
                    else{--day;}
                    break;
                    case 12:
                    if(day == 1){
                    --month;
                        day = 31;}
                    else{--day;}
                    break;
                    default:
                    std::cout<<"Error value"<<std::endl;
                }
        }
        cout<< day <<" "<<n_month[month]<<" "<<year<<endl;
        
    }
    Date operator ++(){
        ++dc;
        return Date(dc);
    }
    void display(){
        std::cout<<dc;
    }
};


int main()
{
    int di;
    cin>>di;
    Date da(di);
    ++da;
    da.display();
    Date cal;
    int m, d, y;
    string n_month;
    int user_input;
    cout << "Enter month";
    cin >> m;
    cout << "Enter day :";
    cin >> d;
    cout << "Enter year :";
    cin >> y;
    cout<<"Enter 1 or 2"<<endl;
    cin>> user_input;
    cal.setuser_input(user_input);
    if(m<=0 || d>=32 || m>=13 || d<=0){
            cout<<"hello";
    }
    else if(m==2 && y%4==0 && d<30){
        cal.Format(m, d, y);
        cal.Format1(m, d, y);
        cal.Format2(m, d, y);
        cout<<"--------Q3-----------"<<endl;
        cal.Int_dec(m,d,y);
    }
    else if (m==2 && !(leapYear(y)) && d>28){
        cout<<"we cannot process this";
    }
    else{
        cal.Format(m, d, y);
        cal.Format1(m, d, y);
        cal.Format2(m, d, y);
        cout<<"--------Q3-----------"<<endl;
        cal.Int_dec(m,d,y);
    }


    return 0;
}
