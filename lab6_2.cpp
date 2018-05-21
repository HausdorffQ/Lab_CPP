#include<iostream>
using namespace std;
void re(int p[][3],int n)
{
  int temp;
  for(int i=0;i<3;i++)
    for(int j=0;j<i;j++)
    {
      temp=p[j][i];
      p[j][i]=p[i][j];
      p[i][j]=temp;
    }
}

int main()
{
  int i,j;
  int (*out)[3]=new int [3][3]
                   {{1, 2, 3},
                    {4, 5, 6}, 
                    {7, 8, 9}};;
  re(out,3);
    for (int i = 0; i < 3;i++)
        std::cout << out[i][0] << ' ' << out[i][1] << ' ' << out[i][2] << std::endl;
  delete [] out;
}
