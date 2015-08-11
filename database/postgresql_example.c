#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi

// Lib to connect to PostgreSQL database
#include <libpq-fe.h>

#define IP_DB   "YOUR_IP"
#define USER_DB "YOUR_USER"
#define PASS_DB "YOUR_PASSWORD"
#define DB      "YOUR_DATABASE"

/*
 * First step is install libpq-dev: sudo apt-get install libpq-dev
 *
 * To compile: gcc postgresql_example.c -o postgresql_example -lpq
 */
int main ()
{
    PGconn   *conn = NULL;
    PGresult *resultInsert;
    char connection[255];
    char queryString[255];

    sprintf(
        connection,
            "host=%s user=%s password=%s dbname=%s",
            IP_DB,
            USER_DB,
            PASS_DB,
            DB
    );
    conn = PQconnectdb(stringConexao);

    if(PQstatus(conn) != CONNECTION_OK) {
        printf(
            "\n\n Error while try to connect. \nError: %s  \n\n", 
            PQerrorMessage(conn)
        );
        PQfinish(conn);

    } else {
        printf("\n\n Connected in: %s \n", IP_DB);
    }

    sprintf(
        queryString, 
        "INSERT INTO your_table (field_one, field_two, field_three) VALUES (%d, '%s', %d);",
        atoi(valueOne),
        valueTwo,
        valueThree
    );

    resultSelect = PQexec(conn, queryString);

    if(!resultSelect){
        printf("Error \n");
    } else {
        printf("Ok \n");
    }

    PQfinish(conn);
    printf("\nEND\n");

    return 0;
}

