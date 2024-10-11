## SQL SUM() Function

Syntax:
`SELECT SUM(column_name)` <br> `FROM table_name` <br> `WHERE condition;`


| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Return the sum of all Quantity fields in the OrderDetails table:** | `SELECT SUM(Quantity)`<br> `FROM OrderDetails;`                                                      |


### Add a WHERE Clause

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Return the sum of the Quantity field for the product with ProductID 11:** | `SELECT SUM(Quantity)`<br> `FROM OrderDetails` <br> `WHERE ProductId = 11;`|


### Use an Alias

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Name the column "total":** | `SELECT SUM(Quantity) AS total`<br> `FROM OrderDetails;`                                                      |


### Use SUM() with GROUP BY

`SELECT OrderID, SUM(Quantity) AS [Total Quantity]` <br> `FROM OrderDetails` <br> `GROUP BY OrderID;`

### SUM() With an Expression

`SELECT SUM(Quantity * 10)` <br> `FROM OrderDetails;` 
