## SQL AVG() Function

Synatx:
          `SELECT AVG(column_name)` <br> `FROM table_name` <br> `WHERE condition;`


| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Find the average price of all products:** | `SELECT AVG(Price)`<br> `FROM Products;`|


### Add a WHERE Clause

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Return the average price of products in category 1:** | `SELECT AVG(Price)`<br> `FROM Products`<br> `WHERE CategoryID = 1;`|

### Use an Alias
| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Name the column "average price":** | `SELECT AVG(Price) AS [average price]`<br> `FROM Products;`|


### Higher Than Average

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Return all products with a higher price than the average price:** | `SELECT * FROM Products`<br> `WHERE price > (SELECT AVG(price) FROM Products);`|

### Use AVG() with GROUP BY

`SELECT AVG(Price) AS AveragePrice, CategoryID` <br> `FROM Products` <br> `GROUP BY CategoryID;`
