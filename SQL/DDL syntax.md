1] **CREATE:** Create database or its objects (table, index, function, views, store procedure, and triggers)	
**Synatx:** CREATE TABLE table_name (column1 data_type, column2 data_type, ...);

2] **DROP:**	Delete objects from the database	
 **Syntax:** DROP TABLE table_name;

3] **ALTER:** Alter the structure of the database	
  **Syntax:** ALTER TABLE table_name ADD COLUMN column_name data_type;

4] **TRUNCATE:**	Remove all records from a table, including all spaces allocated for the records are removed	
  **Synatx:** TRUNCATE TABLE table_name;

5] **COMMENT:**	Add comments to the data dictionary
   **Synatx:** COMMENT 'comment_text' ON TABLE table_name; 

6] **RENAME:**	Rename an object existing in the database	
   **Syntax:** RENAME TABLE old_table_name TO new_table_name;
