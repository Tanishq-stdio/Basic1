class Base
{
    public int  A , B ;

    public Base()
    {
        System.out.println("Inside Base constructor");
    }
    public void Fun()
    {
        System.out.println("Insed Base Fun");
    }
}

class Derived extends Base // class derived: public Base
{
    public int X , Y ;

    public Derived()
    {
       System.out.println("inside derived constructor");
    }
    public void Gun()
    {
        System.out.println("indie derived Gun");
    }
}


class Singlelevel
{
  public static void main(String A[] )
  {
    System.out.println("Inside main function");
    Derivedx dobj = new Derivedx();

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

}


}