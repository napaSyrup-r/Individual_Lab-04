#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i] );
    }

    int freq[6] = {0}; // array initialization = {0} ekta 0 dilei shobgulo 0 diye initialize hye jay

    for(int i=0; i<n; i++){
        if( a[i] == 0){
            freq[0]++;
        }
        else if( a[i] == 1){
            freq[1]++;
        }
        else if( a[i] == 2){
            freq[2]++;
        }
        else if( a[i] == 3){
            freq[3]++;
        }
        else if( a[i] == 4){
            freq[4]++;
        }
        else if( a[i] == 5){
            freq[5]++;
        }
    }

    printf("%d -> %d\n", 0, freq[0]);
    printf("%d -> %d\n", 1, freq[1]);
    printf("%d -> %d\n", 2, freq[2]);
    printf("%d -> %d\n", 3, freq[3]);
    printf("%d -> %d\n", 4, freq[4]);
    printf("%d -> %d\n", 5, freq[5]);
    
    return 0;
}
