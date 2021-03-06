#include "../game.h"

void	reset()
{
  my_putstr("\033[2J");
  my_putstr("\e[0m");
}

void	show_name()
{
  reset();
  my_putstr("\e[0;31m");
  my_putstr("\n\n\n       .--,--.\n");
  my_putstr("       `.  ,.'\n");
  my_putstr("        |___|\n");
  my_putstr("        :o o:   O    Bienvenue dans l'interface Chappie\n");
  my_putstr("       _`~^~'_  |    Miam miam !\n");
  my_putstr("     /'   ^   `\\=)\n");
  my_putstr("   .'  _______ '~|\n");
  my_putstr("   `(<=|     |= /'\n");
  my_putstr("       |     |\n");
  my_putstr("       |_____|\n");
  my_putstr("~~~~~~~ ===== ~~~~~~~~\n\n\n");
}

void	show_enter()
{
  char	*get;

  my_putstr("\e[5;36m");
  my_putstr("     Press enter to cook\n\n\n");
  my_putstr("\e[0m");
  readLine();
  start_game();
}

void	splash_screen()
{
  show_name();
  show_enter();
}
