/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:57:38 by rgallard          #+#    #+#             */
/*   Updated: 2022/09/08 16:49:41 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The realloc() function tries to change the size of the allocation pointed to
* by ptr to size, and returns ptr.  If there is not enough room to enlarge the
* memory allocation pointed to by ptr, realloc() creates a new allocation,
* copies as much of the old data pointed to by ptr as will fit to the new
* allocation, frees the old allocation, and returns a pointer to the allocated
* memory.  If ptr is NULL, realloc() is identical to a call to malloc() for size
* bytes.  If size is zero and ptr is not NULL, a new, minimum sized object
* is allocated and the original object is freed.  When extending a region
* allocated with calloc(3), realloc(3) does not guarantee that the additional
* memory is also zero-filled.
*/

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (size == 0)
	{
		size = 1;
		free(ptr);
		ptr = NULL;
	}
	if (ptr == NULL)
		return (malloc(size));
	new_ptr = malloc(size);
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
