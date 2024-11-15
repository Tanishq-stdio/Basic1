class HierarchalLevel
{
  public static void main(String A[] )

  {
    System.out.println("Inside main function");
   
    Derived dobj1 = new Derived();

    DerivedX dobj2 = new DerivedX();


    dobj1.Fun();
    dobj1.Gun();
    dobj2.Fun();
    dobj2.Sun(); 

  }


}

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

class DerivedX extends Base
{ 
    public int P, Q ;

    public DerivedX()
    {
       System.out.println("inside derivedX constructor");
    }
    public void Sun()
    {
        System.out.println("indie derived Sun");
    }

}