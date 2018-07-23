int faktorial(int a) {
	int i, total = 1;
	for (i=1; i<a; i++) {
		total = total * i;
	}
	return total;
}
