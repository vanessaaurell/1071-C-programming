#include <stdio.h>

void prchar(char c, int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);

}

void drawRect(int height, int width, int filled)
{
    if(filled)
    {
        for(int i=1;i<=height;++i)
        {
            for(int j=1; j<=width;++j)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=1; i<=height;++i)
        {
            for(int j=1;j<=width;++j)
            {
                if(i==1 || j==1 || i==height || j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}




void drawVertTri(int height, int type, int filled)
{
    switch(type)
    {
    case 1:
        if (filled)
        {
            for(int i=1; i<=height; ++i)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else{
            for(int i=1; i<=height; ++i){
                if(i==1 || i==height){
                        prchar('*',i);

                }else{
                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
        }
        printf("\n");
    }
}
    break;

	case 2:
	{
		if(filled)
		{
			for(int i=1; i<=height;i++)
			{
				prchar(' ',height-i+1);
				prchar('*',i);
				printf("\n");
			}
		}
		else
		{
			for(int i=1; i<=height;i++)
			{
				for(int j=1;j<=height;j++)
				{
					if(i==height || j==height || i==height || j==height-i+1)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
		}
	}
    break;
    
    case 3:
		{
        	if(filled)
        		{
            		for(int i=1 ; i<=height ; i++)
            			{
                			prchar(' ',i);
                			prchar('*',height-i+1);
                			printf("\n");
            			}		
        		}
        else
        {
            for(int i=1 ; i<=height ; i++)
            {
                for(int j=1 ; j<=height ; j++)
                {
                    if(j==i || j==height || i==1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
    }
    break;
		
    case 4:
    	{
    		if(filled)
    		{
    			for(int i=1; i<=height; ++i)
    			{
    				prchar('*',height-i+1);
    				printf("\n");
				}
			}
			else
			{
				for(int i=1; i<=height; ++i)
				{
					for (int j=1; j<=height; ++j)
					{
						if(j==i || j==height || i==1)
							printf("*");
						else
							printf(" ");
					}
					printf("\n");
				}
			}
		}
        break;
	
	}
}

void drawTri(int height, int type, int filled)
{
	switch(type)
	{
	case 1:
	{
		if(filled)
		{
			for(int i=1; i<=height;i++)
			{
				prchar(' ',(height-i));
				prchar('*',2*i-1);
				printf("\n");
			}
		}
		else
		{
			prchar(' ', (height-1));
			prchar('*',1);
			printf("\n");
			for(int i=2; i<=height-1;i++)
			{
				prchar(' ',(height-i));
				prchar('*',1);
				prchar(' ', 2*i-3);
				prchar('*',1);
				printf("\n");
			}
			prchar('*',2*height-1);
			printf("\n");
		}
	}
	break;	
		
    case 2:
        {
            if(filled)
			{
				for(int i=1 ; i<=height ; i++)
				{
					prchar(' ',i-1);
    				prchar('*',2*(height-i)+1);
					printf("\n");
				}
            }
            else
            {
            	for(int i=1 ; i<=height ; i++)
            		{
                		for(int j=1 ; j<=height*2-1 ; j++)
                			{
                    			if(j==i || i==1 || i==height*2-j )
                        			printf("*");
                    			else
                        			printf(" ");
                			}		
            				printf("\n");
 
            		}	
			}
        }
        break;
    }
}





int main()
	{

    int choice;
    int height;
    int width;
    int type;
    int filled;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles Triangle\n");
        printf("4. Exit\n");
        printf("=> ");
        scanf("%d", &choice);
        if(choice==4)break;
        switch(choice)

        {
        case 1:
            printf("Enter height, width, and filled: ");
            scanf("%d %d %d", &height, &width, &filled);
            drawRect(height,width,filled);
            break;
        case 2:
            printf("Enter height, type, and filled: ");
            scanf("%d %d %d", &height, &type, &filled);
            drawVertTri(height,type,filled);
            break;
        case 3:
        	printf("Enter height, type, and filled: ");
        	scanf("%d %d %d", &height, &type, &filled);
        	drawTri(height,type,filled);
        	break;
        }
	}






return 0;
}
