class Student implements Cloneable
{
    public String name;
    public int Age;
    public int Marks;

    public Student(String A, int B, int C)
    {
        this.name = A;
        this.Age = B;
        this.Marks = C;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
class ObjectDemo4
{
    public static void main(String A[])
    {
        try
        {
        Student sobj = new Student("Sagar",21,89);

        Student sobjX = (Student)sobj.clone();

        System.out.println("Name is :"+sobj.name);
        System.out.println("Age is :"+sobj.Age);
        System.out.println("Marks is :"+sobj.Marks);

        System.out.println("Name is :"+sobjX.name);
        System.out.println("Age is :"+sobjX.Age);
        System.out.println("Marks is :"+sobjX.Marks);
        }
        catch(Exception obj)
        {}
    }
}
