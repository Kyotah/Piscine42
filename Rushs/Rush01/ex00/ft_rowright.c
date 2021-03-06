/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rowright.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 14:39:30 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 16:41:33 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_rowright(int *a)
{
	int i;
	static int rowright[5];

	i = 13;
	*rowright = 0;
	while (i < 17)
	{
		rowright[i] = a[i];
		i++;
	}
	return (rowright);
}
