/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 1000

char c, line[MAXLEN], * simbol, * first, sss;
char lines[200][MAXLEN];
int dlina_slova[300];
int  number_str = 0, slovo = 0, i = 0, kol_slov = 0, max_kol_slov = 0;
FILE* file;

void Obnulenie() {
	for (int i = 0; i < 300; i++)
		dlina_slova[i] = 0;
	for (int i = 0; i < 200; i++)
		strcpy_s(lines[i], _countof(lines[i]), " ");
}
void ZapolnenieInformazii() {
	while (!feof(file))
	{
		if (fgets(line, MAXLEN, file) == NULL)
			break;
		else
		{
			strcpy_s(lines[i], _countof(lines[i]), line);
			i++;
			slovo = 0;
			simbol = line;
			first = line;
			kol_slov = 0;
			number_str++;
			do
			{
				c = *simbol;
				if (*simbol == sss || *simbol == '\0' || *simbol == '\n')
				{
					if (slovo)
					{
						slovo = 0;
						if ((simbol - first) > dlina_slova[kol_slov - 1])
							dlina_slova[kol_slov - 1] = simbol - first;
					}
				}
				else
				{
					if (!slovo)
					{
						first = simbol;
						kol_slov++;
						slovo = 1;
					}
				}
				simbol++;
				if (c == '\0' || c == '\n')
					break;
			} while (1);
			if (kol_slov > max_kol_slov)
				max_kol_slov = kol_slov;
		}
	}
}
void IspolzovanieInformazii() {
	for (int i = 0; i < number_str; i++)
	{
		printf_s("%-4d| ", i + 1);
		strcpy_s(line, _countof(line), "");
		strcpy_s(line, _countof(line), lines[i]);
		simbol = line;
		first = line;
		kol_slov = 0;
		do
		{
			c = *simbol;
			if (*simbol == sss || *simbol == '\0' || *simbol == '\n')
			{
				if (slovo)
				{
					slovo = 0;
					int dlina = simbol - first;
					while (first < simbol)
						printf_s("%c", *first++);
					for (int j = 0; j < dlina_slova[kol_slov - 1] - dlina + 1; j++)
						printf_s(" ");
					printf("| ");

				}
			}
			else
			{
				if (!slovo)
				{
					first = simbol;
					kol_slov++;
					slovo = 1;
				}
			}
			simbol++;

			if (c == '\0' || c == '\n') {
				printf("\n");
				break;

			}
		} while (1);
	}
}

void main(int argc, char* argv[])
{
	sss = *argv[2];
	fopen_s(&file, argv[1], "r");
	Obnulenie();
	ZapolnenieInformazii();
	IspolzovanieInformazii();
	fclose(file);
}*/