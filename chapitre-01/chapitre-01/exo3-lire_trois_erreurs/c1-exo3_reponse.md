Remarques:
    #Faute1: l'erreur du point virgule
      
      Après compilation, on obtient le message:

        c1-exo3_main.cpp:5:30: error: expected ';' after expression
    5 |             printf("Bonjour")
      |                              ^
      |                              ;
1 error generated.

    #Faute2: l'erreur de "Printf" au lieu de "printf"

        Après compilation,  on obtient le message:

        c1-exo3_main.cpp:5:13: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
    5 |             Printf("Bonjour");
      |             ^~~~~~
      |             printf

    #Faute3: l'erreur de retirer #include<cstdio>

        Après compilation, on obtient le message:

        c1-exo3_main.cpp:5:13: error: use of undeclared identifier 'printf'
    5 |             printf("Bonjour");
      |             ^~~~~~
1 error generated.
