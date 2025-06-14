#include "rna_transcription.h"

char	*to_rna(const char *dna)
{
	char *rna = malloc(strlen(dna) + 1);
	if (!rna)
		return (NULL);
	int i = 0;
	while (dna[i])
	{
		switch (dna[i]) {
			case 'G':
				rna[i] = 'C';
				break;
			case 'C':
				rna[i] = 'G';
				break;
			case 'T':
				rna[i] = 'A';
				break;
			case 'A':
				rna[i] = 'U';
				break;
			default:
				rna[i] = dna[i];
		}
		i++;
	}
	rna[i] = '\0';
	return (rna);
}
