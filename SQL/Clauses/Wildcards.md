## Wildcard Characters

### Wildcard Symbols and Descriptions

| **Symbol** | **Description**                                                                 |
|------------|---------------------------------------------------------------------------------|
| `%`        | Represents zero or more characters                                              |
| `_`        | Represents a single character                                                   |
| `[]`       | Represents any single character within the brackets *                           |
| `^`        | Represents any character not in the brackets *                                  |
| `-`        | Represents any single character within the specified range *                    |
| `{}`       | Represents any escaped character **                                             |

* _Not supported in PostgreSQL and MySQL databases._

** _Supported only in Oracle databases._


## Using the `[]` Wildcard

The `[]` wildcard returns a result if any of the characters inside the brackets gets a match.

### Example

Return all customers starting with either "b", "s", or "p":

```sql
SELECT * FROM Customers
WHERE CustomerName LIKE '[bsp]%';
```


## Microsoft Access Wildcards

The Microsoft Access Database has some specific wildcards:

| **Symbol** | **Description**                                                         | **Example**                                                          |
|------------|-------------------------------------------------------------------------|----------------------------------------------------------------------|
| `*`        | Represents zero or more characters                                      | `bl*` finds `bl`, `black`, `blue`, and `blob`                        |
| `?`        | Represents a single character                                           | `h?t` finds `hot`, `hat`, and `hit`                                  |
| `[]`       | Represents any single character within the brackets                     | `h[oa]t` finds `hot` and `hat`, but not `hit`                        |
| `!`        | Represents any character not in the brackets                            | `h[!oa]t` finds `hit`, but not `hot` and `hat`                       |
| `-`        | Represents any single character within the specified range              | `c[a-b]t` finds `cat` and `cbt`                                      |
| `#`        | Represents any single numeric character                                 | `2#5` finds `205`, `215`, `225`, `235`, `245`, `255`, `265`, `275`, `285`, and `295` |

