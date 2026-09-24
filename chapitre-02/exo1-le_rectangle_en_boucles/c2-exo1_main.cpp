#include<cstdio>

    int main(){

        int lignes=12;
        int colonnes=40;
        int i=0;

            do{

                int j=0;

                    do{

                        if(i==0||i==lignes-1||j==0||j==colonnes-1){

                            printf("#");
                        }else{
                            printf(" ");
                        }
                        j++;
                    }while(j<colonnes);
                    printf("\n");
                i++;
            }while(i<lignes);

    }
