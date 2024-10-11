## SQL COUNT() Function

**SYNTAX:**
            `SELECT COUNT(column_name)` <br> `FROM table_name` <br> `WHERE condition;`


| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Find the total number of rows in the Products table:** | `SELECT COUNT(*)`<br> `FROM Products;`                                                      |


### Specify Column

You can specify a column name instead of the asterix symbol (*). If you specify a column name instead of (*), NULL values will not be counted.

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Find the number of products where the ProductName is not null:** | `SELECT COUNT(ProductName)`<br> `FROM Products;`                                                      |


### Add a WHERE Clause

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Find the number of products where Price is higher than 20:** | `SELECT COUNT(ProductID)`<br> `FROM Products` <br> `WHERE Price > 20;`                |



### Ignore Duplicates

If **DISTINCT** is specified, rows with the same value for the specified column will be counted as one.

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **How many different prices are there in the Products table:** | `SELECT COUNT(DISTINCT Price)`<br> `FROM Products;`               |

### Use an Alias

Give the counted column a name by using the AS keyword.

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Name the column "Number of records":** | `SELECT COUNT(*) AS [Number of records]`<br> `FROM Products;`               |

### Use COUNT() with GROUP BY

Here we use the COUNT() function and the GROUP BY clause, to return the number of records for each category in the Products table:

        `SELECT COUNT(*) AS [Number of records], CategoryID` <br> `FROM Products` <br> `GROUP BY CategoryID;`


