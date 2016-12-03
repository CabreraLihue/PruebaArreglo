int array[11]={0,10,2,5,4,1,6,3,7,8,9};
int numero = 1;
int orden = 0;
int aux = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  while(orden<11 && numero<12){
    if(array[orden]==numero){
    Serial.println(numero);
    delay(1000); 
    aux = array[numero -1];
    array[numero -1] = array[orden];
    array[orden]=aux;
    numero++;
    orden = 0; 
 
    }
    orden++; 
  }    

}
