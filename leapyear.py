import datetime
date=datetime.date.today()
currentyear=int(date.strftime("%Y"))
print("enter the lastyear")
endyear=int(input())
print("list of leapyear")
for year in range(currentyear,endyear):
    if((year%4==0)and(year%100!=0)or(year%400==0)):
        print(year)
        
