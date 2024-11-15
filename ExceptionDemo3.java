import java.util.Scanner;

class ExceptionDemo1
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        No1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        No2 = sobj.nextInt();

        try
        {
            System.out.println("inside try block");
            Ans = No1 / No2;
        }
        catch(ArthimaticException obj)
        {
            System.out.println("Inside catch block");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside finally block");
        }

        Ans = No1 / No2;

        System.out.println("Division is :"+Ans);

    }
}