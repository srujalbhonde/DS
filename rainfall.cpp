#include <iostream>
using namespace std;
class rainfalldata{
int cities=3, months=4;
float rainfall[3][4];
public:
void accept(void){
cout <<"Enter rainfall data (in mm) for "<<cities<<" cities over "<<months<<" months:\n";
for(int i=0; i < cities; i++){
cout<<"City "<<i+1<<":\n";
for(int j=0; j < months; j++){
cout<<"Month "<<j+1<<": ";
cin>>rainfall[i][j];
}
}
}
void info(void){
cout<<"-----------------------------------------------------------------";
cout<<"\nRainfall Data (in mm):\n";
cout<<"City ";
for(int j=0; j < months; j++){
cout<<"Month "<<j + 1<<" ";
}
cout<<" Average\n";
cout<<"-----------------------------------------------------------------\n";
}
void display(void){
for(int i=0; i < cities; i++) {
float sum = 0;
cout<<"City "<<i + 1<<" ";
for(int j=0; j < months; j++) {
cout << rainfall[i][j] << " ";
sum += rainfall[i][j];
}
float avg = sum / months;
cout<<" "<<avg<<"\n";
}
}
};
int main(){

rainfalldata rd;
rd.accept();
rd.info();
rd.display();
return 0;
}

#include <iostream>
using namespace std;
class TemperatureData {
int cities = 3, days = 7;
float temp[3][7];
public:
void accept() {
cout << "Enter daily temperatures (°C) for " << cities
<< " cities over " << days << " days:\n";
for (int i = 0; i < cities; i++) {
cout << "\nCity " << i + 1 << ":\n";
for (int j = 0; j < days; j++) {
cout << "Day " << j + 1 << ": ";
cin >> temp[i][j];
}
}
}
void display() {
cout << "\n-----------------------------------------------------------------------\n";
cout << "City/Day ";
for (int j = 0; j < days; j++) {
cout << "Day" << j + 1 << " ";
}
cout << "Weekly Avg\n";
cout << "-----------------------------------------------------------------------\n";
for (int i = 0; i < cities; i++) {
float sumWeek = 0;
cout << "City" << i + 1 << " ";
for (int j = 0; j < days; j++) {
cout << temp[i][j] << " ";
sumWeek += temp[i][j];
}
float avgWeek = sumWeek / days;
cout << avgWeek << "\n";
}
cout << "-----------------------------------------------------------------------\n";
cout << "Daily Avg ";
for (int j = 0; j < days; j++) {
float sumDay = 0;
for (int i = 0; i < cities; i++) {

sumDay += temp[i][j];
}
float avgDay = sumDay / cities;
cout << avgDay << " ";
}
cout << "\n";
}
};
int main() {
TemperatureData td;
td.accept();
td.display();
return 0;
}