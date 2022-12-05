#include "libft.h"
#include "extern.h"
#include "list.h"

void ft_printf(char *str, ...)
{
    t_list **alst = NULL;
    t_list *lst;
    va_list ap;
    int i = 0;

    va_start(ap, str);

    ft_str_recup_flags(str, alst, ap);

    lst = *alst;

    ft_putstr((char*) (*alst)->content);

   /* while(str[i])
    {
        reload:
        while(str[i] != '%' )
        {
            ft_putchar(str[i]);
            i++;
        }
        if(str[i+1] == '%')
            goto reload;
        else
        {
            ft_putstr((char*) lst->content);
            lst = lst->next;
            i += 2;
        }
    }*/


    ft_lstclearall(alst, &free);
    

    va_end(ap);
}

int main()
{
    int *pointer;
    t_list lst; 


    ft_printf("jenesais plus %s ce que je dis", "Je");
    
    
}