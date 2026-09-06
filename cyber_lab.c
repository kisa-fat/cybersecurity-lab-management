#include <stdio.h>
int main() {
    int totalSystems;
    int vulnerableSystems;
    float riskPercentage;
    printf("====================================\n");
    printf("       CYBERSECURITY RISK REPORT\n");
    printf("====================================\n\n");
    printf("Enter the total number of systems: ");
    scanf("%d", &totalSystems);
    printf("Enter the number of vulnerable systems: ");
    scanf("%d", &vulnerableSystems);
    riskPercentage = ((float)vulnerableSystems / totalSystems) * 100;
    printf("\n------------------------------------\n");
    printf("Total Systems: %d\n", totalSystems);
    printf("Vulnerable Systems: %d\n", vulnerableSystems);
    printf("Risk Percentage: %.2f%%\n", riskPercentage);
    printf("------------------------------------\n");
    return 0;
}
