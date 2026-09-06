#include<stdio.h>
int main()
{
    char lbn[25];
    int nc, nd, nst, cpc, cnd, asc, cc, netc, tli;
    printf("Enter lab name:  ");
    scanf("%24s", lbn);
    printf("Enter number of computers:   ");
    scanf("%d", &nc);
    printf("Enter the number of network devices:  ");
    scanf("%d", &nd);
    printf("Enter cost per computer:   ");
    scanf("%d", &cpc);
    printf("Enter cost per network device:   ");
    scanf("%d", &cnd);
    printf("Enter the annual security software cost:   ");
    scanf("%d", &asc);
    printf("\n");
    printf("\n");
    printf("\n");
    cc= nc*cpc;
    netc= nd*cnd;
    tli= cc+netc+asc;
    printf("=================================\n");
    printf("\tCYBERSECURITY LAB REPORT\n");
    printf("=================================\n");
    printf("Lab Name             :%s\n", lbn);
    printf("Computers            :%d\n", nc);
    printf("Network Devices      :%d\n", nd);
    printf("Security Tools       :%d\n", nst);
    printf("Computer Cost        :%d\n", cc);
    printf("Network Device Cost  :%d\n", netc);
    printf("Software Cost        :%d\n", asc);
    printf("\n--------------------------------\n");
    printf("Total Lab Investment :%d\n", tli);
    printf("--------------------------------\n");
    printf("\n");
    printf("================================\n");
    return 0;
}