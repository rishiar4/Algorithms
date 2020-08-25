import java.util.Scanner;

public class SSort{
    public static void main( String[] args )
    {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[ n ];
        for( int i = 0; i < n; i++ )
        {
            arr[i] = scn.nextInt();
        }

        SSort( arr );

        for( int ele : arr )
        {
            System.out.print( ele + " ");
        }
    }

    public static void SSort( int[] arr )
    {
        for( int i = 0; i < arr.length; i++ )
        {
            int idxMax = 0;
            for( int j = 1; j < arr.length - i; j++ )
            {
                if( arr[idxMax] < arr[j] )
                {
                    idxMax = j;
                }
            }

            int temp = arr[idxMax];
            arr[idxMax] = arr[arr.length-1-i];
            arr[arr.length-1-i] = temp;
        }
    }
}
