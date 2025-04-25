#include <stdio.h>
#include <string.h>

// Define the cricket structure
struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

int main() {
    struct cricket players[10];
    struct cricket highest_avg_player;
    int i;
    
    // Initialize the highest_avg_player with a very low batting average
    highest_avg_player.batting_average = 0;
    
    // Input details for 10 players
    printf("Enter details of 10 cricket players:\n");
    
    for(i = 0; i < 10; i++) {
        printf("\nPlayer %d:\n", i+1);
        
        printf("Enter player name: ");
        scanf("%s", players[i].player_name);
        
        printf("Enter team name: ");
        scanf("%s", players[i].team_name);
        
        printf("Enter batting average: ");
        scanf("%f", &players[i].batting_average);
        
        // Check if this player has a higher batting average than the current highest
        if(players[i].batting_average > highest_avg_player.batting_average) {
            highest_avg_player = players[i];
        }
    }
    
    // Print the details of the player with the highest batting average
    printf("\nPlayer with highest batting average:\n");
    printf("Player Name: %s\n", highest_avg_player.player_name);
    printf("Team Name: %s\n", highest_avg_player.team_name);
    printf("Batting Average: %.2f\n", highest_avg_player.batting_average);
    
    return 0;
}
