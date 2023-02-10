#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form("ShrubberyCreationForm", 145, 137)
{
    this->setName(name);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getsignGrade(), src.getexecuteGrade())
{
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm src)
{
    this->setName(src.getName());
    this->setIndicate(src.getIndicate());
    return (*this);
}

void ShrubberyCreationForm::executeForm() const
{
    std::string name = this->getName();
    if (this->getexecuteGrade() != 137 && this->getsignGrade() != 145)
    {
        std::cerr << "couldn't create " << this->getName() << std::endl;
        return;
    }
    std::ofstream output(name + "_shrubbery");
    if (!output)
    {
        std::cerr << "couldn't create " << this->getName() << std::endl;
        return;
    }
    else
        output << "........................ .  ..\n"
".........................  .....                                                                    \n"
"................................                                                                    \n"
"....................... ...   ..              .. ... ..                                             \n"
"...........................             . .....:...:.......                                         \n"
"..............................   .   ........::^^::^^:::.... ..                                     \n"
"............................. . .......:.::::^^~~^:~^:^^^^^........                             . ..\n"
"..................................:...:^^^^^^~^^!~^~~^~~~~~^^^:.... ..                          ..  \n"
"..................................^:::^^^~~^~!~~!!^!!~!7~~~~^~^:.........               ..........  \n"
"................................:::^^^^~~~!!^!!!!!~!~!77~!~!~!~:^:::.......       . ....  ..........\n"
"..............................:::^^~^^^~~~~!~!7!!!!7!777~~~~^!~^^^^:::::.....  .  ...... ...........\n"
"............................::::^^^^!!~77~~7?7~!7?7~7J?!!!7!~!^^!!^!~~~:::::........................\n"
"........................:...::^^^~~~~!!!77!!??77?J7!7J77!~7~!~~!7!7!~!~^^^^^::..:...................\n"
"......................:.:^::::^~~~~~~7?77777?J!?JJ77?J77~!777!77?77!!~^^^^^::::^:...................\n"
"......................:::~~^^^^~~~~~~!7?J?!!7J?7JJ???J7?~777!??7?!!~~^^^^^~~^^^~:...................\n"
"......................:::^!!~^~~!~~~~!!7??J7~7?J?5?J???J77?7?J7!!!!!~^~~!!~^^^~:..::................\n"
"...............:....:::^^^^^7?7!!777!7!777?JYJJYYYYY57YJ?JJ?J77?777!~!7!~^^~~:^^^:..................\n"
"...............:~~^::^^^~~!~^~!?7!7?7????JJ?J5YYP55YYYYJ5J?Y7?7!!77?7~^^~!!!!~!!~~^:................\n"
"................:~!!~!!~~~!777??JJJ?J7?J?7?Y55P5PPPPYYY7JJ5YJJJ?JJ?77?777!!!!!~^^^::................\n"
"............::::::^!77???777?J?JJYYYYJ77???JY5YPPPGPJ55?5555YJ?7!!77!!~~~!!77!!!~^^^:::.............\n"
"...........::^^^~~~~~7??JJ?77~~~~!?Y5YYJ??JJ?JJ?GBGPY?JPGPY????7!!!!!?7!!7?7!~~^~^^^:...............\n"
"............::::^^~~!!!77?JJJJ?77!!7JYJ?J5G555PYPBGG5PGG5J?JJJ?7!~~~!???J?7!!~~^^^^:.:..:::.........\n"
".......:....:::^^^^~~~~~!!7?JYJ??J?777?YJ7J5?JYGPBBPPBB5?????JJJJ?7?J?777!~~^^^^^^^:^~^~^:..........\n"
".......:::::^^::^^^~~~!!!!~~!?JY555P5YYY555P5YJPGBBPBPGJ?YYJJJY5JJYJ?!!!!!!!~~~~~~~!~^::............\n"
"........::^^~!77!!!7!7????JJYYY55P55PPY5YYY5PGPPBBBBGP5555JJJJJ?7?77??????J?7!777!~~^::::...........\n"
".........:::::^^~!!777?77JJJJYJJYYYJJJPGGGPYJGP?G#BBGPPGP5555PPPPYJJ7???77?????7~~~~^^::............\n"
":..........::^^~~~~~~~~~!!~~!!!?JJJY5PP555PBPPGPG##B5YPPY5YY55Y555YJJJJJ?7!!7~!!!~~^::::::..........\n"
"::::::::::::::::::::::^^^^~!!?JYYY5YY5Y5JYYYGBPYB##B55Y555YYJYJJYY55J77!7!~^^^~^^~~^^^^::...........\n"
"::::::::::::::^^~^^~!~~~^^^~!!!!!7?JYYY?!?7~~77JBBBYJ??7!7?Y5P55P5J7!!~!!!~~~~~~^^^^^^::::::::::::::\n"
"::::::::::::::^^^^:^^^^^^~~~~^~!?JJJJ?7!77~^~7~?#BB?!7?!7!!~7JYYY55J???7~~~~^^^^^^^:::::::::::::::::\n"
"::::::::::::::::::::^^~~^^^^^!7??77?!^~!~^^^^!~!G#G7!7~77~^~~!!7?YY?J??77!~~~~~^^^^^^:::::::::::::::\n"
"::::::::::::::::::::^^^::::^~^~~~~~~~~~^^^^:~~~^P#G!!!~~~^^^~~^^^7JJ???7!7~~^^~^::::::::::::::::::::\n"
":::::::::::::::::::::::::::::::^^^^~~~:::^^~~^^:P#G~^^^::^^:^~^^^:^!?77!~!~!~^^~^:::::::::::::::::::\n"
"^::::::::::::::::::::::::::::::::^^^::::::^:::::5#B~:::::::^^^^^^^:^~^^^~~^~!^^^::::::::::::::::::::\n"
":::^::^:::::::::::::::::::::::::::::::::::::::::5#B!::::::::::::::::::::^^::^:^^::::::::::::::::::::\n"
"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^:5BB7:^^^^^^::::::::::::::^::::::::::::::::::::::::::\n"
"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^PBBJ:^::::::::::::::::::::::::::::::::::::::::::::::\n"
"~~~!!!!!!!!!77777777?777?77777777777777????????YBBBG???????777777!!!!!!!!!77!!!!!!!!!!!!!!!!~~!!~~~~\n"
"PPPPPPPPPPPPPGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGBBBBBBGBBGGGGGGGPPGGGGGGPPPPPPPGGGPGGPPGPPPPPPPPPPPPPPPP\n"
"GGGGGGGGGGGGGGBBBBBBBBBBBBBBGBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBGGBBBBBBBBBBBBBBBBGGGGGGGGGGGGGGGGGGGGGG\n";
}