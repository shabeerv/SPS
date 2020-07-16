#include <stdio.h>

int main()
{
    int weight, addCharge, perCharge = 170, fixedCharge = 200;
    int tempWeight, totalCharge, multiplier;
    printf("Enter the weight of parcel (In gm):\n");
    scanf("%d", &weight);

    if(weight <= 500)
    {
        printf("Parcel charge for %dgm is Rs. %d\n", weight, fixedCharge);
    }
    else
    {
        tempWeight = (weight/500)-1;
        fixedCharge = tempWeight * perCharge;
        totalCharge = fixedCharge + 200;
        printf("Parcel charge for %dgm is Rs. %d\n", weight, totalCharge);
    }
    return 0;
}