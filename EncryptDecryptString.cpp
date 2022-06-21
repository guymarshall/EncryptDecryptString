#include <iostream>

int main()
{
   int i, option;
   char string_to_encrypt[100];

   std::cout << "Please enter a string:\t";
   std::cin >> string_to_encrypt;

   std::cout << "\nPlease choose following options:\n";
   std::cout << "1 = Encrypt the string.\n";
   std::cout << "2 = Decrypt the string.\n";
   std::cin >> option;

   switch (option)
   {
      case 1:
         for (i = 0; (i < 100 && string_to_encrypt[i] != '\0'); i++)
         {
            string_to_encrypt[i] = string_to_encrypt[i] + 2;
         }

         std::cout << "\nEncrypted string: " << string_to_encrypt << std::endl;
         break;

      case 2:
         for (i = 0; (i < 100 && string_to_encrypt[i] != '\0'); i++)
         {
            string_to_encrypt[i] = string_to_encrypt[i] - 2;
         }

      std::cout << "\nDecrypted string: " << string_to_encrypt << std::endl;
      break;

      default:
         std::cout << "\nInvalid Input !!!\n";
   }
   return 0;
}

