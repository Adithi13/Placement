## The SQL SELECT TOP Clause

- The **SELECT TOP** clause is used to specify the number of records to return.

- The **SELECT TOP** clause is useful on large tables with thousands of records. Returning a large number of records can impact performance.

| Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Select only the first 3 records of the Customers table** | `SELECT TOP 3 * FROM Customers;`            |

                                                                              


---> ***NOTE:*** 
           - Not all database systems support the SELECT TOP clause.
           - MySQL supports the **LIMIT** clause to select a limited number of records, while Oracle uses **FETCH FIRST n ROWS ONLY** and **ROWNUM**.

| **Database**                     | **Query Syntax**                                                                                                                                                     |
|-----------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **SQL Server / MS Access Syntax** | `SELECT TOP number|percent column_name(s)`<br>`FROM table_name`<br>`WHERE condition;`                                                                                |
| **MySQL Syntax**                  | `SELECT column_name(s)`<br>`FROM table_name`<br>`WHERE condition`<br>`LIMIT number;`                                                                                 |
| **Oracle 12 Syntax**              | `SELECT column_name(s)`<br>`FROM table_name`<br>`ORDER BY column_name(s)`<br>`FETCH FIRST number ROWS ONLY;`                                                         |
| **Older Oracle Syntax**           | `SELECT column_name(s)`<br>`FROM table_name`<br>`WHERE ROWNUM <= number;`                                                                                            |
| **Older Oracle Syntax (with ORDER BY)** | `SELECT *`<br>`FROM (SELECT column_name(s) FROM table_name ORDER BY column_name(s))`<br>`WHERE ROWNUM <= number;`                                                    |


## LIMIT and FETCH FIRST example

| Question                                             | Query                                                                                           |
|------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Select the first 3 records of the Customers table (MySQL):** | `SELECT * FROM Customers  LIMIT 3;`                                                             |
| **Select the first 3 records of the Customers table (Oracle 12):** | `SELECT * FROM Customers   FETCH FIRST 3 ROWS ONLY;`                                              |



## SQL TOP PERCENT Example

| Question                                                                                         | Query                                                                                           |
|--------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Selects the first 50% of the records from the "Customers" table (for SQL Server/MS Access):**   | `SELECT TOP 50 PERCENT * FROM Customers;`                                                       |
| **Same in the case of Oracle:**                                                                  | `SELECT * FROM Customers  FETCH FIRST 50 PERCENT ROWS ONLY;`                                   |


## ADD a WHERE CLAUSE

 | Question                                                                                                  | Query                                                                                           |
|-----------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| **Select the first 3 records of the Customers table where the country is "Germany" (SQL Server/MS Access):** | `SELECT TOP 3 * FROM Customers  WHERE Country='Germany';`                                      |
| **Select the first 3 records of the Customers table where the country is "Germany" (MySQL):**               | `SELECT * FROM Customers  WHERE Country='Germany' LIMIT 3;`                                 |
| **Select the first 3 records of the Customers table where the country is "Germany" (Oracle):**              | `SELECT * FROM Customers  WHERE Country='Germany'  FETCH FIRST 3 ROWS ONLY;`                 |

## ADD the ORDER BY Keyword [to sort the result]

 | Question                                                                                                      | Query                                                                                                   |
|---------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------|
| **Select the first 3 records of the Customers table where the country is "Germany" (SQL Server/MS Access):**   | `SELECT TOP 3 * FROM Customers  ORDER BY CustomerName DESC;`                                          |
| **Select the first 3 records of the Customers table where the country is "Germany" (MySQL):**                  | `SELECT * FROM Customers  ORDER BY CustomerName DESC LIMIT 3;`                                     |
| **Select the first 3 records of the Customers table where the country is "Germany" (Oracle):**                 | `SELECT * FROM Customers ORDER BY CustomerName DESC FETCH FIRST 3 ROWS ONLY;`                     |

