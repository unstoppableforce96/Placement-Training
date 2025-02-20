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



# Window Functions
- RANK()
- DENSE_RANK()
- ROW_NUMBER()

## RANK()
- Syntax
```sql
SELECT id, name, age, department, salary
RANK() OVER(PARTITION BY department ORDER BY salary DESC) AS rank
FROM employee
```


```sql
%%sql
SELECT id, name, age, department, salary,
RANK() OVER(ORDER BY salary DESC) AS rank
FROM employee
WHERE salary IS NOT NULL
FETCH FIRST 5 ROWS ONLY
```

    




<table>
    <thead>
        <tr>
            <th>id</th>
            <th>name</th>
            <th>age</th>
            <th>department</th>
            <th>salary</th>
            <th>rank</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>44</td>
            <td>Evan Moore</td>
            <td>40</td>
            <td>Operations</td>
            <td>85000</td>
            <td>1</td>
        </tr>
        <tr>
            <td>30</td>
            <td>Alexander Green</td>
            <td>41</td>
            <td>SW</td>
            <td>83000</td>
            <td>2</td>
        </tr>
        <tr>
            <td>7</td>
            <td>Michael Davis</td>
            <td>None</td>
            <td>Operations</td>
            <td>82000</td>
            <td>3</td>
        </tr>
        <tr>
            <td>18</td>
            <td>Henry Clark</td>
            <td>40</td>
            <td>HR</td>
            <td>80000</td>
            <td>4</td>
        </tr>
        <tr>
            <td>42</td>
            <td>Lucas Rodriguez</td>
            <td>30</td>
            <td>None</td>
            <td>80000</td>
            <td>4</td>
        </tr>
    </tbody>
</table>



# Joining the 3 tables
- users
- submissions
- challenges

# Grouping to find out what is the total score of each person


```sql
%%sql
SELECT u.id, u.name, COUNT(s.challenge_id) AS questions_tried, SUM(c.score) AS total_score
FROM
users u
JOIN
submissions s
ON u.id = s.user_id
JOIN
challenges c
ON s.challenge_id = c.id
GROUP BY u.id, u.name
ORDER BY u.id
```

    




<table>
    <thead>
        <tr>
            <th>id</th>
            <th>name</th>
            <th>questions_tried</th>
            <th>total_score</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1</td>
            <td>Alice</td>
            <td>3</td>
            <td>130</td>
        </tr>
        <tr>
            <td>2</td>
            <td>Bob</td>
            <td>3</td>
            <td>280</td>
        </tr>
        <tr>
            <td>3</td>
            <td>Charlie</td>
            <td>3</td>
            <td>420</td>
        </tr>
        <tr>
            <td>4</td>
            <td>David</td>
            <td>3</td>
            <td>260</td>
        </tr>
        <tr>
            <td>5</td>
            <td>Eve</td>
            <td>3</td>
            <td>220</td>
        </tr>
        <tr>
            <td>6</td>
            <td>Frank</td>
            <td>3</td>
            <td>490</td>
        </tr>
        <tr>
            <td>7</td>
            <td>Grace</td>
            <td>3</td>
            <td>700</td>
        </tr>
        <tr>
            <td>8</td>
            <td>Hannah</td>
            <td>3</td>
            <td>170</td>
        </tr>
        <tr>
            <td>9</td>
            <td>Ian</td>
            <td>3</td>
            <td>600</td>
        </tr>
        <tr>
            <td>10</td>
            <td>Jack</td>
            <td>3</td>
            <td>750</td>
        </tr>
    </tbody>
</table>




```python

```
