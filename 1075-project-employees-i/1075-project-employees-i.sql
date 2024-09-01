SELECT A.project_id, 
       ROUND (AVG (B.experience_years * 1.0 ),2)  AS average_years
FROM Project A 
INNER JOIN Employee B
ON A.employee_id = B.employee_id
GROUP BY A.project_id

