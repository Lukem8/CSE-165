int specials(char *line, char* newpattern, int pattern_length, int line_length) {
									
	char p[pattern_length-1];			
	char p2[pattern_length-2];
	int a,incr,specialChar;
	int x,x2;
	int k,j,i;
	int check =0;
	for (i = 0; i < pattern_length; i++)
	{		
		
		if (newpattern[i] == '?')
		{ 
			//if (newpattern[i-1] == 92) {
				//pattern_length = backSlash(line, newpattern);
				//r = regCheck(line,newpattern,pattern_length,line_length);
				//if (r)
				//	return 1;
				//else 
				//	return 0;
			//	continue;		
			//}
				for (k = 0; k < pattern_length; k++)
				{
					if (k < i)
						a = k;
					if (k >= i)
						a = k+1;
					
					p[k] = newpattern[a];		
					

				}
				pattern_length -= 1;	
									
				x = specials(line, p, pattern_length, line_length);
			
				for (k = 0; k < pattern_length-1; k++)
				{
					if (k < i-1)
						a = k;
					if (k >= i-1)
						a = k+2;
					
					p2[k] = newpattern[a];		
					//which = 0;
					
				}
				pattern_length -= 1;
			
				x2 = specials(line, p2, pattern_length, line_length);
				if (x == 1 || x2 == 1)
					return 1;
				else 
					return 0;
		
		}
	}		
	
	for (i = 0; i < line_length; i++)
	{
		check = 0;
		if (line[i] == newpattern[0] || newpattern[0] == '.' ) 
		{
			check++;
			j=1;
			for (k = i+1; k < line_length; k++)		// k cant be less than pattern_length
			{	
				if (newpattern[j] == '+')			
				{	
					//if (newpattern[i-1] == 92){  //we gotta go through the whole pattern first, eliminate all of the backslashes, then call the regCheck function. 
					//pattern_length = backSlash(line, newpattern);	//also gotta fix for periods
					//pattern_length = plength;
					//r = regCheck(line, newpattern, pattern_length, line_length);
					//return r;
					//break;		
					//}			
					incr = i+1;
					specialChar = newpattern[j-1];
					while (line[incr] == specialChar) 	//while loop to get through the repeating character
					{
						incr++;
					}
					check++;
					
					if (check == pattern_length)
						return 1;
					k = incr;
					if (pattern_length > j)
					{
						if(line[k] == newpattern[j+1] || line[k] == newpattern[j+2])
						{	
							j += 2;
							check++;
							k++;
							continue;		//continue because we found the match
						}
						else 
						{
							check = 0;
							j = 1;		//reset j when we break
							break;
						}
					}
				}			
				
				if (check < pattern_length)
				{
					if(line[k] == newpattern[j] || newpattern[j] == '.')		
					{
						j++;
						check++;
	
					}
					else 
					{
						check = 0;
						j = 1;
						break;		
					}
				}
			}
			
			if (check == pattern_length || check == pattern_length-1)
			{	
				return 1;
			}
		}
	}	
    return 0;
}

