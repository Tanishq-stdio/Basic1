
class Marvellous 
{
    public int A;
    public float B;
    private int C;

    public Marvellous()
    {
        A = 10;
        B = 10.10f;
        C = 20;
    }

    void Display()
    {
        int i = 11;
        System.out.println("Value of i is : "+i);
    }
}

class Demo
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();

        mobj.Display();
    }
}
