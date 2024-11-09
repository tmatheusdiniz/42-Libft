/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:02:29 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/09 19:33:29 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
/*
  void    print_list(t_list *list)
  {
	t_list *current;
 
	current = list;
	while (current != NULL)
    {
		printf("current data: %d\n", *(int *)current -> content); 	
		current = current -> next;
	}
 }
                                      
int	main(int c, char **v)
{
	int		i;
	t_list	*new_elem;
	t_list	*new_node;
	t_list	**lst;
	(void)c;
	lst = (t_list **)malloc(sizeof(t_list *));
	if (!lst)
		return 1;
	i = atoi(v[1]); 
	*lst = ft_lstnew(malloc(sizeof(int)));
	*lst = ft_lstnew(&i);
	printf("Lista antes de adicionar um novo elemento:\n");
	print_list(*lst);
	i = 42;
	new_elem = ft_lstnew(malloc(sizeof(int)));
	*(int *)(new_elem->content) = i;
	printf("Novo elemento (42):\n");
	print_list(new_elem);
	printf("the list after new elem:\n");
	ft_lstadd_front(lst, new_elem);
	print_list(*lst);
	return 0;
}
*/
