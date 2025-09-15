'''

    File name : program25.py
    Description : Accept number from user and display there factorial
    Author : Shrishti Sunil Gaikwad
    Date : 11/05/2025

'''

def Factorial(iNo):
    iFact = 1

    for i in range(1,iNo+1):
        iFact = iFact * i

    return iFact

def main():
    print("Enter number : ")
    iValue = int(input())

    iRet = Factorial(iValue)

    print("Factorial is : ",iRet)

if __name__ == "__main__":
    main()