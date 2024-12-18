A self join is a regular join, but the table is joined with itself.

Synatx:

```
SELECT column_name(s)
FROM table1 T1, table1 T2
WHERE condition;
```

T1 and T2 are different table aliases for the same table.


### Customers Table

Below is a selection from the "Customers" table:

| CustomerID | CustomerName                           | ContactName     | Address                       | City        | PostalCode | Country |
|------------|----------------------------------------|------------------|-------------------------------|-------------|------------|---------|
| 1          | Alfreds Futterkiste                   | Maria Anders      | Obere Str. 57                | Berlin      | 12209      | Germany |
| 2          | Ana Trujillo Emparedados y helados    | Ana Trujillo      | Avda. de la Constitución 2222 | México D.F. | 05021      | Mexico  |
| 3          | Antonio Moreno Taquería                | Antonio Moreno     | Mataderos 2312               | México D.F. | 05023      | Mexico  |



Query:

```
SELECT A.CustomerName AS CustomerName1, B.CustomerName AS CustomerName2, A.City
FROM Customers A, Customers B
WHERE A.CustomerID <> B.CustomerID
AND A.City = B.City
ORDER BY A.City;
```

