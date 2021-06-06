#include"source.c"
#include"header.h"
int main(){
int n;
	switch(	menuPrincipal()){
		case 1:
			
		 	switch(locationVoiture()){
			
			 case 1:
			 	visualiserContrat();
			 	break;
			 case 2:
			 	louerVoiture();
			 	break;
			 case 3:
			 	retournerVoiture();
			 	break;
			 case 4:
			 	modifierContrat();
			 	break;
			 case 5:
			 	retour();
			 	break;
			 default :
			 	invalidOption();
		
			 }
		 	break;
	    case 2:
	    	switch (gestionDesVoitures()){
	    		case 1 :
	    			listeDesVoitures();
	    			break;
	    		case 2 :
	    			ajouterVoitures();
	    			break;
				case 3 :
					modifierVoiture();
					break;
				case 4:
					supprimerVoiture();
				    break;
				case 5:
					retour();
					break;
							
			}
	    	break;
	    case 3:
	    	switch (gestionDesClients()){
	    		case 1:
	    			listeDesClients();
	    			retour();
	    			break;
	    		case 2:
	    			printf("donnez nombre des clients ajoutons\n");
	    			scanf("$d",&n);
	    			ajouterClients( n);
	    			break;
	    		case 3:
	    			modifierClient();
	    			break;
	    		case 4 :
	    			supprimerClient();
	    			break;
	    		case 5:
					retour();
					break;
			}
	    	break;
	    case 4:
	    	Quitter();
	    	break;
	    default :
	    	 invalidOption();
	    	 break;	
			}
		
	}



