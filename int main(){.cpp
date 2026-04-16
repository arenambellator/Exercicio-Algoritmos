#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   
    
    float numa, nota[15], media1, media2, media3, media4, media5;
    
    int n=0;
    
    string nome[5],  aprov[5];
    
    cout<<"Indique o número de alunos (de 1 até 5): ";
    cin>>numa;
    
    while ((numa>=1)&&(numa<=5)){
        numa=numa-1;
        n=n+1;
    }
    
    switch (n){
        case 1:
        cout<<"\nDigite o primeiro nome do aluno: ";
        cin>>nome[0];
        
        cout<<"\nDigite as três notas de "<<nome[0]<<":"<<endl;
        cin>>nota[0]>>nota[1]>>nota[2];
        
        media1=((nota[0]+nota[1]+nota[2])/3);

        if (media1>=7){
            aprov[0]="APROVADO";
        }else{
            aprov[0]="REPROVADO";
        }
        
        cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
        cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
        cout<<endl<<endl<<"O aluno com maior média é: "<<nome[0]<<", com nota: "<<fixed<<setprecision(2)<<media1<<"!"<<endl<<endl;
        break;
        
        case 2:
        cout<<"\nDigite o primeiro nome do aluno 1: ";
        cin>>nome[0];
        
        cout<<"\nDigite as três notas de "<<nome[0]<<":"<<endl;
        cin>>nota[0]>>nota[1]>>nota[2];
        
        media1=((nota[0]+nota[1]+nota[2])/3);

        if (media1>=7){
            aprov[0]="APROVADO";
        }else{
            aprov[0]="REPROVADO";
        }
        
        cout<<"\nDigite o primeiro nome do aluno 2: ";
        cin>>nome[1];
        
        cout<<"\nDigite as três notas de "<<nome[1]<<":"<<endl;
        cin>>nota[3]>>nota[4]>>nota[5];
        
        media2=((nota[3]+nota[4]+nota[5])/3);

        if (media2>=7){
            aprov[1]="APROVADO";
        }else{
            aprov[1]="REPROVADO";
        }
        
        if (media1>media2){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[0]<<", com nota: "<<fixed<<setprecision(2)<<media1<<"!"<<endl<<endl;
        }else if (media2>media1){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[1]<<", com nota: "<<fixed<<setprecision(2)<<media2<<"!"<<endl<<endl;
        }else{
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<endl<<"Hà dois ou mais alunos com média maior da turma igual!"<<endl<<endl;
        }
        break;
        
        case 3:
        cout<<"\nDigite o primeiro nome do aluno 1: ";
        cin>>nome[0];
        
        cout<<"\nDigite as três notas de "<<nome[0]<<":"<<endl;
        cin>>nota[0]>>nota[1]>>nota[2];
        
        media1=((nota[0]+nota[1]+nota[2])/3);

        if (media1>=7){
            aprov[0]="APROVADO";
        }else{
            aprov[0]="REPROVADO";
        }
        
        cout<<"\nDigite o primeiro nome do aluno 2: ";
        cin>>nome[1];
        
        cout<<"\nDigite as três notas de "<<nome[1]<<":"<<endl;
        cin>>nota[3]>>nota[4]>>nota[5];
        
        media2=((nota[3]+nota[4]+nota[5])/3);

        if (media2>=7){
            aprov[1]="APROVADO";
        }else{
            aprov[1]="REPROVADO";
        }

        cout<<"\nDigite o primeiro nome do aluno 3: ";
        cin>>nome[2];
        
        cout<<"\nDigite as três notas de "<<nome[2]<<":"<<endl;
        cin>>nota[6]>>nota[7]>>nota[8];

        media3=((nota[6]+nota[7]+nota[8])/3);

        if (media3>=7){
            aprov[2]="APROVADO";
        }else{
            aprov[2]="REPROVADO";
        }
        
        if ((media1>media2)&&(media1>media3)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[0]<<", com nota: "<<fixed<<setprecision(2)<<media1<<"!"<<endl<<endl;
        }else if ((media2>media1)&&(media2>media3)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[1]<<", com nota: "<<fixed<<setprecision(2)<<media2<<"!"<<endl<<endl;
        }else if ((media3>media1)&&(media3>media2)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[2]<<", com nota: "<<fixed<<setprecision(2)<<media3<<"!"<<endl<<endl;
        }else{
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<endl<<"Hà dois ou mais alunos com média maior da turma igual!"<<endl<<endl;
        }
        break;
        
        case 4:
        cout<<"\nDigite o primeiro nome do aluno 1: ";
        cin>>nome[0];
        
        cout<<"\nDigite as três notas de "<<nome[0]<<":"<<endl;
        cin>>nota[0]>>nota[1]>>nota[2];
        
        media1=((nota[0]+nota[1]+nota[2])/3);

        if (media1>=7){
            aprov[0]="APROVADO";
        }else{
            aprov[0]="REPROVADO";
        }
        
        cout<<"\nDigite o primeiro nome do aluno 2: ";
        cin>>nome[1];
        
        cout<<"\nDigite as três notas de "<<nome[1]<<":"<<endl;
        cin>>nota[3]>>nota[4]>>nota[5];
        
        media2=((nota[3]+nota[4]+nota[5])/3);

        if (media2>=7){
            aprov[1]="APROVADO";
        }else{
            aprov[1]="REPROVADO";
        }

        cout<<"\nDigite o primeiro nome do aluno 3: ";
        cin>>nome[2];
        
        cout<<"\nDigite as três notas de "<<nome[2]<<":"<<endl;
        cin>>nota[6]>>nota[7]>>nota[8];

        media3=((nota[6]+nota[7]+nota[8])/3);

        if (media3>=7){
            aprov[2]="APROVADO";
        }else{
            aprov[2]="REPROVADO";
        }

        cout<<"\nDigite o primeiro nome do aluno 4: ";
        cin>>nome[3];
        
        cout<<"\nDigite as três notas de "<<nome[3]<<":"<<endl;
        cin>>nota[9]>>nota[10]>>nota[11];

        media4=((nota[9]+nota[10]+nota[11])/3);

        if (media4>=7){
            aprov[3]="APROVADO";
        }else{
            aprov[3]="REPROVADO";
        }
        
        if ((media1>media2)&&(media1>media3)&&(media1>media4)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[0]<<", com nota: "<<fixed<<setprecision(2)<<media1<<"!"<<endl<<endl;
        }else if ((media2>media1)&&(media2>media3)&&(media2>media4)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[1]<<", com nota: "<<fixed<<setprecision(2)<<media2<<"!"<<endl<<endl;
        }else if ((media3>media1)&&(media3>media2)&&(media3>media4)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[2]<<", com nota: "<<fixed<<setprecision(2)<<media3<<"!"<<endl<<endl;
        }else if ((media4>media1)&&(media4>media2)&&(media4>media3)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[3]<<", com nota: "<<fixed<<setprecision(2)<<media4<<"!"<<endl<<endl;
        }else{
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<endl<<"Hà dois ou mais alunos com média maior da turma igual!"<<endl<<endl;
        }
        break;
        
        case 5:
        cout<<"\nDigite o primeiro nome do aluno 1: ";
        cin>>nome[0];
        
        cout<<"\nDigite as três notas de "<<nome[0]<<":"<<endl;
        cin>>nota[0]>>nota[1]>>nota[2];
        
        media1=((nota[0]+nota[1]+nota[2])/3);

        if (media1>=7){
            aprov[0]="APROVADO";
        }else{
            aprov[0]="REPROVADO";
        }
        
        cout<<"\nDigite o primeiro nome do aluno 2: ";
        cin>>nome[1];
        
        cout<<"\nDigite as três notas de "<<nome[1]<<":"<<endl;
        cin>>nota[3]>>nota[4]>>nota[5];
        
        media2=((nota[3]+nota[4]+nota[5])/3);

        if (media2>=7){
            aprov[1]="APROVADO";
        }else{
            aprov[1]="REPROVADO";
        }

        cout<<"\nDigite o primeiro nome do aluno 3: ";
        cin>>nome[2];
        
        cout<<"\nDigite as três notas de "<<nome[2]<<":"<<endl;
        cin>>nota[6]>>nota[7]>>nota[8];

        media3=((nota[6]+nota[7]+nota[8])/3);

        if (media3>=7){
            aprov[2]="APROVADO";
        }else{
            aprov[2]="REPROVADO";
        }

        cout<<"\nDigite o primeiro nome do aluno 4: ";
        cin>>nome[3];
        
        cout<<"\nDigite as três notas de "<<nome[3]<<":"<<endl;
        cin>>nota[9]>>nota[10]>>nota[11];

        media4=((nota[9]+nota[10]+nota[11])/3);

        if (media4>=7){
            aprov[3]="APROVADO";
        }else{
            aprov[3]="REPROVADO";
        }

        cout<<"\nDigite o primeiro nome do aluno 5: ";
        cin>>nome[4];
        
        cout<<"\nDigite as três notas de "<<nome[4]<<":"<<endl;
        cin>>nota[12]>>nota[13]>>nota[14];

        media5=((nota[12]+nota[13]+nota[14])/3);

        if (media5>=7){
            aprov[4]="APROVADO";
        }else{
            aprov[4]="REPROVADO";
        }
        
        if ((media1>media2)&&(media1>media3)&&(media1>media4)&&(media1>media5)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<nome[4]<<"    "<<fixed<<setprecision(2)<<nota[12]<<"    "<<fixed<<setprecision(2)<<nota[13]<<"    "<<fixed<<setprecision(2)<<nota[14]<<"    "<<fixed<<setprecision(2)<<media5<<"    "<<aprov[4];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[0]<<", com nota: "<<fixed<<setprecision(2)<<media1<<"!"<<endl<<endl;
        }else if ((media2>media1)&&(media2>media3)&&(media2>media4)&&(media2>media5)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<nome[4]<<"    "<<fixed<<setprecision(2)<<nota[12]<<"    "<<fixed<<setprecision(2)<<nota[13]<<"    "<<fixed<<setprecision(2)<<nota[14]<<"    "<<fixed<<setprecision(2)<<media5<<"    "<<aprov[4];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[1]<<", com nota: "<<fixed<<setprecision(2)<<media2<<"!"<<endl<<endl;
        }else if ((media3>media1)&&(media3>media2)&&(media3>media4)&&(media3>media5)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<nome[4]<<"    "<<fixed<<setprecision(2)<<nota[12]<<"    "<<fixed<<setprecision(2)<<nota[13]<<"    "<<fixed<<setprecision(2)<<nota[14]<<"    "<<fixed<<setprecision(2)<<media5<<"    "<<aprov[4];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[2]<<", com nota: "<<fixed<<setprecision(2)<<media3<<"!"<<endl<<endl;
        }else if ((media4>media1)&&(media4>media2)&&(media4>media3)&&(media4>media5)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<nome[4]<<"    "<<fixed<<setprecision(2)<<nota[12]<<"    "<<fixed<<setprecision(2)<<nota[13]<<"    "<<fixed<<setprecision(2)<<nota[14]<<"    "<<fixed<<setprecision(2)<<media5<<"    "<<aprov[4];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[3]<<", com nota: "<<fixed<<setprecision(2)<<media4<<"!"<<endl<<endl;
        }else if ((media5>media1)&&(media5>media2)&&(media5>media3)&&(media5>media4)){
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<nome[4]<<"    "<<fixed<<setprecision(2)<<nota[12]<<"    "<<fixed<<setprecision(2)<<nota[13]<<"    "<<fixed<<setprecision(2)<<nota[14]<<"    "<<fixed<<setprecision(2)<<media5<<"    "<<aprov[4];
            cout<<endl<<endl<<"O aluno com maior média é: "<<nome[4]<<", com nota: "<<fixed<<setprecision(2)<<media5<<"!"<<endl<<endl;
        }else{
            cout<<endl<<"nome"<<"    "<<"N1"<<"    "<<"N2"<<"    "<<"N3"<<"    "<<"MÉDIA"<<"    "<<"RESULTADO"<<endl;
            cout<<endl<<nome[0]<<"    "<<fixed<<setprecision(2)<<nota[0]<<"    "<<fixed<<setprecision(2)<<nota[1]<<"    "<<fixed<<setprecision(2)<<nota[2]<<"    "<<fixed<<setprecision(2)<<media1<<"    "<<aprov[0];
            cout<<endl<<nome[1]<<"    "<<fixed<<setprecision(2)<<nota[3]<<"    "<<fixed<<setprecision(2)<<nota[4]<<"    "<<fixed<<setprecision(2)<<nota[5]<<"    "<<fixed<<setprecision(2)<<media2<<"    "<<aprov[1];
            cout<<endl<<nome[2]<<"    "<<fixed<<setprecision(2)<<nota[6]<<"    "<<fixed<<setprecision(2)<<nota[7]<<"    "<<fixed<<setprecision(2)<<nota[8]<<"    "<<fixed<<setprecision(2)<<media3<<"    "<<aprov[2];
            cout<<endl<<nome[3]<<"    "<<fixed<<setprecision(2)<<nota[9]<<"    "<<fixed<<setprecision(2)<<nota[10]<<"    "<<fixed<<setprecision(2)<<nota[11]<<"    "<<fixed<<setprecision(2)<<media4<<"    "<<aprov[3];
            cout<<endl<<nome[4]<<"    "<<fixed<<setprecision(2)<<nota[12]<<"    "<<fixed<<setprecision(2)<<nota[13]<<"    "<<fixed<<setprecision(2)<<nota[14]<<"    "<<fixed<<setprecision(2)<<media5<<"    "<<aprov[4];
            cout<<endl<<endl<<"Hà dois ou mais alunos com média maior da turma igual!"<<endl<<endl;
        }
        break;
        
        default:
        cout<<endl<<"Erro no número de alunos"<<endl<<endl;
        break;
    }
    

    return 0;
}
