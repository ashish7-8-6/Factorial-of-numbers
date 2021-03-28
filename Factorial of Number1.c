
long fact(int i)
{
    if(i>0)
        return(i*fact(i-1));
    else
        return 1;
}

int main()
{
    int i;
    printf("Enter a no.\n");
    scanf("%d",&i);
    printf("%d",fact(i));

    return 0;
}
