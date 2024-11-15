class Demo
{
    public Demo()
    {
        System.out.println("Inside Constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside Finalize method");
    }
}
class ObjectDemo3
{
    public static void main(String A[])
    {
        Demo obj = new Demo();
        obj = null;
        System.gc();
    }
}