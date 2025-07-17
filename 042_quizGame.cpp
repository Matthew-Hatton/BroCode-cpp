#include <iostream>

int main(){
    std::string questions[] = {"1. what year was C++ created?: ",
                                "2. who invented C++?: ",
                                "3. what is the predecessor of C++?: ",
                                "4. is the Earth flat?: "};
    std::string options[][4] = {{"A. 1969", "B. 1975","C. 1985","D. 1989"},
                                {"A.","B. Bjarne","C.","D."},
                                {"A. C","B.","C.","D."},
                                {"A. Yes","B. No","C. sometimes","D. what's Earth?"}};
    
    char answerKey[] = {'C','B','A','B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        std::cout << "*************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "*************" << std::endl;
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout << options[i][j] << std::endl;
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT" << std::endl;
            score++;
        } else{
            std::cout << "WRONG!" << std::endl;
            std::cout << "Answer: " << answerKey[i] << std::endl;
        }
    }
    std::cout << "****************************" << std::endl;
    std::cout << "Thanks for playing. Score: " << score << std::endl;
    std::cout << "Percentage correct: " << (score/size) * 100 << "%" << std::endl;
    std::cout << "****************************" << std::endl;
    
    return 0;
}