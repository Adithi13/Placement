## The NOT Operator


***Question:*** Select only the customers that are NOT from Spain:

Answer:

        SELECT * FROM Customers
        
        WHERE NOT Country = 'Spain';
=====================================================================================================
## NOT LIKE


***Question:*** Select customers that does not start with the letter 'A':

Answer:

        SELECT * FROM Customers
        
        WHERE CustomerName NOT LIKE 'A%';
=====================================================================================================
## NOT BETWEEN

***Question:*** Select customers with a customerID not between 10 and 60:
Answer:

        SELECT * FROM Customers
        
        WHERE CustomerID NOT BETWEEN 10 AND 60;
========================================================================================================
***Question:*** Select customers that are not from Paris or London:

Answer:

        SELECT * FROM Customers
        WHERE  City NOT IN ('Paris', 'London');
        
==================================================================================================
***Question:*** Select customers with a CustomerId not greater than 50:

Answer:

        SELECT * FROM Customers
         WHERE  NOT CustomerID > 50;

  **Note:**  There is a not-greater-than operator: !> that would give you the same result.
========================================================================================================
***Question:*** Select customers with a CustomerID not less than 50:

Answer:

        SELECT * FROM Customers
        WHERE NOT CustomerId < 50;
        
**Note:**  There is a not-less-than operator: !< that would give you the same result.
