# C
Projeto de estudos de lógica e estruturas de dados em C

## Link oficial para executar código C com compilador GCC no VSCODE
https://code.visualstudio.com/docs/cpp/config-mingw

## Tipos em C

- char, 1 byte, range de -128:127 ou 0:255
- int, 4 bytes, range de -2.147.483.648:2.147.483.647
- float, 4 bytes, ~ 6 casas decimais de precisão
- double, 8 bytes, ~ 15 casas decimais de precisão
- boolean, 1 byte, 0 (false) ou 1 (true)

### String
```
char name[10] = "your name";
```
Ao criar uma String, deve ser sempre com array, e a quantidade de caracteres que a string contém dentro do array +1, porque, por padrão, toda string em C termina com ***/0***, e esse caracter deve ser considerado.
