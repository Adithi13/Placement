The RIGHT JOIN keyword returns all records from the right table (table2), and the matching records from the left table (table1). The result is 0 records from the left side, if there is no match.

Synatx:
```
SELECT column_name(s)
FROM table1
RIGHT JOIN table2
ON table1.column_name = table2.column_name;
```

In some databases RIGHT JOIN is called RIGHT OUTER JOIN.


## Orders Table

| OrderID | CustomerID | EmployeeID | OrderDate  | ShipperID |
|---------|------------|------------|-------------|-----------|
| 10308   | 2          | 7          | 1996-09-18 | 3         |
| 10309   | 37         | 3          | 1996-09-19 | 1         |
| 10310   | 77         | 8          | 1996-09-20 | 2         |

## Employees Table

| EmployeeID | LastName | FirstName | BirthDate  | Photo      |
|------------|----------|-----------|-------------|------------|
| 1          | Davolio  | Nancy     | 12/8/1968   | EmpID1.pic |
| 2          | Fuller   | Andrew    | 2/19/1952   | EmpID2.pic |
| 3          | Leverling| Janet     | 8/30/1963   | EmpID3.pic |


Query:
```
SELECT Orders.OrderID, Employees.LastName, Employees.FirstName
FROM Orders
RIGHT JOIN Employees ON Orders.EmployeeID = Employees.EmployeeID
ORDER BY Orders.OrderID;
```

The RIGHT JOIN keyword returns all records from the right table (Employees), even if there are no matches in the left table (Orders).

