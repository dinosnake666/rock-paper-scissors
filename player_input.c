char player_input(void)
{
    char player_choice;

    do
    {
        player_choice = getchar();
        while(getchar() != '\n');

        if(player_choice == 'r' || player_choice == 'p' || player_choice == 's')
            break;
        else if (player_choice == 'q')
            return 0;
        else
            printf("Wrong input, try again.\tTip : press one of the keys highlighted in brackets then press [ENTER]\n");
    } while (player_choice != 'r' && player_choice != 'p' && player_choice != 's');
    return player_choice;
    
}