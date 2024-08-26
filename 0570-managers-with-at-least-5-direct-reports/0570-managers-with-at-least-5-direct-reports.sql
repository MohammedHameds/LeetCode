SELECT NAME 
FROM Employee
WHERE ID IN 
(
SELECT managerId
FROM Employee
GROUP BY managerId
HAVING COUNT (managerId) >= 5
)