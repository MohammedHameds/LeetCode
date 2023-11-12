select to_char(sell_date) "sell_date", count(product) "num_sold" , 
listagg (product, ',') within group ( order by product) "products"       
from (select distinct * from Activities ) 
group by sell_date