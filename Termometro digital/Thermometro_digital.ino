//#################################################################### SEÇÃO BIBLIOTECAS ##########################################################################



//Biblioteca para manipulaçao de string
#include<Stream.h>

//Biblioteca para Thermistor 
#include <Thermistor.h> 

//Define os pinos A5 e A4 como as portas SDA e SCL para a comunicação I2C
#include <Wire.h> 

//Biblioteca para Modulo de comunicação serial I2C
#include <LiquidCrystal_I2C.h>

//Biblioteca Keypad
#include <Keypad.h>




//################################################################## SEÇÃO VARIAVEIS GLOBAIS ######################################################################



//Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,16,2);
 
//Definição de porta analogica 0 para a classe Thermistor na função temp
Thermistor temp(0); 

//Keypad 4 linhas
 const byte ROWS = 4; 

//Keypad 4 colunas
 const byte COLS = 4; // Keypad 4 colunas

//definição dos caracteres do Keypad
 char hexaKeys[ROWS][COLS] = 
{
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'} // alterações *=F e #=E
};
//portas D3 a D6 => linhas do Keypad
 byte rowPins[ROWS] = {3,4,5,6}; 

//portas D7 a D10 => colunas do Keypad
 byte colPins[COLS] = {7,8,9,10}; 

//inicializa o Keypad
 Keypad teclado = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

//Variavel recebe valor do teclado
  char tecla = teclado.getKey(); 
  
//Converte o valor de tensão em temperatura utlizando parametros da biblioteca 
  int temperatura = temp.getTemp(); 
  
//Variavel recebe valor de temperatura
  int pin2;
 
//Variavel recebe valor do pino 7 para acionamento de rele
  int comando = 7;
 
//Variavel recebe valor do teclado
  String progtemp;

//Variavel recebe programação para alerta de temperatura   
  String prog;

//Variavel recebe programação para alerta de temperatura   
  //String progvar;

  int tempop = String(prog).toInt();

  int LEDpin = 2;       // LED no pino digital 2
  
  int switchPin = 13;   // botão conectado ao pino 13 e o outro terminal ao ground

  bool running = false; //variável de tipo booleano
 
  
//##################################################################### SEÇÃO FUNÇÕES #############################################################################




//********************************************************************* SEÇÃO TECLADOM **************************************************************************** 

void sair()

{
//chama o comando para limpar a tela 
      lcd.clear();

//Posiciona o cursor na 1 coluna e linha 0
      lcd.setCursor (0,0); 
  
//Envia o texto entre as aspas para o LCD
      lcd.print("SAINDO. ");
      
 //Posiciona o cursor na 1 coluna e linha 0
      lcd.setCursor (0,1); 
  
//Envia o texto entre as aspas para o LCD
      lcd.print("Aguarde... ");
      
//Espera 800 mile segundos
      delay(4000);
  
}//Fim sair


//************************************************************************* SEÇÃO FUNÇÃO LOGO **********************************************************************


//Função Envia o texto entre as aspas para o LCD

void logo()

{

//Limpa a tela do lcd
 lcd.clear (); 


//for(int posi_LCD = 0; posi_LCD < 10000; posi_LCD ++)
  //{
    lcd.setCursor(0,0);
    
    lcd.print ("SETROTEC");

    lcd.scrollDisplayRight();

    lcd.setCursor(10,0);
    
    lcd.print ("V 1.0");

   //lcd.scrollDisplayLeft();
   
    delay(435);
  //}

 
}//Fim logo


//********************************************************************** SEÇÃO FUNÇÃO MENU ***********************************************************************


//FUNÇÃO MENU  p/ Orientação
 //quatro opções:
  //'A' retornar
  //'B' mostrar temperatura 
  //'c' programar temperatura de alerta
  //'D' logo

void menu()

{


//Limpa a tela do lcd
 lcd.clear ();
 
//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,0);
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("MENU.");

//Posiciona o cursor na 0 coluna e linha 1
 lcd.setCursor (0,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("Aguarde...");
 
//Espera por 3 segundo 
 delay(3000);
 
//Limpa a tela do lcd
 lcd.clear (); 
 
//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("A-Menu");

 //Posiciona o cursor na 0 coluna e linha 1
 lcd.setCursor (8,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("D-logo");

//Posiciona o cursor na 0 coluna e linha 1
 lcd.setCursor (0,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("B-Temp.");
  
//Posiciona o cursor na 8 coluna e linha 1
 lcd.setCursor (8,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("C-prog.");
 
// Espera por 1 segundo
 delay(1000);

}//Fim menu



//***************************************************************** SEÇÃO FUNÇÃO TEMPERATURAM *********************************************************************


//Função exibe a temperaatura medida em graus celsius 
//e temperatura programada para alerta; caso (temperatura<=prog) 
//se (temperatura>prog)imprime texto de alerta e coloca o pino 7 em nivel baixo LOW.
 
void temperaturam()

{
  
//Converte o valor de tensão em temperatura utlizando parametros da biblioteca 
  int temperatura = temp.getTemp(); 
  
//Verificação de condição, se temperatura for > a 29ºC, Dispara o alerta no display e aciona o rele de saida no pino 7
 if(temperatura>tempop)
 
 {

//Desativa o pino digital 13
  digitalWrite(11, LOW);  
  
//Espera por 1/2 segundo
  delay(500);            
  
//Limpa a tela do lcd
  lcd.clear ();
  
//Posiciona o cursor na 2 coluna e linha 0sor (2,0); 
  lcd.setCursor(2,0);
  
//Envia o texto de alerta de temperatura para o LCD
  lcd.print ("ALERTA TEMP.:");
  
//Posiciona o cursor na 0 coluna e linha 1
  lcd.setCursor (0,1); 
  
//Espera por 400 mile segundos
  delay(400);
  
//Envia o texto entre as aspas para o LCD
  lcd.print ("LIMITE EXCEDIDO:");
  
//Espera por 400 mile segundos ;
   delay(1000);
   
//Limpa a tela do lcd
  lcd.clear (); 
  
//Posiciona o cursor na 0 coluna e linha 1
  lcd.setCursor (0,1); 
  
//Envia o texto entre as aspas para o LCD
  lcd.print ("EM:");
  
//Posiciona o cursor na 3 coluna e linha 1  
  lcd.setCursor (3,1);
  
//Espera 1 segundos 
  delay (1000); 
  
//Envia operação aritimetica entre temperatura medida e temperatura programada para o LCD
  lcd.print (temperatura-tempop);
  
//Posiciona o cursor na 5 coluna e linha 1
  lcd.setCursor (5,1); 
  
//Envia o texto entre as aspas para o LCD
  lcd.print ("C");
  
//Espera 1,5 segundos
  delay (1500); 
  
 }//Fim if (alerta>prog)
  
 else{

//Ativa o pino digital 13
 digitalWrite(11, HIGH); 
 
//Limpa a tela do lcd
 lcd.clear (); 
 
//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("Temperatura:"); 
 
//Posiciona o cursor na 0 coluna e linha 1
 lcd.setCursor (0,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("Alerta:"); 
 
//Posiciona o cursor na 12 coluna e linha 1
 lcd.setCursor (12,1); 
 
//Envia o valor da variavel (temperatura programada) para o LCD
 lcd.print (tempop); 
 
//Posiciona o cursor na 14 coluna e linha 1
 lcd.setCursor (15,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("C");
 
//Posiciona o cursor na 5 coluna e linha 2
 lcd.setCursor (12,0); 
 
//Envia valor da variavel temperatura para o LCD
 lcd.print (temperatura);
 
//Posiciona o cursor na 14 coluna e linha 0
 lcd.setCursor (15,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("C");
 
//Espera 1/2 segundos
 delay (500); 
 
 }//Fim else
  
}//Fim temperaturam



//******************************************************************** SEÇÃO FUNÇÃO INICIO ************************************************************************


//Função exibe o texto pra progranar a temperatura de alerta
void inicio()

{
//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("Configuracao"); 

 delay(500);

//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,1); 
  
//Envia o texto entre as aspas para o LCD
 lcd.print("Temp. Alerta");

 delay(2500);

 lcd.clear();

lcd.setCursor (0,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print ("Tecle '#' Salvar"); 
 
//Espera 4 segundos
 delay (2500); 

lcd.clear();

//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print("Digite T.:");


 

//Posiciona o cursor na 0 coluna e linha 0
 //lcd.setCursor (0,1); 
 

 
}//Fim inicio



//******************************************************************** SEÇÃO FUNÇÃO SUCESSO ***********************************************************************


//Função exibe o texto pra progranar a temperatura de alerta
void secesso()

{
//Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,0); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print("Caliditas Salva");
 
//Espera 1/2 segundos
 delay(475);

 //Posiciona o cursor na 0 coluna e linha 0
 lcd.setCursor (0,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print("Com Sucesso:");
 
//Espera 1/2 segundos
 delay(2500);

//lcd.clear();
  
//Posiciona o cursor na 14 coluna e linha 0
 lcd.setCursor (12,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print(tempop);

  delay(300);
 
//Posiciona o cursor na 14 coluna e linha 0
 lcd.setCursor (15,1); 
 
//Envia o texto entre as aspas para o LCD
 lcd.print("C");
 
//Espera 1 segundo e 200 mile
 delay(1000);
}//Fim sucesso



//########################################################################## SEÇÃO SETUP #########################################################################


void setup()

{

//Define saida digital pino 7  
  pinMode(11,OUTPUT);
 
// Ativa o pino digital 13 em nivel alto 5V  
  digitalWrite(11,HIGH);  

  pinMode(LEDpin, OUTPUT);
  
  pinMode(switchPin, INPUT);
  
  digitalWrite(switchPin, HIGH);    // ativa o resistor pull-up


//Define o numero de colunas e  linhas do LCD
  lcd.init(); 
  
  lcd.setBacklight(HIGH);


}//Fim setup



//########################################################################## SEÇÃO LOOP ###########################################################################


void loop()

{
//Variavel recebe valor do teclado
 char tecla = teclado.getKey(); 
 
       
    switch(tecla)
    
    {
      
   
      
    case 'A':

    
    lcd.clear();
 
    menu();
    
     
    break;

   
 if(tecla!='A')
    
    {
    
//caso alguma das teclas imprimíveis foi pressionada


    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case '*':

   
//concatena o novo símbolo a variável 
    progtemp.concat(tecla);
 
//variavel prog recebe os dados da variavel progtemp
   prog=progtemp;

    tempop = String(prog).toInt();

//imrpime na tela o símbolo pressionado
     lcd.print(tecla);
    
    break;

  
//**************************************************************************** CASO'C' ****************************************************************************

//caso a tecla 'C' tenha sido pressionada
    case 'C':

    
  
//limpa a variavel prog; 
  
     progtemp="";

//chama o comando para limpar a tela
     lcd.clear();
    
//configura a mensagem para programar a temperatura prog temp
      inicio();

  
  
    break;//Fim case 'C'


//**************************************************************************** CASO'#' ****************************************************************************


//caso a tecla '#'(ENTER) seja pressionada, comprara se os valores de prog e progtemp são iguais 
   case '#':
  
//limpa a tela
    lcd.clear();
    
//se os valores forem iguais 
    if(prog==progtemp)
  
    { 
    
//Chama função sucesso     
    secesso();

    delay(1500);
    
    }//Fim if
   
//caso não sejam iguis 
    else
  
    {
    
//imprime mensagem 

    lcd.print("Disgrama");
 
  }//Fim Else

//aguarda 100 mile segundos para limpar a tela
    delay(100);

//chama o comando para limpar a tela   
    lcd.clear();

  break;//Fim case '#'

  

//************************************************************************ CASO'A' ********************************************************************************


//caso tecla 'A' seja pressionada 
//chama a função menu
  //case'A':
  
//chama o comando para limpar a tela     
   //.clear();
 
   // menu();

  //break;//Fim case 'A'
  


//************************************************************************** CASO'D' *******************************************************************************
  
 
//caso 'D' 
//chama função logo
  case 'D':
  
     logo();
          
         
  break;//Fim case 'D'
  

//************************************************************************** CASO'B' ******************************************************************************


  
// caso 'B' 
// chama função Tempeatura 
   case'B':
   
//repetição da função tempmeraturam, para manter a tmperatura atualizada
   for(int x=0;x=1000000;x++)
   
   {
    
// Intenromper o ciclo de petição For(x)  
// SE o valor dentro switchPin estiver em nivel baixo = 0V
// o pull-up mantém o pino em HIGH internamente
   if (digitalRead(switchPin) == LOW) 
   
   {
    
// delay para fazer o debounce no botão
      delay(100);           
    
// troca o valor da variável running             
      running = !running;   
              
// indica via LED   
      digitalWrite(LEDpin, running);  // indica via LED
      
      sair();

//chama o comando para limpar a tela 
      lcd.clear();
    
      return 0;

    }
      
    else
    
    {
    
      temperaturam();
        
    }
          
   }
   break;//Fim case 'B'

  }
 }//Fim Switch
    
   
}//Fim loop
