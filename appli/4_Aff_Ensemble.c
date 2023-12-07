/*
 * 4_Aff_Ensemble.c
 *
 *  Created on: 15 nov. 2023
 *      Author: alexi
 */

#include "Mosfet.h"
#include "Afficheur_Sept_Seg.h"
#include "Aff_4_7_Segg.h"


int chiffres[] = {0, 1, 2, 3};

void Afficher(){

	int temps = 500;
			int i = 0;
			while (temps != 0) {
				temps=temps-1;
				if (i==0){
					mosfet_Change(chiffres[i]);
					afficher_7_seg(3);
				}
				else if (i==1){
					mosfet_Change(chiffres[i]);
					afficher_7_seg(5);
				}
				else if (i==2){
					mosfet_Change(chiffres[i]);
					afficher_7_seg(9);
				}
				else if (i==3){
					mosfet_Change(chiffres[i]);
					afficher_7_seg(7);
				}


				if (temps==1){
					temps = 500;
					i = i+1;

				}
				if (i==4){
					i=0;
				}
			}

	/*Delay_ms(1000);
	afficher_7_seg(1);
	Delay_ms(1000);
	afficher_7_seg(2);*/
}
