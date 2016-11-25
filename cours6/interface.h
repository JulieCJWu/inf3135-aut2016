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
Dictionnaire dictionnaireInsereEntree
             (struct dictionnaire *, char *, void *);
int          dictionnaireSupprimerEntree
             (char *, Definition *, Dictionnaire *);
Statut       dictionnaireLitEntree
             (Dictionnaire, char *, Definition *);
