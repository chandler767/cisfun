void print_char(char c);

void print_triangle(int n) {
	int u, k;
	int f = 0;
	print_char('\n');

	for (u = 0; u < n; u++) { /* loop for each line */
		for (k = 0; k <= f; k++) { /* for each star (adding) */
			print_char('*');
		}
		f = f+1;
		print_char('\n');
	}
	f = f-1;
	for (u = 0; u < n; u++) { /* loop for each line */
		for (k = f; k > 0; k--) { /* for each star (reducing) */
			print_char('*');
		}
		f = f-1;
		print_char('\n');
	}

}
