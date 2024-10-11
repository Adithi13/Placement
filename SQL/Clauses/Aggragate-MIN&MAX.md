## SQL MIN() and MAX() Functions:

| MINIMUM SYNTAX                                             | MAXIMUM SYNATX                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| `SELECT MIN(column_name)` <br> `FROM table_name` <br> `WHERE condition;` | `SELECT MAX(column_name)` <br> `FROM table_name` <br> `WHERE condition;`                                                          |





| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Find the lowest price in the Price column:** | `SELECT MIN(Price)`<br> `FROM Products;`                                                             |
|**Find the highest price in the Price column:**|`SELECT MAX(Price)` <br> `FROM Products;`|




### Set Column Name (Alias)

When you use MIN() or MAX(), the returned column will not have a descriptive name. To give the column a descriptive name, use the AS keyword:
              `SELECT MIN(Price) AS SmallestPrice` <br> `FROM Products;`


### Use MIN() with GROUP BY

Here we use the MIN() function and the GROUP BY clause, to return the smallest price for each category in the Products table:
             `SELECT MIN(Price) AS SmallestPrice, CategoryID` <br> `FROM Products` <br> `GROUP BY CategoryID;`


 
