#include <stdio.h>  //header file

int x,moviesel,seatnumber,ct,ph,date,time;
int cn,ced,cvv,dated,datem,datey;
char seatsbooked[40] = {'F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F'};
float timel;
int total,price,counter;
char cdf[25];
char cdl[25];
char seatrow,sel,endsel;
counter = 0;

int display(x){
    //DISPLAYS WELCOME LOGO
    printf("***********************************************************************\n");
    printf("***********************************************************************\n");
    printf(" 	 ___           _      ___ _                       _  \n");
    printf(" 	| _ ) ___  ___| |__  / __(_)_ _  ___ _ __  __ _  | | \n");
    printf("	| _ \\/ _ \\/ _ \\ / / | (__| | ' \\/ -_) '  \\/ _` | |_| \n");
    printf("	|___/\\___/\\___/_\\_\\  \\___|_|_||_\\___|_|_|_\\__,_| (_) \n\n");
    printf("***********************************************************************\n");
    printf("***********************************************************************\n\n");
    printf("\t\tWELCOME TO ONLINE MOVIE BOOKING\n\n");
    selecthalls();         //DISPLAYS SELLECTHALLS FUNCTION
    scanf("%d",&x);         //GETS WHICH HALL IS SELECTED BY USER
    return x;               //RETURNS X VALUE FROM THIS FUNCTION TO MAIN FUNCTION
}

void selecthalls(){
    printf("\n\n1. COLOMBO\n");
    printf("2. GAMPAHA\n");
    printf("3. RAJAGIRIYA\n");
    printf("4. JA ELA\n");
    printf("5. MORATUWA\n");
    printf("6. KANDY\n");
    printf("\n\nSELECT LOCATION: ");                //DISPLAYS LOCATIONS
}

void dateandtime(){
    printf("\n1. 20/03/2021");
    printf("\n2. 21/03/2021");
    printf("\n3. 22/03/2021");
    printf("\n4. 23/03/2021");
    printf("\n5. 24/03/2021");
    printf("\n6. 25/03/2021");
    printf("\n7. 26/03/2021");
    printf("\nSELECT DATE: ");                         //DISPLAYS DATES
    scanf("%d",&date);

    if(date == 1 | date == 2 | date == 3 | date == 4 | date == 5 | date == 6 | date == 7){          //CHECKS IF USER ENETERED VALUES IS IN GIVEN RANGE
    } else {
        printf("\n\nPLEASE SELECT A VALID DATE!");
        dateandtime();                             //DISPLAYS DATES IF USER ENTERED VALUE IS WRONG
    }
    printf("\n1. 10.00");
    printf("\n2. 13.00");
    printf("\n3. 16.00");
    printf("\n4. 19.00");
    printf("\n5. 22.00");
    printf("\nSELECT TIME: ");
    scanf("%d",&time);
    if(time == 1 | time == 2 | time == 3 | time == 4 | time == 5){              //CHECKS IF USER ENETERED VALUES IS IN GIVEN RANGE
    }else{
        printf("\n\nPLEASE SELECT A VALID TIME!");
        dateandtime();                                    //DISPLAYS TIME IF USER ENTERED VALUE IS WRONG
    }
}

void movielist(){
    system("cls");                                        //CLEARS SCREEN
    printf("\SELECT A MOVIE\n\n");                       //DISPLAYS MOVIES
    printf("\n1. AVENGERS");
    printf("\n2. SPIDER MAN");
    printf("\n3. ME BEFORE YOU");
    printf("\n4. CONJURING");
    printf("\n5. JURASSIC PARK");
    printf("\n6. ANANCONDA");
    printf("\n7. FROZEN 2");
    printf("\n8. JUMANJI 2");
    printf("\n9. SCOOBY DOO");
    printf("\n10.PADMAWATH");
    printf("\n\nSELECT MOVIE: ");
    scanf("%d",&moviesel);                                   //GETS USER INPUT AND ASSIGNS TO A VARIABLE
}

void moviebooking(){
    switch(moviesel){                                         //IDENTIFIES WHICH MOVIE IS SELECTED
        case 1:
            printf("\nTHE SELECTED MOVIE IS AVENGERS");
            seatbooking();                                    //DISPLAYS SEATBOOKING FUNCTION
            break;
        case 2:
            printf("\nTHE SELECTED MOVIE IS SPIDER MAN");
            seatbooking();
            break;
        case 3:
            printf("\nTHE SELECTED MOVIE IS ME BEFORE YOU");
            seatbooking();
            break;
        case 4:
            printf("\nTHE SELECTED MOVIE IS CONJURING");
            seatbooking();
            break;
        case 5:
            printf("\nTHE SELECTED MOVIE IS JURASSIC PARK");
            seatbooking();
            break;
        case 6:
            printf("\nTHE SELECTED MOVIE IS ANANCONDA");
            seatbooking();
            break;
        case 7:
            printf("\nTHE SELECTED MOVIE IS FROZEN 2");
            seatbooking();
            break;
        case 8:
            printf("\nTHE SELECTED MOVIE IS JUMANJI 2");
            seatbooking();
            break;
        case 9:
            printf("\nTHE SELECTED MOVIE IS SCOOBY DOO");
            seatbooking();
            break;
        case 10:
            printf("\nTHE SELECTED MOVIE IS PADMAWATH");
            seatbooking();
            break;
        default:
            printf("\nPLEASE ENTER A VALID MOVIE!");          //DISPLAYS ERROR IF ENTERED WRONG CHOICE
            break;
    }
}

void seatbooking(){
    printf("\n\nENTER A SEAT ROW '(A-D)': ");
    scanf(" %c",&seatrow);                                     //GETS USER INPUT AND ASSIGNS TO A VARIABLE
    if(seatrow=='A'| seatrow=='B' | seatrow=='C' | seatrow=='D'){             //CHECKS IF USER INPUT IS A OR B OR C OR D
            if(seatrow=='A'){
           price = 400;                                         //SETS PRICE TO RS.400 IF USER INPUT IS A
            }else{
            if(seatrow=='B'){
                price = 600;                                     //SETS PRICE TO RS.600 IF USER INPUT IS B
            }else{
                if(seatrow=='C'){
                    price = 800;                                  //SETS PRICE TO RS.800 IF USER INPUT IS C
                }else{
                    price = 1000;                                 //SETS PRICE TO RS.1000 IF USER INPUT IS D
                }
            }
            }
        printf("ENTER A SEAT NUMBER '(0-9)': ");
        scanf("%d",&seatnumber);                                    //GETS USER INPUT AND ASSIGNS TO A VARIABLE
        if(seatnumber==0 | seatnumber==1 | seatnumber==2 | seatnumber==3 | seatnumber==4 | seatnumber==5 | seatnumber==6 | seatnumber==7 |
           seatnumber==8 | seatnumber==9){                          //CHECKS IF USER INPUT IS FROM 0-9
                checkseat();                                        //GOES TO CHECKSEAT FUNCTION
                if(seatsbooked[counter] == 'Y'){
                    printf("SORRY THE SEAT IS BOOKED!");            //IF THE SEAT IS BOOKED DISPLAYS AN ERROR MESSAGE
                    seatbooking();
                }
            printf("THE SEAT NUMBER IS %c%d. TOTAL PRICE IS RS. %d",seatrow,seatnumber,price);      //DISPLAYS SEAT NO. AND PRICE
            seatsbooked[counter] = 'Y';                               //SETS THE SEAT TO BOOKED STATE
        } else {
            printf("ENTER A VALID SEAT NUMBER!");                      //DISPLAYS AN ERRROR MESSAGE IF THE SEAT IS ALREADY BOOKED
            seatbooking();                                             //DISPLAYS THIS FUNCTION AGAIN
        }
    } else {
    printf("ENTER A VALID SEAT ROW!");                                  //DISPLAYS AN ERRROR MESSAGE IF THE SEAT IS ALREADY BOOKED
    seatbooking();                                                      //DISPLAYS THIS FUNCTION AGAIN
    }
}

void checkseat(){
    switch(seatrow){                                                    //SETS THE COUNTER ACCORDING TO SEATROW AND SEATNUMBER
    case 'A':
        if(seatnumber==0){
            counter = 0;
        }
        if(seatnumber==1){
            counter = 1;
        }
        if(seatnumber==2){
            counter = 2;
        }
        if(seatnumber==3){
            counter = 3;
        }
        if(seatnumber==4){
            counter = 4;
        }
        if(seatnumber==5){
            counter = 5;
        }
        if(seatnumber==6){
            counter = 6;
        }
        if(seatnumber==7){
            counter = 7;
        }
        if(seatnumber==8){
            counter = 8;
        }
        if(seatnumber==9){
            counter = 9;
        }
        break;

        case 'B':
        if(seatnumber==0){
            counter = 10;
        }
        if(seatnumber==1){
            counter = 11;
        }
        if(seatnumber==2){
            counter = 12;
        }
        if(seatnumber==3){
            counter = 13;
        }
        if(seatnumber==4){
            counter = 14;
        }
        if(seatnumber==5){
            counter = 15;
        }
        if(seatnumber==6){
            counter = 16;
        }
        if(seatnumber==7){
            counter = 17;
        }
        if(seatnumber==8){
            counter = 18;
        }
        if(seatnumber==9){
            counter = 19;
        }
        break;

        case 'C':
        if(seatnumber==0){
            counter = 20;
        }
        if(seatnumber==1){
            counter = 21;
        }
        if(seatnumber==2){
            counter = 22;
        }
        if(seatnumber==3){
            counter = 23;
        }
        if(seatnumber==4){
            counter = 24;
        }
        if(seatnumber==5){
            counter = 25;
        }
        if(seatnumber==6){
            counter = 26;
        }
        if(seatnumber==7){
            counter = 27;
        }
        if(seatnumber==8){
            counter = 28;
        }
        if(seatnumber==9){
            counter = 29;
        }
        break;

        case 'D':
        if(seatnumber==0){
            counter = 30;
        }
        if(seatnumber==1){
            counter = 31;
        }
        if(seatnumber==2){
            counter = 32;
        }
        if(seatnumber==3){
            counter = 33;
        }
        if(seatnumber==4){
            counter = 34;
        }
        if(seatnumber==5){
            counter = 35;
        }
        if(seatnumber==6){
            counter = 36;
        }
        if(seatnumber==7){
            counter = 37;
        }
        if(seatnumber==8){
            counter = 38;
        }
        if(seatnumber==9){
            counter = 39;
        }
        break;
    }
}

void customerdetails(){
    system("cls");                                                         //CLEARS SCREEN
    printf("ENTER CUSTOMER DETAILS");
    printf("\n\nENTER CUSTOMER FIRST NAME: ");
    scanf("%s",&cdf);                                                       //GETS USER FIRST NAME AND ASSIGNS TO A VARIABLE
    printf("\nENTER CUSTOMER LAST NAME: ");
    scanf("%s",&cdl);                                                        //GETS USER LAST NAME AND ASSIGNS TO A VARIABLE
    printf("\nENTER CUSTOMER PHONE NUMBER: ");
    scanf("%d",&ph);                                                          //GETS USER PHONE NUMBER AND ASSIGNS TO A VARIABLE
    payment();
}
void payment(){
    printf("\n\nTHE SEAT NUMBER %c%d IS SELECTED BY %s %s (%d). PLEASE PAY RS.%d TO BOOK.",seatrow,seatnumber,cdf,cdl,ph,price);
    printf("\n\nSELECT CARD TYPE: ");
    printf("\n\n1. VISA CARD");
    printf("\n2. MASTER CARD");
    printf("\n\nCARD TYPE: ");
    scanf("%d",&ct);                                                                     //GETS CARD TYPE ASSIGNS TO A VARIABLE
    printf("\nENTER CARD NUMBER: ");
    scanf("%d",&cn);                                                                     //GETS CARD NUMBER ASSIGNS TO A VARIABLE
    printf("\nENTER CARD EXPIRATION DATE: ");
    scanf("%d",&ced);                                                                    //GETS CARD EXPIRATION DATE ASSIGNS TO A VARIABLE
    printf("\nENTER CARD CVV: ");
    scanf("%d",&cvv);                                                                    //GETS CARD CVV ASSIGNS TO A VARIABLE
    printf("\n\nCONFIRM CARD DETAILS (Y/N):");
    scanf(" %c",&sel);
    if(sel == 'Y'){
        printf("PAYMENT WAS SUCCESSFUL. RS.%d IS CREDITED FROM ACCOUNT NUMBER %d",price,cn);
        displayreceipt();                                                               //CALLS DISPLAYRECEIPT FUNCTION
        endrun();                                                                       //CALLS ENDRUN FUNCTION
    }else{
        payment();                                                                      //CALLS THIS FUNCTION
    }
}

void displayreceipt(){
    switch(date){                                                                       //SETS DATE
    case 1:
        dated = 20;
        datem = 03;
        datey = 2021;
        break;
    case 2:
        dated = 21;
        datem = 03;
        datey = 2021;
        break;
    case 3:
        dated = 22;
        datem = 03;
        datey = 2021;
        break;
    case 4:
        dated = 23;
        datem = 03;
        datey = 2021;
        break;
    case 5:
        dated = 24;
        datem = 03;
        datey = 2021;
        break;
    case 6:
        dated = 25;
        datem = 03;
        datey = 2021;
        break;
    case 7:
        dated = 26;
        datem = 03;
        datey = 2021;
        break;
    }

    switch(time){                                                                       //SETS TIME
    case 1:
        timel = 10.00;
        break;
    case 2:
        timel = 13.00;
        break;
    case 3:
        timel = 16.00;
        break;
    case 4:
        timel = 19.00;
        break;
    case 5:
        timel = 22.00;
        break;
    }
    switch(moviesel){                                                                   //DISPLAYS TICKET FOR THE MOVIE
    case 1:
        printf("\n\nTHE TICKET FOR AVENGERS MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 2:
        printf("\n\nTHE TICKET FOR SPIDER MAN MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 3:
        printf("\n\nTHE TICKET FOR ME BEFORE YOU MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 4:
        printf("\n\nTHE TICKET FOR CONJURING MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 5:
        printf("\n\nTHE TICKET FOR JURASSIC PARK MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 6:
        printf("\n\nTHE TICKET FOR ANANCONDA MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 7:
        printf("\n\nTHE TICKET FOR FROZEN 2 MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 8:
        printf("\n\nTHE TICKET FOR JUMANJI 2 MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 9:
        printf("\n\nTHE TICKET FOR SCOOBY DOO MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    case 10:
        printf("\n\nTHE TICKET FOR PADMAWATH MOVIE HAS BEEN BOOKED ON %d/%d/%d AT %.2f BY %s %s. \nSEAT NUMBER: %c%d \nPRICE: PAID ",dated,datem,datey,timel,cdf,cdl,seatrow,seatnumber);
        printf("\nYOUR TICKET HAS BEEN SENT VIA SMS TO YOUR MOBILE NUMBER. SHOW IT AT THE COUNTER.");
        printf("\n\nTHANK YOU FOR USING ONLINE MOVIE BOOK");
        break;
    }
}

void endrun(){
    printf("\n\nWOULD YOU LIKE TO BOOK ANOTHER MOVIE? (Y/N): ");                        //RETURNS TO THE MAIN MENU IF SELECTED Y
    scanf(" %c",&endsel);
    if (endsel == 'Y'){
        printf("\n\n");
        system("cls");                                                                   //CLEARS SCREEN
        main();                                                                          //CALLS MAIN MENU
    }
}

int main(){
    switch(display(x)){                                                                  //GETS X VALUE FROM DISPLAY FUNCTION
        case 1:
            system("cls");                                                               //CLEARS SCREEN
            printf("\nSELECTED LOCATION: COLOMBO \n");
            dateandtime();                                                               //CALLS DATEANDTIME FUNCTION AFTER SELECTING LOCATTION
            movielist();                                                                 //DISPLAYS MOVIE LIS
            moviebooking();                                                              //DISPLAYS MOVIE BOOKING
            customerdetails();                                                           //CALLS CUSTOMERDETAILS FUNCTION
            break;
        case 2:
            system("cls");
            printf("\n\nSELECTED LOCATION: GAMPAHA \n");
            dateandtime();
            movielist();
            moviebooking();
            customerdetails();
            break;
        case 3:
            system("cls");
            printf("\n\nSELECTED LOCATION: RAJAGIRIYA \n");
            dateandtime();
            movielist();
            moviebooking();
            customerdetails();
            break;
        case 4:
            printf("\n\nSELECTED LOCATION: JA ELA \n");
            dateandtime();
            movielist();
            moviebooking();
            customerdetails();
            break;
        case 5:
            printf("\n\nSELECTED LOCATION: MORATUWA \n");
            dateandtime();
            movielist();
            moviebooking();
            customerdetails();
            break;
        case 6:
            printf("\n\nSELECTED LOCATION: KANDY \n");
            dateandtime();
            movielist();
            moviebooking();
            customerdetails();
            break;

        default:
            printf("\nTYPE A VALID SELECT!\n\n");                                   //DISPLAYS AN ERROR IF ENTERED VALUE IS INCORRECT
            main();                                                                 //CALLS MAIN FUNCTION
            break;
    }
   return 0;                                                                        //RETURNS NULL TO THE SYSTEM
}
