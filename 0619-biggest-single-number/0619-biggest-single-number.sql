select max(a) num 
from (select num a from MyNumbers 
      group by num
      having count(num)=1)