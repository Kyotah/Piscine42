/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_colup.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 14:36:02 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 16:41:01 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_colup(int *a)
{
	int i;
	static int colup[5];

	i = 0;
	*colup = 0;
	while(i < 5)
	{
		colup[i] = a[i];
		i++;
	}
	return (colup);
}
