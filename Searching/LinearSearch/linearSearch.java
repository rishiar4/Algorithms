import java.util.*;

public class linearSearch{
    public static void main(String[] args) {
        Scanner scn = new Scanner( System.in );
        int n = scn.nextInt();
        int[] arr = new int[ n ];
        for( int i = 0; i < arr.length; i++ )
        {
            arr[i] = scn.nextInt();
        }
        int k = scn.nextInt();

        int pos = search( arr, k );

        if( pos == -1 )
        {
            System.out.println(" Not Found ");
        }
        else
        {
            System.out.println(pos);
        }
    }

    public static int search( int[] arr, int k )
    {
        int pos = -1;
        for( int i = 0; i < arr.length; i++ )
        {
            if( arr[i] == k )
            {
                pos = i;
                break;
            }
        }
        return pos;
    }

}
