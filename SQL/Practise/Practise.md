***Question:*** Select all Spanish customers that starts with either "G" or "R":

Answer:
        SELECT * FROM Customers
        WHERE Country = 'Spain' AND (CustomerName LIKE 'G%' OR CustomerName LIKE 'R%');
