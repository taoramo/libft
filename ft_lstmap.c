#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = 0;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst -> next;
	}
	return (head);
}
