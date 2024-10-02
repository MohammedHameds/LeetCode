SELECT E.employee_id, E.name, 
       COUNT(M.reports_to) AS reports_count,                                      ROUND(AVG(M.age*1.00), 0) AS average_age
       
FROM Employees E
JOIN Employees M
ON E.employee_id = M.reports_to
GROUP BY E.employee_id, E.name
ORDER BY E.employee_id