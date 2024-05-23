SELECT Dep.name Department , Emp.name Employee, Emp.salary Salary
FROM Department Dep INNER JOIN Employee Emp
ON Dep.id = Emp.departmentId
WHERE (Dep.id, Emp.salary) 
IN (SELECT departmentId, MAX(salary) FROM Employee GROUP BY departmentId )
