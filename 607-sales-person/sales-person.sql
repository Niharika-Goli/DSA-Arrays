# Write your MySQL query statement below
#select s.name 
#from SalesPerson as s left join (orders as o join company as c on c.com_id=o.com_id)
#on s.sales_id=o.sales_id
#where o.com_id IS NULL;

SELECT s.name
FROM SalesPerson AS s
LEFT JOIN Orders AS o
    ON s.sales_id = o.sales_id
LEFT JOIN Company AS c
    ON c.com_id = o.com_id
GROUP BY s.name, s.sales_id
HAVING SUM(c.name = 'RED') = 0
    OR SUM(c.name = 'RED') IS NULL;