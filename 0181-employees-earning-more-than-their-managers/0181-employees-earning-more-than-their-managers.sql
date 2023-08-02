SELECT a.NAME AS employee 
FROM Employee AS a JOIN Employee AS b 
ON a.managerId = b.id
AND a.salary > b.salary