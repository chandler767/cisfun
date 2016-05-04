void print_char(char c);

void print_square(int n)         
{
	if(n > 0){
		int u, p;
		for (u = n; u > 0; u--) { /* loop for each line */
			for (p = n; p > 0; p--) { /* loop for each char in the line */
				if (u == n || u == 1) { /* This the top or bottom of the square. */
					if (p == n || p == 1) { /* for the corners */
						print_char('o');	
					} else {
						print_char('-'); /*for border on top and bottom*/
					}
				} else { /* This the sides of the square. */
					if (p == n || p == 1) { /* for sides */
						print_char('|');
					} else {
						print_char(' ');
					}
				}
			}
			print_char('\n'); /*new line*/
		}
	}
}
