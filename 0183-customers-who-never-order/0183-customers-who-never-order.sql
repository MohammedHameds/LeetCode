SELECT name as Customers from Customers
where Customers.id NOT IN 
(SELECT customerId FROM Orders )