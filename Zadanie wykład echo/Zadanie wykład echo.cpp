// Zadanie wykład echo.cpp : 
//

# include < algorithm >
# include < iostream >
# include < iterator >
# include < string >
# include < vector >


auto main(int argc, char* argv[]) -> int
{
	bool drukujznaknowejlinii = true;
	bool drukujwodwrotnejkolejnosci = false;
	bool drukujwoddzielnychliniach = false;
	int liczbaopcji = 0;

	for (auto i = 1; i < 3 && i < argc; ++i)
	{
	
		
			std::string opcja = argv[i];
			if (opcja.compare("-n") == 0)
			{
				liczbaopcji++;
				drukujznaknowejlinii = false;
			}
			else if (opcja.compare("-r") == 0)
			{
				liczbaopcji++;
				drukujwodwrotnejkolejnosci = true;
			}
			else if (opcja.compare("-l") == 0)
			{
				liczbaopcji++;
				drukujwoddzielnychliniach = true;
			}
			else
				break;
			
		
		
	}

	if (drukujwodwrotnejkolejnosci)
	{
		for (auto i = argc - 1; i >= 1 + liczbaopcji; --i)
		{
			std::cout << argv[i];
			if (i > 1 + liczbaopcji)
			{
				std::cout << ", ";
				if (drukujwoddzielnychliniach)
				{
					std::cout << "\n";
				}
			}
		}

	}
	else
	{
		for (auto i = 1 + liczbaopcji; i < argc; ++i)

		{
			std::cout << argv[i];
			if (argc - 1 > i)
			{
				std::cout << ", ";
				if (drukujwoddzielnychliniach)
				{
					std::cout << "\n";
				}
			}
		}

	}	


	
	if (drukujznaknowejlinii)
	{
		std::cout << "\n";
	}

	
			
	return 0;
}