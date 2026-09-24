#include<cstdio>

int main(){
    int a,b,c,d,e;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int somme =a+b+c+d+e;
    double moyenne =static_cast<double>(somme)/5;

    printf("La somme est:%d\n",somme);
    printf("La moyenne est:%.1f\n",moyenne);


}


Résultat après éxécution avec les valeurs 7 8 9 10 10

La somme est:44
La moyenne est:8.8

