#include <stdio.h>
#include <stdlib.h>
#include </usr/include/mysql/mysql.h>

int main()
{
    MYSQL mysql;
    mysql_init(&mysql);
    if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "1234", NULL, 0, (char *)NULL, 0)) {
        printf("Error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
        exit(1);
    }
    mysql_close(&mysql);
    return 0;
}
