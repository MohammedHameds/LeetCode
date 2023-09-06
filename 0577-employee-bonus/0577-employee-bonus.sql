select emp.name , bons.bonus
from employee emp 
left join bonus bons 
on emp.empID = bons.empId
where bons.bonus < 1000 or bonus is null


