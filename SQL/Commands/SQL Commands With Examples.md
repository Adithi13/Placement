

| SQL Command      | Example                                                                                                                         |
|------------------|---------------------------------------------------------------------------------------------------------------------------------|
| **SELECT**       | `SELECT * FROM employees;`                                                                                                      |
| **INSERT**       | `INSERT INTO employees (first_name, last_name, email) VALUES ('John', 'Doe', 'john.doe@example.com');`                          |
| **UPDATE**       | `UPDATE employees SET email = 'jane.doe@example.com' WHERE first_name = 'Jane' AND last_name = 'Doe';`                          |
| **DELETE**       | `DELETE FROM employees WHERE employee_id = 123;`                                                                                |
| **CREATE TABLE** | `CREATE TABLE employees ( employee_id INT PRIMARY KEY, first_name VARCHAR(50), last_name VARCHAR(50));`                         |
| **ALTER TABLE**  | `ALTER TABLE employees ADD COLUMN phone VARCHAR(20);`                                                                           |
| **DROP TABLE**   | `DROP TABLE employees;`                                                                                                         |
| **WHERE**        | `SELECT * FROM employees WHERE department = 'Sales';`                                                                           |
| **ORDER BY**     | `SELECT * FROM employees ORDER BY hire_date DESC;`                                                                              |
| **JOIN**         | `SELECT e.first_name, e.last_name, d.department_name FROM employees e JOIN departments d ON e.department_id = d.department_id;` |
