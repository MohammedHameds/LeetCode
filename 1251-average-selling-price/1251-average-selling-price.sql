select Prices.product_id,
nvl(round(sum(Prices.price * UnitsSold.units) / sum(UnitsSold.units),2),0) "average_price"
from Prices left outer join UnitsSold
on Prices.Product_id = UnitsSold.product_id
where UnitsSold.purchase_date 
between Prices.start_date and prices.end_date 
or UnitsSold.purchase_date is  null 
group by Prices.product_id