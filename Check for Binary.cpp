int isBinary(char *str)
{
    //Code here
    
    for(int i=0; i<strlen(str); i++){
       if(str[i] !='0' && str[i] != '1')
       return 0;
    }
    return 1;
}
