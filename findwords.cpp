#include <iostream>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

// char *getWordVertical(int);
// char *reverse(char *);
// bool searchVertical(char *);
bool searchHorizontal(char *kata){
    int a;
    char *simpan;
    for(int i = 0; i < rows; i++){
    	simpan = *(words+i);
        if(strstr(simpan, kata)){
            return true;
        }else{
            a = 0;
        }
    }
    return a;
}


int main()
{
    char word[16], sampah[1];
    int n;
    cin>>n;
    cin.getline(sampah, 1, '\n');
    for (int i=0; i<n; i++){
        cin.getline(word, 16, '\n');
        if (searchHorizontal(word))
            cout << "Ada\n";
        else 
            cout << "Tidak Ada\n";
    }
    return 0;
}
