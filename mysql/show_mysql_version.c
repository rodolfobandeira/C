#include <stdio.h>
#include <mysql/mysql.h>

// gcc -o show_mysql_version -L/usr/lib/mysql -lshow_mysql_version.c
void main(void) {

  MYSQL connection;
  mysql_init(&connection);

  if ( mysql_real_connect(&connection, "hostname", "user", "password", "database", 0, NULL, 0) ) {
    printf("Yes! Connected\n");
    mysql_close(&connection);
  } else {
    printf("Fail!\n");
    printf("Error %d : %s\n", mysql_errno(&connection), mysql_error(&connection));
  }
}
