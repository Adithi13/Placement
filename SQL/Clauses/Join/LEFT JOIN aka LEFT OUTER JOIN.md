The LEFT JOIN keyword returns all records from the left table (table1), and the matching records from the right table (table2). The result is 0 records from the right side, if there is no match.

Note: In some databases LEFT JOIN is called LEFT OUTER JOIN


## SQL JOIN Example with Customers and Orders

### Customers Table

| CustomerID | CustomerName                                 | ContactName      | Address                   | City       | PostalCode | Country |
|------------|----------------------------------------------|-------------------|---------------------------|------------|------------|---------|
| 1          | Alfreds Futterkiste                         | Maria Anders      | Obere Str. 57            | Berlin     | 12209      | Germany |
| 2          | Ana Trujillo Emparedados y helados         | Ana Trujillo      | Avda. de la Constitución 2222 | México D.F. | 05021      | Mexico  |
| 3          | Antonio Moreno Taquería                     | Antonio Moreno     | Mataderos 2312           | México D.F. | 05023      | Mexico  |

### Orders Table

| OrderID | CustomerID | EmployeeID | OrderDate  | ShipperID |
|---------|------------|------------|-------------|-----------|
| 10308   | 2          | 7          | 1996-09-18 | 3         |
| 10309   | 37         | 3          | 1996-09-19 | 1         |
| 10310   | 77         | 8          | 1996-09-20 | 2         |


### SQL JOIN Statement

We will join the `Customers` table with the `Orders` table using the `CustomerID` field from both tables:

```sql
SELECT Customers.CustomerName, Orders.OrderID
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
ORDER BY Customers.CustomerName;
```


Note: The LEFT JOIN keyword returns all records from the left table (Customers), even if there are no matches in the right table (Orders).
