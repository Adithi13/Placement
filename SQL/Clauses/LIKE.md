# The SQL LIKE Operator
 -The LIKE operator is used in a WHERE clause to search for a specified pattern in a column.

 - There are two wildcards often used in conjunction with the LIKE operator:

      a] The percent sign % represents zero, one, or multiple characters
    
      b] The underscore sign _ represents one, single character

   
Syntax:
`SELECT column1, column2, ...` <br> `FROM table_name` <br> `WHERE columnN LIKE pattern;`

| Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Select all customers that starts with the letter "a":** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE 'a%';` |


### The _ Wildcard

| Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers from a city that starts with 'L' followed by one wildcard character, then 'nd' and then two wildcard characters:** | `SELECT * FROM Customers` <br> `WHERE city LIKE 'L_nd__';` |


### The % Wildcard

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers from a city that contains the letter 'L':** | `SELECT * FROM Customers` <br> `WHERE city LIKE '%L%';` |


### Starts with

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers that starts with 'La':** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE 'La%';` |


### can also combine any number of conditions using AND or OR operators.

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers that starts with 'a' or starts with 'b':** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE 'a%' OR CustomerName LIKE 'b%';` |

### Ends with

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers that ends with 'a':** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE '%a';` |


### can also combine "starts with" and "ends with"

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers that starts with "b" and ends with "s":** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE 'b%s';` |


### Contains
To return records that contains a specific letter or phrase, add the % both before and after the letter or phrase.

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers that contains the phrase 'or'** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE '%or%';` |


### Combine Wildcards

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers that starts with "a" and are at least 3 characters in length:** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE 'a__%';` |
| **Return all customers that have "r" in the second position:** | `SELECT * FROM Customers` <br> `WHERE CustomerName LIKE '_r%';` |


### Without Wildcard


If no wildcard is specified, the phrase has to have an exact match to return a result.

|Question                                              | Query                                       |
|-------------------------------------------------------|---------------------------------------------|
| **Return all customers from spain:** | `SELECT * FROM Customers` <br> `WHERE Country LIKE 'spain';` |


