#include <iostream>

void showMatriz(int m[][3], int , int);
void simetricMatriz(int m[][3], int , int);

int main()
{
    
    int m[][3] = {{1,2,3},{2,4,2},{3,2,2}};

    int fil = 3;
    int col = 3;

    showMatriz(m,fil,col);

    simetricMatriz(m,fil,col);

    return 0;
}


void showMatriz(int m[][3], int filas , int colum){
    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < colum; j++)
        {
           std::cout<<m[i][j]<<" ";
        }
        
        std::cout<<std::endl;
        
    }
    
}

void simetricMatriz(int m[][3], int filas , int colum){

    int count = 0;
    int menor = m[0][0];

    if(filas != colum){
        std::cout<<"La matriz no es simetrica";
        return;
    }else{
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < colum; j++)
            {

                if(m[i][j] == m[j][i]){
                    count += 1;
                }

            }
            
           
        }
        
    }



    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < colum; j++)
        {

            if(m[i][j] < menor){
                menor = m[i][j];
            }

        }
        
       
    }

    std::cout<<"El menor es: "<<menor<<std::endl;
    

    if(count == filas * colum){
        std::cout<<"La matriz es simetrica";
    }else{
        std::cout<<"No es simetrica";
    }

}