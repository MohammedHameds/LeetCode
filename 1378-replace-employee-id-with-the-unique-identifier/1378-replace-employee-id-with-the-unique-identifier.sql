select b.unique_id , a.name 
from Employees a , EmployeeUNI b
where a.id = b.id (+)