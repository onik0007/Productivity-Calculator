#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <assert.h>
#include <time.h>
#include <windows.h>
#include <stack>
#include <iostream>
#include <stdlib.h>

/* 

	Kino Porteous
	Jamaica Productivity Centre
	Summer Program
	Super Calculator
	
*/

	void gotoxy(int x, int y);
	void load();
	void gotoxy(int x, int y)
	{

		 COORD coord;
		
		 coord.X = x;
		
		 coord.Y = y;
		
		 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		
	}

void welcome (){
	int load,welcome ;
	
	for (load=1; load<101;load++){
		
		system("COLOR 3A");
		printf("\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t          LOADING SOFTWARE!!            \n");
		printf("\t\t\t************************************\n");
		printf("\t\t\t            *****%d%%*****            \n",load);
		printf("\t\t\t************************************\n");
		system("cls");
	}
	
/*
  for ( welcome = 1 ; welcome <= 5 ; welcome++ ){
  	
printf("\n\n\n\n\n\n\n\n\n\n");

printf("\t\t\t **           **       \n");
printf("\t\t\t  **    *    **        \n");
printf("\t\t\t   ** ** ** **        \n");
printf("\t\t\t    **    **         \n");
printf("\t\t\t     *     *         \n");
	
	 system("cls");
	}
 
 
for ( welcome = 1 ; welcome <= 5 ; welcome++ ){

printf("\n\n\n\n\n\n\n\n\n\n");	

printf("\t\t\t *****          \n");
printf("\t\t\t *****              \n");
printf("\t\t\t **          \n");
printf("\t\t\t ****          \n");
printf("\t\t\t ****             \n");
printf("\t\t\t **              \n");
printf("\t\t\t *****        \n");
printf("\t\t\t *****        \n");

	
	 system("cls");
	}
	
for ( welcome = 1 ; welcome <= 5 ; welcome++ ){

printf("\n\n\n\n\n\n\n\n\n\n");

printf("\t\t\t **          \n");
printf("\t\t\t **          \n");
printf("\t\t\t **             \n");
printf("\t\t\t **          \n");
printf("\t\t\t **          \n");
printf("\t\t\t ******       \n");
printf("\t\t\t ******       \n");
 
	
	 system("cls");
	}

for ( welcome = 1 ; welcome <= 5 ; welcome++ ){
	
printf("\n\n\n\n\n\n\n\n\n\n");
	
printf("\t\t\t   ****             \n");
printf("\t\t\t **              \n");
printf("\t\t\t**              \n");
printf("\t\t\t**               \n");
printf("\t\t\t **               \n");
printf("\t\t\t  ****              \n");

	 system("cls");
	}


for ( welcome = 1 ; welcome <= 5 ; welcome++ ){
	
printf("\n\n\n\n\n\n\n\n\n\n");	

printf("\t\t\t  	   *****           \n");
printf("\t\t\t	 **     **          \n");
printf("\t\t\t	**       **        \n");
printf("\t\t\t	**       **       \n");
printf("\t\t\t	 **     **         \n");
printf("\t\t\t	   *****              \n");

	
	 system("cls");
	}

for ( welcome = 1 ; welcome <= 5 ; welcome++ ){

printf("\n\n\n\n\n\n\n\n\n\n");

printf("\t\t\t     *       *      \n");
printf("\t\t\t    ****   ****    \n");
printf("\t\t\t   **  ** **  ** \n");
printf("\t\t\t  **     *     **  \n");
printf("\t\t\t **             **    \n");
printf("\t\t\t**               **     \n");

	
	 system("cls");
	}
 
 
for ( welcome = 1 ; welcome <= 5 ; welcome++ ){
	
printf("\n\n\n\n\n\n\n\n\n\n");	
	
printf("\t\t\t*****          \n");
printf("\t\t\t*****              \n");
printf("\t\t\t**          \n");
printf("\t\t\t****          \n");
printf("\t\t\t****             \n");
printf("\t\t\t**              \n");
printf("\t\t\t*****        \n");
printf("\t\t\t*****        \n");

	
	 system("cls");
	}
*/
	system("COLOR 5B");
	printf(" **           **   ***   **       ***    ***        *       *       ***                           \n");
	printf("  **    *    **    *     **      *      *   *      ** ** ** **      *                       \n");
	printf("   ** ** ** **     **    **      *      *   *     **    *    **     **                        \n");
	printf("    **     **      *     *****   *      *   *    **           **    *                            \n");
	printf("     *      *      ***   *****    ***    ***    **             **   ***                               \n");
	
	system ("pause");
	}

void bye(){
	
	
	int bye;
	
	for ( bye = 1 ; bye <= 5 ; bye++ ){
		printf("   *****  	  	\n");
		printf("   **   *  		\n");
		printf("   ** ** 	    \n");
		printf("   **   *	    \n");
		printf("   *****  		\n");
		system("cls");
	}
	
	for ( bye = 1 ; bye <= 5 ; bye++ ){
		printf("   *****  	 *   *  	\n");
		printf("   **   *  	  * *		\n");
		printf("   ** ** 	   *    	\n");
		printf("   **   *	   *    	\n");
		printf("   *****  	   * 		\n");
		system("cls");
	}
		for ( bye = 1 ; bye <= 5 ; bye++ ){
		printf("   *****  	 *   *    ****  	\n");
		printf("   **   *  	  * *	  *    		\n");
		printf("   ** ** 	   *      ***	    \n");
		printf("   **   *	   *      *    		\n");
		printf("   *****  	   * 	  ****  	\n");
		system("cls");
	}
	
		printf("   *****  	 *   *    ****  	\n");
		printf("   **   *  	  * *	  *    		\n");
		printf("   ** ** 	   *      ***	    \n");
		printf("   **   *	   *      *    		\n");
		printf("   *****  	   * 	  ****  	\n");
		system("pause");
}

void load(){
	system("color 5e");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...\n\n");
  
    gotoxy(30,15);
    for(r=1;r<=27;r++){
    for(q=0;q<=17000000;q++);//to display the character slowly
    printf("%c",177);}
    
     system ("cls");
}

void na(){
	printf("If you dont have the data for this input press'0' \n");
}
int main(){
    
	
	time_t(CurrentTime);
	time(&CurrentTime);
	
	printf("Today is: %s\n\n",ctime(&CurrentTime));
	
	FILE * fp;
	fp = fopen("JPC Data.txt","a+"); 
	
	fprintf(fp,"Date of input: %s\n\n",ctime(&CurrentTime));
    
    
int wrong,numofemployees[100],result;
int choice,x,count,CID[100],search,ID,year[100];
double totaloutput[100],CPI[100],deflatedto[100],BIMS[100],deflatedBIMS[100],valueadded[100],currentassets[100],currentliabilities[100],defliab[100],defca[100];
double operatingcapital[100],totalinput[100],deflatedti[100],multifactorpro[100],labourproductivityto[100],labourproductivityav[100],fixedassets[100];
double capitalproductivity[100],capitalintensity[100],deffa[100],operatingprofit[100],BIMSperto[100],defop[100],profibality[100],processefficiency[100],BIMSperti[100];
double labourcostperti[100],labourcostperto[100],labourcost[100],deflabourcost[100];
double totalproductivitymeasure[100],labourcostcompetativnessto[100],labourcostcompetativnessti[100],labourcostcompetativness[100],labourcostperemployee[100];
double ouputperemployee[100],labourshareinaddedvalue[100],ReturnonAssets[100],OperatingProfitMargin[100],CurrentRatio[100],valueaddedtosalesratio[100];
double OperatingProfittoValueAddedRatio[100],CapitalTurnover[100],UtilitiesperInput[100],totalutilities[100],capitalproductivityb[100];
double suc,utilitycost,multifactorproav[100];
char c,(companyname[60])[100],password[] = "Productivity";
bool idexist;
char buffer[256] = {0};
int pos = 0;

struct coordinate{
int y;
int direction;
};

x=0;
count=1;
wrong=0;

welcome();

do{
	
   printf("Enter Password: ");
   system("COLOR 3A");
   
    do {
	
        c = getch();

        if( isprint(c) ) 
        {
            buffer[ pos++ ] = c;
            printf("%c", '*');
        }
        else if( c == 8 && pos )
        {
            buffer[ pos-- ] = '\0';
            printf("%s", "\b \b");
        }
    } while( c != 13 );
    
    

    if( !strcmp(buffer, password) )
   {	system("cls");	
    	
    	wrong=0;
        do{
        	system("COLOR 3A");
        	
	        printf("To which sector would you like to input information:\n");
	        
	        printf("1.  Manufacturing \n");
	        printf("2.  Hotels & Restaurants \n");
	        printf("3.  Agriculture &fishing \n");
	        printf("4.  mining & querying \n");
	        printf("5.  Construction & Instillation \n");
	        printf("6.  Electricity & water supply \n");
	        printf("7.  Wholesale & Retail Trade \n");
	        printf("8.  Transport storage & Communication \n");
	        printf("9.  Banking/Finance & Insurance Services \n");
	        printf("10. Real Estate/Renting & Business services \n");
	        printf("11.Search & Display Data \n");
	        printf("12. ~~~~~~EXIT~~~~~~\n\n");
	        
	        printf("Choice: ");
	        
	        scanf("%d",&choice);
	        system("cls");
	        
	        switch(choice){
	            
	            case 1:
	            	load();
	            	
	                printf ("Welcome to the Maunfacturing sector \n");
	                fprintf(fp," Manufacturing \n\n");
	                system("pause");
	                system("cls");
	                
	                do{
	                	printf("Enter the year calculated <2000 - 2020>: \n");
	                	scanf("%d",&year[x]);
	                	system("cls");
	            	}while((year[x]<2000)||(year[x]>2020));
	            	
	                printf("Please enter the name of the company that the inputs are for: \n");
	                scanf("%s",&companyname[x]);
	                
	                fprintf(fp,"Company name: %s\n",companyname[x]);
	                fprintf(fp,"Year calculated: %d\n",year[x]);
	                 
					do{
					    do{
							printf("Enter the firm's ID number <3digits> \n",companyname[x]);
						    scanf("%d",&ID);
						            
				            for(x=0;x<count;x++){
		  	
						    	if(ID==CID[x]){
									idexist=true;
									printf("ID num already exist \n");
									system("pause");
								}
								else{
									idexist=false;
								}
							}
						    system("cls");
						                
						}while(idexist!=false);
					}while((ID<100)||(ID>999));
					CID[x]=ID;
						
	                system("pause");
	                
	                printf("Enter the CPI(price deflator) \n");
	                scanf("%lf",&CPI[x]);
	                
	                printf("Enter total output(nominal value/sales): \n");
	                na();
	                
	                scanf("%lf",&totaloutput[x]);
	                
	                deflatedto[x]=(totaloutput[x]/CPI[x])*100;
	                printf("Deflated Total Output(real value): %lf \n",deflatedto[x]); 
	                
	                printf("Enter BIMS: \n");
	                scanf("%lf",&BIMS[x]);
	                
	                deflatedBIMS[x]=(BIMS[x]/CPI[x])*100;
	                printf("Deflated BIMS: %lf \n",deflatedBIMS[x]);
	                
	                valueadded[x]= deflatedto[x]-deflatedBIMS[x];
	                
	                printf("Added Value:%lf\n",valueadded[x]);
	                
	                system("pause");
	                system("cls");
	                
	                printf("Enter current assets:\t");
	                scanf("%lf",&currentassets[x]);
	                
	                printf("Enter fixed assets:\t");
	                scanf("%lf",&fixedassets[x]);
	                
	                printf("Enter current Liabilties:");
	                scanf("%lf",&currentliabilities[x]);
	                
	                defca[x]=(currentassets[x]/CPI[x])*100;
	                defliab[x]=(currentliabilities[x]/CPI[x])*100;
	                deffa[x]=(fixedassets[x]/CPI[x])*100;
	                
	                printf("Deflated current assets :%lf and deflated Liabilties: %lf \n",defca[x],defliab[x]);
	                operatingcapital[x]=defca[x]-defliab[x];
	                
	                printf("The Operaing Capital is:%lf \n",operatingcapital[x]);
	                
	                printf("Enter total input: \n");
	                scanf("%lf",&totalinput[x]);
	                
					deflatedti[x]=(totalinput[x]/CPI[x])*100;
	                
	                printf("Deflated total input: %lf \n",deflatedti[x]);
	                
	                
	                multifactorpro[x]=deflatedto[x]/deflatedti[x];
	                printf(" Multifactor Productivity: %lf \n",multifactorpro[x]);
	                system("pause");
	                system("cls");
	                
	                multifactorproav[x]=valueadded[x]/deflatedti[x];
	                printf("Multifactor Productivity(using value added: %lf \n",multifactorproav[x]);
	                
	                printf("How many employees does the firm have?: \n",companyname[x]);
	                scanf("%d",&numofemployees[x]);
	                
	                labourproductivityto[x]= deflatedto[x]/numofemployees[x];
	                labourproductivityav[x]= valueadded[x]/numofemployees[x];
	                
	                printf("labour productivity(using total output): %lf \n",labourproductivityto[x]);
	                printf("labour productivity(using added value): %lf \n",labourproductivityav[x]);
	                
	                capitalproductivity[x]=valueadded[x]/deffa[x]; 
	                printf("Capital Productivity:%lf <value added/deflated fixed assets> \n",capitalproductivity[x]);
	                
	                capitalproductivityb[x]=deflatedBIMS[x]/defca[x]; //bims/current assets
	                printf("Capital Productivity:%lf <value deflated BIMS/deflated current assets> \n",capitalproductivityb[x]);
	                
	                capitalintensity[x] = deffa[x]/numofemployees[x];
	                printf("Capital Intensity: %lf",capitalintensity[x]);
	                
	                system("pause");
	                system("cls");
	                
	                printf("Enter the firm's operating profit: \n",companyname[x]);
	                scanf("%lf",&operatingprofit[x]);
	                
	                defop[x]=(operatingprofit[x]/CPI[x])*100;
	                printf("Deflated operating profit: %lf \n",defop[x]);
	                
	                printf("Enter the labour cost: \n");
	                scanf("%lf",&labourcost[x]);
	                
	                deflabourcost[x]=(labourcost[x]/CPI[x])*100;
	                
	                
	                profibality[x]=(defop[x]/deflatedto[x])*100;
	                printf("Profibality: %lf \n",profibality[x]);
	                
	                processefficiency[x]=valueadded[x]/(deflatedti[x]-deflatedBIMS[x]);
	                printf("Process Efficiency: %lf \n",processefficiency[x]);
	                
	                BIMSperto[x]=(deflatedBIMS[x]/deflatedto[x])*100;
	                printf("BIMS per total output: %lf\n",BIMSperto[x]);
	                
	                BIMSperti[x]=(deflatedBIMS[x]/deflatedti[x])*100;
	                printf("BIMS per total input: %lf \n",BIMSperti[x]);
	                
	                labourcostperti[x]=(deflabourcost[x]/deflatedti[x])*100;			//try regular input
	                printf("labour cost per total input: %lf\n",labourcostperti[x]);
	                
	                labourcostperto[x]=(deflabourcost[x]/deflatedto[x])*100;			//try for regular output
	                printf("labour cost per total output: %lf\n",labourcostperto[x]);
	                
	                system("pause");
	                system("cls");
	                
	                totalproductivitymeasure[x]=deflatedto[x]/deflatedti[x];
	                printf("Total productivity measure : %lf \n",totalproductivitymeasure[x]);
	                
					labourcostcompetativnessto[x]=valueadded[x]/labourcostperto[x];
					printf("labour cost competativness using total output:%lf \n",labourcostcompetativnessto[x]);
	                
	                labourcostcompetativnessti[x]=valueadded[x]/labourcostperti[x];
					printf("labour cost competativness using total input:%lf \n",labourcostcompetativnessti[x]);
	                
	                labourcostcompetativness[x]=valueadded[x]/deflabourcost[x];
	                printf("labour cost competativness:%lf \n",labourcostcompetativness[x]);
	                
	                labourcostperemployee[x]= deflabourcost[x]/numofemployees[x];
	                printf("labour cost per employee :%lf \n",labourcostperemployee[x]);
	                
	                ouputperemployee[x]=deflatedto[x]/numofemployees[x];
	                printf("Output per employee:%lf \n",ouputperemployee[x]);
	                
	                labourshareinaddedvalue[x]=(deflabourcost[x]/valueadded[x])*100;
	                printf("labour share in added value:%lf \n",labourshareinaddedvalue[x]);
	                
	                ReturnonAssets[x]=(operatingprofit[x]/deffa[x])*100;
	                printf("Return on Assets: %lf \n",ReturnonAssets[x]);
	                
	                OperatingProfitMargin[x]=operatingprofit[x]/deflatedto[x];
	                printf("Operating Profit Margin: %lf \n",OperatingProfitMargin[x]);
	                
	                CurrentRatio[x]=defca[x]/defliab[x];
	          		printf("Current Ratio: %lf\n",CurrentRatio[x]);
	          	
			  		valueaddedtosalesratio[x]=(valueadded[x]/deflatedto[x])*100;
			  		printf("Value added to Sales Ratio: %lf \n",valueaddedtosalesratio[x]);
			  		
			  		OperatingProfittoValueAddedRatio[x]=(operatingprofit[x]/valueadded[x])*100;
			  		printf("Operating Profit to Value Added Ratio: %lf \n",OperatingProfittoValueAddedRatio[x]);
			  		
			  		CapitalTurnover[x]=deflatedto[x]/deffa[x];
			  		printf("Capital Turnover: %lf \n",CapitalTurnover[x]);
			  		
					system("pause");
			  		system("cls");
			  		
			  		printf("Enter total utilities <as percentage of input>: \n");
			  		scanf("%lf",&totalutilities[x]); 
			  		
			  		do{
			  			printf("Would you also like to calculate specific utilities? \n");
			  			printf("1. Yes\t2. No\t:");
						scanf("%d",&result);
					
						if(result==1){
							printf("Enter utility cost \n");
							scanf("%lf",&utilitycost);
							
							suc=(utilitycost/deflatedti[x])*100;
							printf("Specific Utility <as percentage of input>: %lf \n",suc);
							system("pause");
						}
						if(result==2){
							printf("OK, no specific utility calculation\n\n");
							system("pause");
							system("cls");
						}
						
			  		system("cls");
			  		}while((result<2)&&(result>0));
			  		
			  		UtilitiesperInput[x]=(totalutilities[x]/deflatedti[x])*100;
			  		printf(" Utilities per Input: %lf \n",UtilitiesperInput[x]);
			  		
			  		system("pause");
			  		system("cls");
			      //write to file
	                fprintf(fp," Year calculated: %d",year[x]);
		            fprintf(fp,"The ID is: %d \n\n",CID[x]);
		            fprintf(fp,"The used CPI is : %lf \n\n",CPI[x]);
		            fprintf(fp,"Total output (nominal value):  %lf\n",totaloutput[x]);
		            fprintf(fp,"Total output (real value or deflated): %lf\n\n",deflatedto[x]);
		            fprintf(fp,"BIMS: %lf \n",BIMS[x]);		            			
		            fprintf(fp,"Deflated BIMS: %lf \n\n",deflatedBIMS[x]);
		            fprintf(fp,"Added value: %lf ",valueadded[x]);
		           	fprintf(fp,"current assets (nominal value): %lf \n",currentassets[x]);
		        	fprintf(fp,"deflated current assets(real value) : %lf\n\n",defca[x]);
		            fprintf(fp,"Fixed assets: %lf \n",fixedassets[x]);
		            fprintf(fp,"Deflated fixed assets (real value):%lf \n\n",deffa[x]);
		            fprintf(fp,"current liabilities(nominal value): %lf \n",currentliabilities[x]);
		            fprintf(fp,"Deflated current liabilities (real value) : %lf \n\n",defliab[x]);
		            			
		            fprintf(fp,"Operating Capital: %lf \n",operatingcapital[x]);
		            fprintf(fp,"Total input (nominal value):%lf \n",totalinput[x]);
		            fprintf(fp,"Total input (real value):%lf \n\n",deflatedti[x]);
		            fprintf(fp,"Multifactor Productivity: %lf \n",multifactorpro[x]);
		            fprintf(fp,"Number of employees: %d \n",numofemployees[x]);
		            fprintf(fp,"labour productivity(using total output): %lf \n",labourproductivityto[x]);
	         		fprintf(fp,"labour productivity(using added value): %lf \n\n",labourproductivityav[x]);
	         			        
	         	    fprintf(fp,"Capital Productivity:%lf \n",capitalproductivity[x]);
	         		fprintf(fp,"Capital Intensity: %lf\n",capitalintensity[x]);
	         		fprintf(fp,"Operating profit :%lf \n ",operatingprofit[x]);
	                fprintf(fp,"Deflated operating profit: %lf \n\n",defop[x]);
	         		fprintf(fp,"Operating profit : %lf \n",operatingprofit[x]);
	         		fprintf(fp,"Labour cost (nominal value): %lf \n ",labourcost[x]);
		            fprintf(fp,"Labour cost (real value): %lf \n\n",deflabourcost[x]);
		            			
		            fprintf(fp,"Profibality: %lf \n",profibality[x]);
		            fprintf(fp,"Process Efficiency: %lf \n",processefficiency[x]);
		            fprintf(fp,"BIMS per total output: %lf\n",BIMSperto[x]);
		            fprintf(fp,"BIMS per total input: %lf \n\n",BIMSperti[x]);
		            fprintf(fp,"labour cost per total input: %lf\n",labourcostperti[x]);
		            fprintf(fp,"labour cost per total output: %lf\n\n",labourcostperto[x]);
		            
		            fprintf(fp,"Total productivity measure : %lf \n",totalproductivitymeasure[x]);
		            fprintf(fp,"labour cost competativness using total output:%lf \n",labourcostcompetativnessto[x]);
		            fprintf(fp,"labour cost competativness using total input:%lf \n\n",labourcostcompetativnessti[x]);
		            fprintf(fp,"labour cost per employee :%lf \n",labourcostperemployee[x]);
		            
		            fprintf(fp,"labour cost competativness:%lf \n",labourcostcompetativness[x]);
		            fprintf(fp,"labour cost per employee :%lf \n",labourcostperemployee[x]);
		            fprintf(fp,"Output per employee:%lf \n",ouputperemployee[x]);
		            fprintf(fp,"labour share in added value:%lf \n\n",labourshareinaddedvalue[x]);
		            
		            fprintf(fp,"Return on Assets: %lf \n",ReturnonAssets[x]);
		            fprintf(fp,"Operating Profit Margin: %lf \n",OperatingProfitMargin[x]);
		            fprintf(fp,"Current Ratio: %lf\n\n",CurrentRatio[x]);
					fprintf(fp,"Value added to Sales Ratio: %lf \n",valueaddedtosalesratio[x]);
					
		            fprintf(fp,"Operating Profit to Value Added Ratio: %lf \n",OperatingProfittoValueAddedRatio[x]);
		            fprintf(fp,"Capital Turnover: %lf \n",CapitalTurnover[x]);
		            fprintf(fp,"Total utilities: %lf \n",totalutilities[x]);
		            fprintf(fp,"Multifactor Productivity(using value added: %lf \n",multifactorproav[x]);
		            
		            fprintf(fp,"--------------------------------------------------------------------------------\n\n");

					
					
	                x++;
	                count++;
	            break;
	            
	            case 2:
	            	load();
	            	
	                printf ("Welcome to the Hotels & Restaurants sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 3:
	            	load();
	            	
	                printf ("Welcome to the Agriculture &fishing sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 4:
	            	load();
	            	
	                printf ("Welcome to the mining & querying sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 5:
	            	load();
	            	
	                printf ("Welcome to the Construction & Instillation sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 6:
	            	load();
	            	
	                printf ("Welcome to the Electricity & water supply sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 7:
	            	load();
	            	
	                printf ("Welcome to the Wholesale & Retail Trade sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 8:
	            	load();
	            	
	                printf ("Welcome to the Transport storage & Communication sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;   
	            
	            case 9:
	            	load();
	            	
	                printf ("Welcome to the Banking/Finance & Insurance Services sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 10:
	            	load();
	            	
	                printf ("Welcome to the Real Estate/Renting & Business services sector \n");
	                system("pause");
	                printf("Please wait on system to be updated \n");
	                system("pause");
	                system("cls");
	                
	            break;
	            
	            case 11:
	            	// display & Search function
	            	load();
	            	do{
	            		system("cls");
		            	printf("Would you like to : \n");
		            	printf("1.Search\t 2.Display:\t 3.Main Menu \n");
		            	scanf("%d",&result);
		            	system("cls");
		            	
		            	if(result==1){
		            	
		            	
			            	if(x>0){
				            	printf("Enter the comapy's ID you wish to search for: \n");
				            	scanf("%d",&search);
				            	system("cls");
				            	
				            	for(x=0;x<count;x++){
				            		
				            		if(search == CID[x]){
				            			printf("Search: \n");
				            			
				            			printf("%s",companyname[x]);
				            			printf("The name of the company is: %s and ID# %d \n", companyname[x],CID[x]);
										if(totaloutput[x]!=0){
											printf("Total output (nominal value):  %lf\n",totaloutput[x]);
											printf("Total output (real value or deflated): %lf\n\n ",deflatedto[x]);
											
										}
										else{
											printf("NO Total output \n");
											totaloutput[x]=0;
											deflatedto[x]=0;
										}
				            			if((totaloutput[x]!=0)&&(BIMS[x]!=0)){
				            				
				            				printf("Added value: %lf \n",valueadded[x]);
										}
										else{
											printf("Added value can not be calculated \n ");
											valueadded[x]=0;
										}
										
										if(BIMS[x]!=0){
										
											printf("BIMS: %lf \n",BIMS[x]);
											printf("Deflated BIMS: %lf \n\n",deflatedBIMS[x]);
										}
										else{
											printf("No BIMS entered\n\n");
											BIMS[x]=0;
											deflatedBIMS[x]=0;
										}
										if(currentassets[x]!=0){
											
				            				printf("current assets (nominal value): %lf \n",currentassets[x]);
				            				printf("deflated current assets(real value) : %lf\n\n",defca[x]);
				            				
				            			}
				            			else{
				            				printf("No Current assets \n");
				            				currentassets[x]=0;
				            				defca[x]=0;
										}
										
										if(fixedassets[x]!=0){
				            				printf("Fixed assets: %lf \n",fixedassets[x]);
				            				printf("Deflated fixed assets (real value):%lf \n\n",deffa[x]);
				            			}
				            			else{
				            				printf("No Fixed assets \n");
				            				fixedassets[x]=0;
				            				deffa[x]=0;
										}
										if(currentliabilities[x]!=0){
				            				printf("current liabilities(nominal value): %lf \n",currentliabilities[x]);
				            				printf("Deflated current liabilities (real value) : %lf \n\n",defliab[x]);
				            			}
				            			else{
				            				printf("No current liabilities\n\n");
				            				currentliabilities[x]=0;
				            				defliab[x]=0;
				            				
										}
										if((currentassets[x]!=0)&&(currentliabilities[x])){
										
				            				printf("Operating Capital: %lf \n",operatingcapital[x]);
				            			}
				            			else{
				            				printf("Operating Capital can not be calculated \n");
				            				operatingcapital[x]=0;
										}
										
										if(totalinput[x]!=0){
				            				printf(" Total input (nominal value):%lf \n",totalinput[x]);
				            				printf(" Total input (real value):%lf \n\n",deflatedti[x]);
				            			}
				            			else{
				            				printf("No total input\n\n");
				            				totalinput[x]=0;
				            				deflatedti[x]=0;
										}
										
										if((totalinput[x]!=0)&&(totaloutput[x])){
				            				printf(" Multifactor Productivity: %lf \n",multifactorpro[x]);
				            			}
				            			else{
				            				printf("Multifactor Productivity can not be calculated \n\n");
				            				multifactorpro[x]=0;
										}
										
										if(numofemployees[x]!=0){
				            				printf("Number of employees: %d \n",numofemployees[x]);
				            			}
				            			else{
				            				printf("Number of employees not entered\n\n");
				            				numofemployees[x]=0;
										}
										
										if((valueadded[x]!=0)&&(numofemployees[x])){
			         			        	printf("labour productivity(using added value): %lf \n\n",labourproductivityav[x]);
			         			    	}
			         			    	else{
			         			    		printf("labour productivity(using added value) can't be calculated\n\n");
			         			    		labourproductivityav[x]=0;
										 }
										 
										 if((valueadded[x]!=0)&&(numofemployees[x])){
				            				printf("labour productivity(using total output): %lf \n",labourproductivityto[x]);
			         			    	}
			         			    	else{
			         			    		printf("labour productivity(using total output) can't be calculated\n\n");
			         			    		labourproductivityto[x]=0;
										}
										
										if((BIMS[x]!=0)&&(currentassets[x])){
			         			        	printf("Capital Productivity:%lf \n",capitalproductivity[x]);
			         			    	}
			         			    	else{
			         			    		printf("Capital Productivity can't be calculated\n\n");
			         			    		capitalproductivity[x]=0;
										}
										 
										if((fixedassets[x]!=0)&&(numofemployees[x])){
			         			        	printf("Capital Intensity: %lf\n",capitalintensity[x]);
			         			    	}
			         			    	else{
			         			    		printf("Capital Intensity can't be calculated");
			         			    		capitalintensity[x]=0;
										}
										if(operatingprofit[x]!=0){
			         			        	printf("Operating profit :%lf \n ",operatingprofit[x]);
			         			        	printf("Deflated operating profit: %lf \n\n",defop[x]);
										}
										else{
											printf("Operating profit was not entered\n\n");
											operatingprofit[x]=0;
											defop[x]=0;
										}
			         			        
			         			        if(operatingprofit[x]){
			         			        	printf("Operating profit : %lf \n",operatingprofit[x]);
			         			    	}
			         			    	else{
			         			    		printf("Operating profit was not entered \n\n");
			         			    		operatingprofit[x]=0;
										 }
			         			        
			         			        if(labourcost[x]!=0){
											printf("Labour cost (nominal value): %lf \n ",labourcost[x]);
				            				printf("Labour cost (real value): %lf \n\n",deflabourcost[x]);
				            			}
				            			else{
				            				printf("Labour cost not entered\n\n");
				            				labourcost[x]=0;
				            				deflabourcost[x]=0;
										}
										
										if((operatingprofit[x]!=0)&&(totaloutput[x])){
				            				printf("Profibality: %lf \n",profibality[x]);
				            			}
				            			else{
				            				printf("Profibality can't be calculated\n\n");
				            				profibality[x]=0;
										}
										
										if((valueadded[x]!=0)&&(totalinput[x])&&(BIMS[x]!=0)){
				            				printf("Process Efficiency: %lf \n",processefficiency[x]);
				            			}
				            			else{
				            				printf("Process Efficiency can't be calculated\n\n");
				            				processefficiency[x]=0;
										}
										if((BIMS[x]!=0)&&(totaloutput[x]!=0)){
				            				printf("BIMS per total output: %lf\n",BIMSperto[x]);
				            			}
				            			else{
				            				printf("BIMS per total output can't be calculated\n\n");
				            				BIMSperto[x]=0;
										}
										if((BIMS[x]!=0)&&(totalinput[x]!=0)){
				            				printf("BIMS per total input: %lf \n\n",BIMSperti[x]);
				            			}
				            			else{
				            				printf("BIMS per total input can't be calculated\n\n");
				            				BIMSperti[x]=0;
										}
										
				            			if((labourcost[x]!=0)&&(totalinput[x]!=0)){
				            				printf("labour cost per total input: %lf\n",labourcostperti[x]);
				            			}
				            			else{
				            				printf("labour cost per total input can't be calculated\n\n");
				            				labourcostperti[x]=0;
										}
										
				            			if((labourcost[x]!=0)&&(totaloutput[x]!=0)){
				            				printf("labour cost per total output: %lf\n\n",labourcostperto[x]);
				            			}
				            			else{
				            				printf("labour cost per total output can't be calculated\n\n");
				            				labourcostperto[x]=0;
										}
				            			
				            			if((valueadded[x]!=0)&&(totalinput[x]!=0)){
				            				printf("Multifactor Productivity(using value added: %lf \n",multifactorproav[x]);
				            			}
				            			else{
				            				printf("Multifactor Productivity(using value added can't be calculated \n\n");
				            				multifactorproav[x]=0;
										}
				            			
				            			system("pause");
				            			system("cls");
									}
								else{
									printf("None found!\n");
								}
			            				            		
							}
		        	    }
		        	    else{
		        	    	system("COLOR 6B");
		        	   		printf("There is no data in system\n");
		        	   		system("pause");
		        	   		system("cls");
						}	
						}
						if(result==2){
						
							if(x>0){
								for(x=0;x<count;x++){
									printf("Display: \n\n");
									x++;
										printf("The name of the company is: %s and ID# %d \n", companyname[x],CID[x]);
										if(totaloutput[x]!=0){
											printf("Total output (nominal value):  %lf\n",totaloutput[x]);
											printf("Total output (real value or deflated): %lf\n\n ",deflatedto[x]);
											
										}
										else{
											printf("NO Total output \n");
											totaloutput[x]=0;
											deflatedto[x]=0;
										}
				            			if((totaloutput[x]!=0)&&(BIMS[x]!=0)){
				            				
				            				printf("Added value: %lf \n",valueadded[x]);
										}
										else{
											printf("Added value can not be calculated \n ");
											valueadded[x]=0;
										}
										
										if(BIMS[x]!=0){
										
											printf("BIMS: %lf \n",BIMS[x]);
											printf("Deflated BIMS: %lf \n\n",deflatedBIMS[x]);
										}
										else{
											printf("No BIMS entered\n\n");
											BIMS[x]=0;
											deflatedBIMS[x]=0;
										}
										if(currentassets[x]!=0){
											
				            				printf("current assets (nominal value): %lf \n",currentassets[x]);
				            				printf("deflated current assets(real value) : %lf\n\n",defca[x]);
				            				
				            			}
				            			else{
				            				printf("No Current assets \n");
				            				currentassets[x]=0;
				            				defca[x]=0;
										}
										
										if(fixedassets[x]!=0){
				            				printf("Fixed assets: %lf \n",fixedassets[x]);
				            				printf("Deflated fixed assets (real value):%lf \n\n",deffa[x]);
				            			}
				            			else{
				            				printf("No Fixed assets \n");
				            				fixedassets[x]=0;
				            				deffa[x]=0;
										}
										if(currentliabilities[x]!=0){
				            				printf("current liabilities(nominal value): %lf \n",currentliabilities[x]);
				            				printf("Deflated current liabilities (real value) : %lf \n\n",defliab[x]);
				            			}
				            			else{
				            				printf("No current liabilities\n\n");
				            				currentliabilities[x]=0;
				            				defliab[x]=0;
				            				
										}
										if((currentassets[x]!=0)&&(currentliabilities[x])){
										
				            				printf("Operating Capital: %lf \n",operatingcapital[x]);
				            			}
				            			else{
				            				printf("Operating Capital can not be calculated \n");
				            				operatingcapital[x]=0;
										}
										
										if(totalinput[x]!=0){
				            				printf(" Total input (nominal value):%lf \n",totalinput[x]);
				            				printf(" Total input (real value):%lf \n\n",deflatedti[x]);
				            			}
				            			else{
				            				printf("No total input\n\n");
				            				totalinput[x]=0;
				            				deflatedti[x]=0;
										}
										
										if((totalinput[x]!=0)&&(totaloutput[x])){
				            				printf(" Multifactor Productivity: %lf \n",multifactorpro[x]);
				            			}
				            			else{
				            				printf("Multifactor Productivity can not be calculated \n\n");
				            				multifactorpro[x]=0;
										}
										
										if(numofemployees[x]!=0){
				            				printf("Number of employees: %d \n",numofemployees[x]);
				            			}
				            			else{
				            				printf("Number of employees not entered\n\n");
				            				numofemployees[x]=0;
										}
										
										if((valueadded[x]!=0)&&(numofemployees[x])){
			         			        	printf("labour productivity(using added value): %lf \n\n",labourproductivityav[x]);
			         			    	}
			         			    	else{
			         			    		printf("labour productivity(using added value) can't be calculated\n\n");
			         			    		labourproductivityav[x]=0;
										 }
										 
										 if((valueadded[x]!=0)&&(numofemployees[x])){
				            				printf("labour productivity(using total output): %lf \n",labourproductivityto[x]);
			         			    	}
			         			    	else{
			         			    		printf("labour productivity(using total output) can't be calculated\n\n");
			         			    		labourproductivityto[x]=0;
										}
										
										if((BIMS[x]!=0)&&(currentassets[x])){
			         			        	printf("Capital Productivity:%lf \n",capitalproductivity[x]);
			         			    	}
			         			    	else{
			         			    		printf("Capital Productivity can't be calculated\n\n");
			         			    		capitalproductivity[x]=0;
										}
										 
										if((fixedassets[x]!=0)&&(numofemployees[x])){
			         			        	printf("Capital Intensity: %lf\n",capitalintensity[x]);
			         			    	}
			         			    	else{
			         			    		printf("Capital Intensity can't be calculated");
			         			    		capitalintensity[x]=0;
										}
										if(operatingprofit[x]!=0){
			         			        	printf("Operating profit :%lf \n ",operatingprofit[x]);
			         			        	printf("Deflated operating profit: %lf \n\n",defop[x]);
										}
										else{
											printf("Operating profit was not entered\n\n");
											operatingprofit[x]=0;
											defop[x]=0;
										}
			         			        
			         			        if(operatingprofit[x]){
			         			        	printf("Operating profit : %lf \n",operatingprofit[x]);
			         			    	}
			         			    	else{
			         			    		printf("Operating profit was not entered \n\n");
			         			    		operatingprofit[x]=0;
										 }
			         			        
			         			        if(labourcost[x]!=0){
											printf("Labour cost (nominal value): %lf \n ",labourcost[x]);
				            				printf("Labour cost (real value): %lf \n\n",deflabourcost[x]);
				            			}
				            			else{
				            				printf("Labour cost not entered\n\n");
				            				labourcost[x]=0;
				            				deflabourcost[x]=0;
										}
										
										if((operatingprofit[x]!=0)&&(totaloutput[x])){
				            				printf("Profibality: %lf \n",profibality[x]);
				            			}
				            			else{
				            				printf("Profibality can't be calculated\n\n");
				            				profibality[x]=0;
										}
										
										if((valueadded[x]!=0)&&(totalinput[x])&&(BIMS[x]!=0)){
				            				printf("Process Efficiency: %lf \n",processefficiency[x]);
				            			}
				            			else{
				            				printf("Process Efficiency can't be calculated\n\n");
				            				processefficiency[x]=0;
										}
										if((BIMS[x]!=0)&&(totaloutput[x]!=0)){
				            				printf("BIMS per total output: %lf\n",BIMSperto[x]);
				            			}
				            			else{
				            				printf("BIMS per total output can't be calculated\n\n");
				            				BIMSperto[x]=0;
										}
										if((BIMS[x]!=0)&&(totalinput[x]!=0)){
				            				printf("BIMS per total input: %lf \n\n",BIMSperti[x]);
				            			}
				            			else{
				            				printf("BIMS per total input can't be calculated\n\n");
				            				BIMSperti[x]=0;
										}
										
				            			if((labourcost[x]!=0)&&(totalinput[x]!=0)){
				            				printf("labour cost per total input: %lf\n",labourcostperti[x]);
				            			}
				            			else{
				            				printf("labour cost per total input can't be calculated\n\n");
				            				labourcostperti[x]=0;
										}
										
				            			if((labourcost[x]!=0)&&(totaloutput[x]!=0)){
				            				printf("labour cost per total output: %lf\n\n",labourcostperto[x]);
				            			}
				            			else{
				            				printf("labour cost per total output can't be calculated\n\n");
				            				labourcostperto[x]=0;
										}
				            			
				            			if((valueadded[x]!=0)&&(totalinput[x]!=0)){
				            				printf("Multifactor Productivity(using value added: %lf \n",multifactorproav[x]);
				            			}
				            			else{
				            				printf("Multifactor Productivity(using value added can't be calculated \n\n");
				            				multifactorproav[x]=0;
										}
				            			
				            			
				            			printf("--------------------------------------------------------------------------------\n");
								x--;
							}
						}
						else{
							printf("Nothing to display\n");
						}
						system("pause");
						system("cls");		
						
					}
					
				}while((result>0)&&(result<3));
				system("cls");
	            break;
	            
	            
	            case 12:
	            	
	            	do{
	            		system("cls");
		            	printf("Are you sure you want to exit ?\n");
		            	printf("1.Yes \t 2.No \n");
		            	scanf("%d",&choice);
		            	
		            	if(choice==1){
		                	printf("Thank you for your time \n");
		                	system("pause");
		                	bye();
		                
		                	return 0;
						}
						if(choice==2){
							printf("Ok,returning to main menu \n");
							system("pause");
							system("cls");
							
		            		break;
		            	}
	        		}while((choice<3)||(choice>0));
	        }
	    }while((choice < 13)||(choice>0));
    }
    else{
    	system("COLOR 4F");
		printf("\nWrong password\n");
		printf("try again \n");
		system("pause");
		system("cls");
		wrong++;
    }
    
}while(wrong<3);

if (wrong>2){
    printf("Treminated due to incorrect passcode x3");
    fclose(fp);
    return 0;
}
fclose(fp);
return 0;
}
