

typedef struct
{
    char EntityName[20];
    char EntityCode[20];
    char EntityType[20];
    char Constante[20];
    char Value[20];
    int Size;

} TypeTS;

// initiation of an array which will contain the elements of the symbol tableTypeTS ts[100];
TypeTS ts[100];
// a global counter for the symbol tablempteur global pour la table de symbole
int CpTabSym = 0;

// a search function: to search whether the entity already exists in the symbol table or not.
// i: the entity already exists in the symbol table, and its position is i, -1: the entity does not exist in the symbol table.

int Search(char entite[])
{
    int i = 0;
    while (i < CpTabSym)
    {
        if (strcmp(entite, ts[i].EntityName) == 0)
            return i;
        i++;
    }

    return -1;
}

// a function that will insert the program entities into the symbol table
void Insert(char entite[], char code[])
{

    if (Search(entite) == -1)
    {
        strcpy(ts[CpTabSym].EntityName, entite);
        strcpy(ts[CpTabSym].EntityCode, code);
        strcpy(ts[CpTabSym].Constante, "non");
        strcpy(ts[CpTabSym].Value, "");

        // printf("Entity is %s, Type of %s %d\n",ts[CpTabSym].EntityName,ts[CpTabSym].EntityType,CpTabSym);
        CpTabSym++;
    }
}

// a function to display the symbol table
void Show()
{
    printf("\n/***************Table of symboles ******************/\n");
    printf("_____________________________________________________________________________________\n");
    printf("\t| EntityName |  EntityCode  |  EntityType    |  Constante     |  Value     | SizeEntite \n");
    printf("___________________________________________________________________________________\n");
    int i = 0;
    while (i < CpTabSym)
    {

        printf("\t|%10s |%12s  |%12s    |%12s    |%12s    |%d        |\n", ts[i].EntityName, ts[i].EntityCode, ts[i].EntityType, ts[i].Constante, ts[i].Value, ts[i].Size);

        i++;
    }
}

// function that changes the type of an entity once it is recognized in the syntax

void InsertType(char entite[], char type[], int Size)
{

    int posEntite = Search(entite);
    if (posEntite != -1)
    {

        strcpy(ts[posEntite].EntityType, type);
        ts[posEntite].Size = Size;

        // printf("Entity is %s, Type of %s %d\n",ts[CpTabSym].EntityName,ts[CpTabSym].EntityType,CpTabSym);
    }
}
// check if we have exceeded the Size of the array
int SizeOverselect(char entite[], int Sizee)
{
    int posEntite = Search(entite);
    int SizeEntite = ts[posEntite].Size;
    if (Sizee > SizeEntite)
    {
        return 0;
    }
    else
        return 1;
}


//////////////////////////////////////////////////////
////Semantic routines

// to check if an idf is already declared
int doubleDeclaration(char entite[])
{
    int posEntite = Search(entite);

    // printf ("\nposi %d\n",posEntite);
    if (strcmp(ts[posEntite].EntityType, "") == 0)
        return 1; // I could not find the type associated with the entity in the symbol table and therefore it is not yet declared
    else
        return 0; // the entity type already exists in the TS and therefore it is a double declaration
}



// function that checks if the reading string is valid

int IsValide (char chaine[]){
    int l = strlen(chaine);
    l = l - 1;// to skip the end quote
    int i = 1; // to skip the beginning quote 
    while (i<l)
    {
        if(chaine[i]=='%'){
            i +=2;
        }else{
            return 0; // Chaine is not correct 
        }
    }
    return 1; // chaine is correct 
}

// calculate number of percentage in a string
int nbrP(char entite[])
{
    int i = 0;
    int count = 0;
    while (entite[i] != '\0')
    {
        if (entite[i] == '%')
        {
            count++;
            // i++;
        }
        i++;
    }
    return count;
}

// return the type of an idf
extern int i;
char type[100];
void getType(char entite[])
{
    int posEntite = Search(entite);

    if (strcmp(ts[posEntite].EntityType, "int") == 0)
    {
        type[i] = 'd';
        i++;
    }
    else if (strcmp(ts[posEntite].EntityType, "real") == 0)
    {
        type[i] = 'f';
        i++;
    }
    else if (strcmp(ts[posEntite].EntityType, "chaine") == 0)
    {
        type[i] = 's';
        i++;
    }
}

char formats[50];
// extract chars after %
void getFormats(char chaine[])
{
    int i = 0, j = 0;
    while (chaine[i] != '\0')
    {
        if (chaine[i] == '%')
        {
            i++;
            if ((chaine[i] == 'd') || (chaine[i] == 'f') || (chaine[i] == 's'))
            {
                formats[j] = chaine[i];
                j++;
            }
            else
                printf("Non valid format %d\n", i);
        }
        i++;
    }
}

// inverse a table
void reverseArray(char arr[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int compatible(char entite[])
{
    int i = 0;
    getType(entite);

    int length = strlen(formats);
    reverseArray(formats, length);

    while (formats[i] != '\0' && type[i] != '\0')
    {
        if (formats[i] != type[i])
        {
            return 1; // non-identical arrays
}
        i++;
    }

    if (formats[i] != '\0' || type[i] != '\0')
    {
        return 1; // different table sizes
    }
    return 0; // Identical arrays
}

// return the type of an idf
char RGetType(char entite[])
{
    int posEntite = Search(entite);
    if (strcmp(ts[posEntite].EntityType, "Float") == 0)
    {
        return 'f';
    }
    else
    {
        if (strcmp(ts[posEntite].EntityType, "int") == 0)
        {
            return 'd';
        }
        else
        {
            if (strcmp(ts[posEntite].EntityType, "char") == 0)
            {
                return 's';
            }
        }
    }
}

// Insert the Value of the constant into the symbol table
void InsertConst(char entite[], char Value[]){
    int posEntite = Search(entite);
    strcpy(ts[posEntite].Constante ,"oui");
    strcpy(ts[posEntite].Value, Value);
}

// for compatibility for example X is of integer type then the result of the assignment
// the logic was to calculate the Value of each idf Insert in symbol table, then compare between the type of the idf and the type of the inserted Value
typedef struct
{
    char Value[20];

} ValueTs;
extern int nbrAff;
ValueTs tableau_de_val[100];
int InsertIdfDansTab(char entite[]){
    int posEntite = Search(entite);
    if (strcmp(ts[posEntite].Value, "") == 0){
        return 1; // calculation cannot be performed because idf has no Value
}else{
        strcpy(tableau_de_val[nbrAff].Value, ts[posEntite].Value);
        nbrAff++;
        return 0; 
    }
}

void InsertCstDansTab(char Value[]){
    strcpy(tableau_de_val[nbrAff].Value, Value);
    nbrAff++;
}

void InsertOpDansTab(char op[]){
    strcpy(tableau_de_val[nbrAff].Value, op);
    nbrAff++;
}

