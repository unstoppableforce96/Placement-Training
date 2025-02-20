```python
%load_ext sql
```


```python
%sql oracle+oracledb://c##pavan:pavan@localhost:1521/XE
```


```sql
%%sql
SELECT table_name FROM user_tables
```

     * oracle+oracledb://c%23%23pavan:***@localhost:1521/XE
    0 rows affected.
    




<table>
    <thead>
        <tr>
            <th>table_name</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>XYZ</td>
        </tr>
        <tr>
            <td>USERS</td>
        </tr>
        <tr>
            <td>CONTESTS</td>
        </tr>
        <tr>
            <td>CHALLENGES</td>
        </tr>
        <tr>
            <td>SUBMISSIONS</td>
        </tr>
        <tr>
            <td>PEOPLE</td>
        </tr>
        <tr>
            <td>BOOK</td>
        </tr>
        <tr>
            <td>EMPLOYEE</td>
        </tr>
    </tbody>
</table>




```sql
%%sql
SELECT * FROM users
```

     * oracle+oracledb://c%23%23pavan:***@localhost:1521/XE
    0 rows affected.
    




<table>
    <thead>
        <tr>
            <th>id</th>
            <th>name</th>
            <th>mail</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1</td>
            <td>Alice</td>
            <td>alice@example.com</td>
        </tr>
        <tr>
            <td>2</td>
            <td>Bob</td>
            <td>bob@example.com</td>
        </tr>
        <tr>
            <td>3</td>
            <td>Charlie</td>
            <td>charlie@example.com</td>
        </tr>
        <tr>
            <td>4</td>
            <td>David</td>
            <td>david@example.com</td>
        </tr>
        <tr>
            <td>5</td>
            <td>Eve</td>
            <td>eve@example.com</td>
        </tr>
        <tr>
            <td>6</td>
            <td>Frank</td>
            <td>frank@example.com</td>
        </tr>
        <tr>
            <td>7</td>
            <td>Grace</td>
            <td>grace@example.com</td>
        </tr>
        <tr>
            <td>8</td>
            <td>Hannah</td>
            <td>hannah@example.com</td>
        </tr>
        <tr>
            <td>9</td>
            <td>Ian</td>
            <td>ian@example.com</td>
        </tr>
        <tr>
            <td>10</td>
            <td>Jack</td>
            <td>jack@example.com</td>
        </tr>
    </tbody>
</table>




```python

```
