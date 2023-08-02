#include <stdio.h>
#include <String.h>
struct Camera
{
    int cameraSize;
    int prize;
    char name[20];
};
int main()
{
    struct Camera c1;
    printf("Enter Camera Size\n");
    scanf("%d", &c1.cameraSize);
    printf("Enter Camera Prise\n");
    scanf("%d", &c1.prize);
    printf("Enter Camera Name\n");
    scanf("%s", &c1.name);
    printf("%d\n", c1.cameraSize);
    printf("%d\n", c1.prize);
    printf("%s\n", c1.name);
}