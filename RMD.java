class Base
{
    public int  A , B ;

    public void Fun()
    {   System.out.println("Insed Base Fun");}
    public void Gun()
    {   System.out.println("Insed Base Gun");}
    public void Sun()
    {   System.out.println("Insed Base Sun");}
    public void Run()
    {   System.out.println("Insed Base Run");}
}

class Derived extends Base 
{
    public int X , Y ;

    public void Fun()
    {System.out.println("indie derived Fun");}
    public void Sun()
    {System.out.println("indie derived Sun");}
    public void Mun()
    {System.out.println("indie derived Mun");}
    public void Bun()
    {System.out.println("indie derived Bun");}
}


class RMD
{
  public static void main(String A[] )
  {
    Base bobj = new Derived();

    bobj.Fun();    //Derived Fun
    bobj.Gun();    //Base Gun
    bobj.Sun();    //Derived Sun 
    bobj.Run();    //base Run
    // bobj.Mun();    //Error
    // bobj.Bun();    //Error
    
  }


}