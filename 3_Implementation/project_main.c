#include <unit_converter.h>

int u1=0;
int u2=0;
int a=0;
int conversion_mode=0;
void unit_converter_menu(void);

int main(int u1, int u2, int a) 
{
    printf("\n=====Unit Converter=====\n");
    while(1)
    {
        unit_converter_menu();
    }
}

void unit_converter_menu(void)
{
    printf("\nAvailable modes\n");
    printf("\n1. Length\n2. Mass\n3. Time\n4. Exit");
    printf("\nEnter your choice\n\n");
    scanf("%d", &conversion_mode);
    
    if (4 == conversion_mode)
    {
        printf("\nThank you... ");
        exit(0);
    }
    
    switch (conversion_mode)
    {
        case 1:
        printf("Length Conversion");
        printf("Available Conversions");
        printf("\n1. Millimeter\n2. Centimeter\n3. Meter\n4. Kilometer\n");
        printf("Ensure u1=Present unit and u2=Desired unit and enter value");
        scanf("%d %d %d", &u1, &u2, &a);

        int length_convert(int u1, int u2, int a);
        getchar();
        break;

        case 2:
        printf("Mass Conversion");
        printf("Available Conversions");
        printf("\n1. Milligram\n2. Gram\n3. Kilogram\n4. Metric Ton\n");
        printf("Ensure u1=Present unit and u2=Desired unit and enter value");
        scanf("%d %d %d", &u1, &u2, &a);

        int mass_convert(int u1, int u2, int a);
        getchar();
        break;

        case 3:
        printf("Time Conversion");
        printf("Available Conversions");
        printf("\n1. Seconds\n2. Minutes\n3. Hours\n4. Day\n");
        printf("Ensure u1=Present unit and u2=Desired unit and enter value");
        scanf("%d %d %d", &u1, &u2, &a);

        int time_convert(int u1, int u2, int a);
        getchar();
        break;

        default:
        printf("\n\tEnter correct input");
         break; 
    }
}
