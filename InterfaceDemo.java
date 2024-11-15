interface RBI
{
    int TaxRate = 30;
    public float CalculateIntrest();
}
class SBI implements RBI
{
    public float CalculateIntrest()
    {
        return 7.5f;
    }
}

class BOM implements RBI
{
    public float CalculateIntrest()
    {
        return 8.2f;
    }
}
class InterfaceDemo
{
    public static void main(String A[])
    {
        System.out.println("Tax Rate is :"+RBI.TaxRate);
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        System.out.println("Intreset rate of SBI is :"+sobj.CalculateIntrest());
        System.out.println("Intreset rate of BOM is :"+bobj.CalculateIntrest());


    }
}