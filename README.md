int main(){
  int escolha;

  printf("MENU\n");
  printf("1- Fibonacci\n");
  printf("2- Fatoriais\n");
  printf("3- Palindromo\n");
  printf("4- Substring\n");
  printf("Escolha: ");
  sacnf("%d", &escolha);

  switch(escolha){
    case 1:
       fibonacci();
       break;
    case 2:
       fatorias();
       break;
    case 3:
       palindromo();
       break;
    case 4:
       substring();
       break;
    default:
      printf("Opção invalida!\n");
 }
 return0;
}
