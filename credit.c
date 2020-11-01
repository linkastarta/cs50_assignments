 #include <stdio.h>
    #include <cs50.h>
    
    int main (void)
    {
        int digit1 = 0, digit2 = 0, sum = 0, digit_total = 0, digit1_by2 = 0;
        long card_num = 0,test_num;
        do 
        {
            card_num = get_long("Number: ");
        }
        while (card_num==0);
        test_num = card_num/10;
        while(test_num != 0)
        {
            digit1 = test_num%10;
            test_num = test_num/100;
            digit1_by2=digit1*2;
            if (digit1_by2 < 10)
            {
                sum += digit1_by2;
            }
            else 
            {
                sum += digit1_by2%10 + 1;
            }
    
        }
        test_num = card_num;
        while(test_num!=0)
        {
            digit2 = test_num%10;
            test_num /=100;
            sum +=digit2;
        }
        test_num = card_num;
        if (sum%10==0)
        {
            while(test_num!=0)
            {
                digit_total++;
                test_num /=10;
            }
            switch(digit_total)
            {
                case 13:
                {
                    if (digit2==4) printf("VISA\n");
                    else printf("INVALID\n");
                    break;
                }
                case 16:
                {
                    if (digit1==5 &&(digit2 == 1 || digit2 == 2 || digit2 == 3 || digit2 == 4 || digit2 == 5)) printf("MASTERCARD\n");
                    else if (digit1==4) printf("VISA\n");
                    else printf("INVALID\n");
                    break;
                }
                case 15:
                {
                    if (digit2 == 3 && (digit1 == 4 || digit1 == 7)) printf("AMEX\n");
                    else printf("INVALID\n");
                    break;
                }
                default:
                    printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    
    }