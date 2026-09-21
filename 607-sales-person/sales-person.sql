# Write your MySQL query statement below
#select s.name
#from SalesPerson as s left join Orders as o on s.sales_id=o.sales_id
#left join Company as c on c.com_id=o.com_id and c.name = "RED"
#where c.com_id is NULL ;

SELECT s.name
FROM SalesPerson AS s
LEFT JOIN (
    Orders AS o
    JOIN Company AS c
    ON o.com_id = c.com_id
    AND c.name = 'RED'
)
ON s.sales_id = o.sales_id
WHERE o.sales_id IS NULL;