#include <stdio.h>
#include <mysql/mysql.h>

/*
 * To install libmysql: apt-get install libmysql-dev
 * To compile: gcc -o mysql_example -L/usr/lib/mysql -lmysqlclient mysql_example.c
 */


void main(void)
{
    MYSQL connection;
    mysql_init(&connection);

    if (mysql_real_connect(&connection, "hostname", "user", "password", "database", 0, NULL, 0)){
        printf("Yes! Connected\n");
        mysql_close(&connection);
    } else {
        printf("Fail!\n");
        printf("Error %d : %s\n", mysql_errno(&connection), mysql_error(&connection));
    }
}

