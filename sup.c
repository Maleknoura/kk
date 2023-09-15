#include<stdio.h>
int superficieCarre()
{
    int Cote,superficie;
    printf("Veuillez saisir la valeur du cote:");
    scanf("%d",&Cote);
    superficie = Cote*Cote;
    return(superficie);

}
int main()
{
    int Sup;
    Sup = superficieCarre ();
    printf("la superficie est:%d\n", Sup);
    return 0;

}