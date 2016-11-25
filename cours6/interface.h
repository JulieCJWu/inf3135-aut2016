// Types
// -----

typedef void * Definition;
typedef struct dictionnaire * Dictionnaire;
typedef enum statut {OK,
                     ERR_ECHEC_ALLOCATION,
                     ERR_INSERE_ENTREE_EXISTANTE,
                     ERR_DICTIONNAIRE_VIDE} Statut;

/**
 * Cree une dictionnaire vide et la retourne.
 *
 * @returns  La dictionnaire vide
 */
Dictionnaire dictionnaireCreer();

/**
 * Ajoute un element sur le dessus de la dictionnaire.
 *
 * Although we don't need to give names for the parameters, 
 *   it is better to give so that we can document down the usage in the javadoc.
 *
 * @param (dictionnaire)   Un pointeur vers la dictionnaire
 * @param (char)           ?
 * @param (void)           ?
 */
Dictionnaire dictionnaireInsereEntree
             (struct dictionnaire *, char *, void *);

int          dictionnaireSupprimerEntree
             (char *, Definition *, Dictionnaire *);
Statut       dictionnaireLitEntree
             (Dictionnaire, char *, Definition *);
