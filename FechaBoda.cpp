class FechaBoda{
private:
    int dia, mes, anno;
public:
    FechaBoda(){
    dia=0;
    mes=0;
    anno=0;}
    FechaBoda(int unDia, int unMes, int unAnno){
    dia=unDia;
    mes=unMes;
    anno=unAnno;}
    void setDia(int unDia)
    {dia=unDia;}
    void setMes(int unMes)
    {mes=unMes;}
    void setAnno(int unAnno)
    {anno=unAnno;}
    int getDia()
    {return dia;}
    int getMes()
    {return mes;}
    int getAnno()
    {return anno;}
    bool esBisiesto()
    {return ((anno % 4 == 0) && !(anno % 100 == 0 && anno % 400 != 0));}
    int cantDias()
    {int m=mes;
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) return 31;
        else if (m==2) 
                if (esBisiesto()) return 29; 
                    else return 28;
        else return 30;}
 
};