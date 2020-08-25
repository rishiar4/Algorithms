import java.util.*;

// Using the adjaceny approach and the use of jusy swapping

public class BSort{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for( int i = 0; i < n; i++ )
        {
            arr[i] = scn.nextInt();
        }

        int[] ans = SORTB( arr );

        for( int ele : ans )
        {
            System.out.print( ele + " " );
        }
    }

    public static int[] SORTB( int[] arr )
    {
        for( int i = 0; i < arr.length - 1; i++ )
        {
            for( int j = 0; j < arr.length - 1; j++ )
            {
                if( arr[j] > arr[j+1] )
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        return arr;
    }
}
