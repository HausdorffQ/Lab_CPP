#include<iostream>
void re(int in[3][3],int out[3][3]){
    for (int i = 0; i < 3;i++)
        for (int j = 0; j < 3;j++)
            out[i][j] = in[j][i];
}

int main(int argc,char *args[]){
    int in[3][3]{{1, 2, 3},
                 {4, 5, 6}, 
                 {7, 8, 9}};
    int out[3][3]{};

    re(in, out);

    for (int i = 0; i < 3;i++)
        std::cout << out[i][0] << ' ' << out[i][1] << ' ' << out[i][2] << std::endl;
}