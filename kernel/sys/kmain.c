/*
**  Copyright (C) 2012 - Jonathan Salwan - http://www.twitter.com/jonathansalwan
** 
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
** 
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sys/kernel.h"
#include "sys/mm.h"
#include "sys/syscalls.h"

void kmain(void)
{
  kVideo_clear_screen();
  printk("[+] Kaminou version v0.1\n");
  printk("[+] by Jonathan Salwan\n\n");

  kGDT_init();
  kIDT_init();
  kPIC_init();
  kMM_init();
  initEsp();

  sti();

  printk("\nKernel is running !\n");

  while(1);
}
