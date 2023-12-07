/*
 * Registre_Decalage_LED.c
 *
 *  Created on: 6 déc. 2023
 *      Author: alexi
 */

#include "Registre_Decalage_LED.h"


void randomDeLED(int chiffre){
	switch (chiffre) {
	    case 0:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    			HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    			HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		}
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	        break;
	    case 1:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<2; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 2:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<3; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 3:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<4; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 4:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<5; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 5:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<6; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 6:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<7; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 7:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<8; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 8:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<9; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 9:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<10; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 10:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<11; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    case 11:
	    	HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    	for (int supp = 0; supp<10; supp++){
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    	}
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_Registre_LED_1, 0);
	    		for (int j = 0; j<12; j++){
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 1);
	    		    HAL_GPIO_WritePin(BROCHE_Registre_LED, BROCHE_CLK, 0);
	    		    }
	    	break;
	    default:
	    	// Gérer d'autres chiffres ou afficher une erreur si nécessaire
	        break;
	}
}
