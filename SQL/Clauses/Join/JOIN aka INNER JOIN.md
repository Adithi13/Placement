# SQL JOIN 

The INNER JOIN clause in SQL is used to combine multiple tables and fetch records that have the same values in the common columns.

The difference in the use of INNER JOIN vs OUTER JOIN is that INNER JOIN returns combined records between tables, while the returns combined records from a specified table even if the join condition fails

Here’s an example of joining the `Products` table with the `Categories` table using the `CategoryID` field from both tables.

## Products Table

| ProductID | ProductName       | CategoryID | Price |
|-----------|--------------------|------------|-------|
| 1         | Chais              | 1          | 18    |
| 2         | Chang              | 1          | 19    |
| 3         | Aniseed Syrup      | 2          | 10    |

## Categories Table

| CategoryID | CategoryName      | Description                                                   |
|------------|--------------------|---------------------------------------------------------------|
| 1          | Beverages          | Soft drinks, coffees, teas, beers, and ales                  |
| 2          | Condiments         | Sweet and savory sauces, relishes, spreads, and seasonings    |
| 3          | Confections        | Desserts, candies, and sweet breads                            |

## SQL JOIN Statement

We will join the `Products` table with the `Categories` table using the `CategoryID` field from both tables:

```
SELECT Products.ProductID, Products.ProductName, Categories.CategoryName, Products.Price
FROM Products
INNER JOIN Categories
ON Products.CategoryID = Categories.CategoryID;
```


The INNER JOIN keyword returns only rows with a match in both tables. Which means that if you have a product with no CategoryID, or with a CategoryID that is not present in the Categories table, that record would not be returned in the result.




## Naming the Columns
It is a good practice to include the table name when specifying columns in the SQL statement.


Example
Specify the table names:
```
SELECT Products.ProductID, Products.ProductName, Categories.CategoryName
FROM Products
INNER JOIN Categories ON Products.CategoryID = Categories.CategoryID;
```

### JOINING 3 TABLES

```
SELECT Orders.OrderID, Customers.CustomerName, Shippers.ShipperName
FROM ((Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID)
INNER JOIN Shippers ON Orders.ShipperID = Shippers.ShipperID);
```



## Important Points About SQL INNER JOIN

- **INNER JOIN** is a SQL JOIN operation that allows users to retrieve data matching from multiple tables.
- It returns all the common rows from the tables when the join condition is met.
- **INNER JOIN** simplifies the process of handling complex queries, making database management more efficient.
- **INNER JOIN** is crucial for tasks like managing customer orders, product inventories, or any relational dataset.
