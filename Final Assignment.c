#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Global Constants
#define total_countries 195  //Total number of countries in the world
#define longest_name 56  	// Longest name of a country

// A structure to store all the data for a country
typedef struct country{
    char name[longest_name];
    int active_cases;
    int recovered;
    int deaths;
}country;

// A global array of country struct to store all the data related to a country
country country_array[total_countries];

// A function to add country to the array country_array
void add_country(char * new_name, int new_active, int new_recovered, int new_death){
    static int index = 0;
    country new_country = {.active_cases = new_active, .recovered = new_recovered, .deaths = new_death};
    strcpy(new_country.name, new_name);
    country_array[index] = new_country;
    index++;
}

// A function to find the country in the array that will return pointer the struct country
country * find_country(char name[longest_name]){
	int i;
    country * temp = country_array;
    for(i = 0; i < total_countries; i++)
        if(strcmp(temp->name, name) != 0)
            temp = (country_array + i);
    return temp;
}

// Update Data of a country
void update_country(char * name, int new_active, int new_recovered, int new_death){
    country * temp = find_country(name);
    temp->active_cases = new_active;
    temp->recovered = new_recovered;
    temp->deaths = new_death;
}

// A funciton to print all the cases
void show_all_cases(country C){
    int total = C.active_cases + C.deaths + C.recovered;
    printf("Total Number of cases are: %d\n",total);
    printf("The Number of active cases are: %d\n",C.active_cases);
    printf("The Number of recoverd are: %d\n",C.recovered);
    printf("The Number of deaths are: %d\n", C.deaths);
}

// A function to print all the active cases
void show_active_cases(country C){
    printf("The Number of active cases are: %d\n",C.active_cases);
}

// A functin to print all the recovered people
void show_recovered(country C){
    printf("The Number of recoverd are: %d\n",C.recovered);
}

// A funciton to print all the deaths
void show_deaths(country C){
    printf("The Number of deaths are: %d\n", C.deaths);
}

// Function to show the data according to the user input
void show(char * user_country, int user_input){
    country * temp = find_country(user_country);
    printf("\n");
    switch (user_input)
    {
    case 1:
        show_active_cases(*temp);
        break;
    case 2:
        show_recovered(*temp);
        break;
    case 3:
        show_deaths(*temp);
        break;
    case 4:
        show_all_cases(*temp);
        break;
    default:
        printf("Wrong Input");
    } 
}
int main()
{
    //Adding country wise data
    add_country("Nepal", 121, 31, 0);
    add_country("India", 1000, 200, 51);
    add_country("South Africa",2000, 10,0);
    update_country("Nepal",200,40,12);
    
    // Some variables for user input
    char user_country[longest_name];
    int user_input;

    //For user input
    printf("Enter the country name (first letter capital): ");
    scanf("%[^\n]c",user_country);
    printf("Enter :\n\t 1 for Active Cases\n\t 2 for Recovered\n\t 3 for Deaths\n\t 4 for all cases: ");
    scanf("%d",&user_input);
    
    // Printing User Requests
    show(user_country, user_input);

}
