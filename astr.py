Astr=input("Enter the string\n")
char=input("Enter the character\n")
print("Given string:\n")
print("Given character:\n")
res=0
for i in range(len(Astr)):
    if(Astr[i]==char):
        res=res+1
print("Number of time charecter is present in string:\n",res)
