import java.util.Scanner;

class AgeInvalidException extends ExceptionDemo1
{
    public AgeInvalidException(String str)
    {
        super(str);
        System.out.println("Inside Constructor");
    }
}

class ExceptionDemo6
{
    public static void main(String A[])
    {
        int Age = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Age :");
        Age = Sobj.nextInt();
        try
        {
            System.out.println("Inside try");
            if(Age < 18)
            {
                throw new AgeInvalidException("Your age is less than 18");
            }
        }
        catch(AgeInvalidEception obj)
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
        finally(AgeInvalidEception obj)
    }
}
